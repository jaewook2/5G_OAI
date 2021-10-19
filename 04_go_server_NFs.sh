#!/bin/sh

### 필요한 파일들의 위치 (수정 가능) ###
YAMLFILEPATH=./5GC_APIs
OPENAPI_GEN=./openapi-generator-cli-5.2.0.jar
MERGE_YAML_COMPONENTS=./merge_yaml_components/dist/windows/main.exe		# 리눅스: ./merge_yaml_components/dist/linux/main
#######################################


# cli argument에서 input text 파일을 알아냄
if [ $# -ne 1 ]; then
	echo "command line argument에 input 파일을 지정해주세요. (yaml파일	패키지이름	NF이름)"
	echo "5초 뒤 종료됩니다..."
	sleep 5
	exit -1
elif [ ! -e $1 ]; then
	echo "$1 를 찾을 수 없습니다."
	echo "5초 뒤 종료됩니다..."
	sleep 5
	exit -1
else
    input=$1
fi

# input text 읽기
count=-1
set +o posix
while IFS=$'\r' read line; do 
	count=$((count+1))
	while IFS=$'\t' read -r -a tmp ; do		# delimeter: \t
		yamlList[${count}]=${tmp[0]}
		pkgnameList[${count}]=${tmp[1]}
		nfList[${count}]=${tmp[2]}
	done <<< "${line}"
done < <(grep "" ${input})		# grep 은 맨 마지막 줄을 인식 못 하는 문제 해결을 위해서.


# 목록 출력
echo "-----------------------------------------------------------------"
for i in $(seq 0 $count) ; do
	echo "${yamlList[i]} | ${pkgnameList[i]} | ${nfList[i]}"
done
echo "-----------------------------------------------------------------"
echo -e "\n총 $((count+1))개\n\n"


# console 을 통해 입력 받기
echo -e "\n***값을 입력하지 않으면 [] 사이의 값이 입력됩니다.***\n\n"

read -p "--skip-validate-spec 을 사용할까요? [y]: " skipvalidatespec
read -p "코드에서 model을 호출할때 models. 를 앞에 붙일까요? [y]: " modelsprefix
read -p "main.go를 알아서 병합할까요? [y]: " mergemain
read -p "결과물을 저장할 위치를 입력하세요 [./5gc_NFs]: " OUTPUT
read -p "template 디렉토리 위치를 지정해주세요 [./04_template]: " TEMPLATE
read -p "모듈 이름을 입력하세요 [etri.re.kr/example]: " modulename


# 값을 입력하지 않은 경우 default 값 셋팅

skipvalidatespec=${skipvalidatespec:-y}
modelsprefix=${modelsprefix:-y}
mergemain=${mergemain:-y}
OUTPUT=${OUTPUT:-./5gc_NFs}
TEMPLATE=${TEMPLATE:-./04_template}
modulename=${modulename:-etri.re.kr/example}

if [ $skipvalidatespec != Y ] && [ $skipvalidatespec != y ] ; then unset skipvalidatespec; fi
if [ $modelsprefix != Y ] && [ $modelsprefix != y ] ; then unset modelsprefix; fi
if [ $mergemain != Y ] && [ $mergemain != y ] ; then unset mergemain; fi

#############################################################################################


### 템플릿 생성 ###
echo -e "\n템플릿 생성 중..."
java -jar ${OPENAPI_GEN} author template -g go-server -o ${TEMPLATE}

# logger.go
sed -i 's/package {{packageName}}/package logger/g' ${TEMPLATE}/logger.mustache

# routers.go
sed -i 's/package {{packageName}}/package routers/g' ${TEMPLATE}/routers.mustache
sed -i "s:import (:import (\n\t\"${modulename}/${nfList[0]}/logger\":g" ${TEMPLATE}/routers.mustache
sed -i 's/handler = Logger/handler = logger.Logger/g' ${TEMPLATE}/routers.mustache

# api.go
sed -i "s:import (:import (\n\t\"${modulename}/models\":g" ${TEMPLATE}/api.mustache
# api_*_service.go
sed -i "s:import (:import (\n\t\"${modulename}/models\":g" ${TEMPLATE}/service.mustache
# api_*.go (controller-api)
sed -i "s:import (:import (\n\t\"${modulename}/models\"\n\t\"${modulename}/${nfList[0]}/routers\":g" ${TEMPLATE}/controller-api.mustache
sed -i "s:Router {:routers.Router {:g" ${TEMPLATE}/controller-api.mustache
sed -i "s:Routes {:routers.Routes {:g" ${TEMPLATE}/controller-api.mustache
sed -i "s:Routes{:routers.Routes{:g" ${TEMPLATE}/controller-api.mustache
sed -i "s:EncodeJSONResponse:routers.EncodeJSONResponse:g" ${TEMPLATE}/controller-api.mustache
sed -i "s:ReadFormFile:routers.ReadFormFile:g" ${TEMPLATE}/controller-api.mustache

# go.mod
sed -i "s:{{gitHost}}/{{gitUserId}}/{{gitRepoId}}:${modulename}:g" ${TEMPLATE}/go.mod.mustache
sed -i "5i\replace ${modulename}/models => ../5gc_models\n\nrequire ${modulename}/models v1.0.0" ${TEMPLATE}/go.mod.mustache

### main.go ###
sed -i "s/package main/package ${nfList[0]}/g" ${TEMPLATE}/main.mustache
sed -i "s/func main/func Start/g" ${TEMPLATE}/main.mustache

# import 부분에 routers 추가
line_number=$(sed -n '/gitUser/=' ${TEMPLATE}/main.mustache | head -n 1)
line_number=${line_number:-8}
sed -i "${line_number}d" ${TEMPLATE}/main.mustache		# 한 줄 삭제
sed -i "${line_number}i\ \t\"${modulename}\/${nfList[0]}\/routers\"" ${TEMPLATE}/main.mustache

# apiInfo 선언 시작과 끝에 주석 추가
sed -i '0,/{{#apiInfo}}{{#apis}}/s/{{#apiInfo}}{{#apis}}/\n{{#apiInfo}}\t\/\/ start of apiInfo{{#apis}}/' ${TEMPLATE}/main.mustache
sed -i '0,/{{\/apis}}{{\/apiInfo}}/s/{{\/apis}}{{\/apiInfo}}/{{\/apis}}\t\/\/ end of apiInfo{{\/apiInfo}}\n/' ${TEMPLATE}/main.mustache

# NewRouter 함수인자 시작과 끝에 주석 추가
sed -i 's/'\
'router := {{packageName}}.NewRouter({{#apiInfo}}{{#apis}}{{classname}}Controller{{^-last}}, {{\/-last}}{{\/apis}}{{\/apiInfo}})'\
'/'\
'router := routers.NewRouter(\n\t\t{{#apiInfo}}\/\/ start of NewRouter args\n'\
'\t\t\/\/ {{packageName}} {{#apis}}\n'\
'\t\t{{classname}}Controller,{{\/apis}}\n'\
'\t\t\/\/ end of NewRouter args{{\/apiInfo}}\n\t)/g' ${TEMPLATE}/main.mustache



echo -e "\n\n템플릿 생성 완료! 템플릿을 수정하려면 지금 수정하세요.\n"
read -n 1 -s -r -p "Generate를 시작하려면 아무 키나 누르십시오..."

###################################################################################################
if [ ! -e ${OUTPUT} ]; then
	mkdir ${OUTPUT}
fi

for i in $(seq 0 $count) ; do

	echo -e "\n\n#####   $((count+1))개 중 $((i+1))번째: ${yamlList[$i]} 시작   #####\n"

	# 확장자 제거
	filename="${yamlList[$i]%.*}"


	### merge yaml components ###

	${MERGE_YAML_COMPONENTS} ${YAMLFILEPATH}/${yamlList[$i]}

	
	
	### openapi-generator: apis, supportingFiles (models 외 파일들) 생성 ###

	rm -rf ./${OUTPUT}/${nfList[i]}/${pkgnameList[i]}
	rm -rf ./${OUTPUT}/temp



	java -jar ${OPENAPI_GEN} generate -i ./${YAMLFILEPATH}/merged_${yamlList[$i]} \
		-g go-server \
		-o ./${OUTPUT}/temp \
		-t ${TEMPLATE} \
		-p enumClassPrefix=true \
		--global-property apis,supportingFiles \
		--package-name ${pkgnameList[i]} \
		${modelsprefix:+"--model-name-prefix"} ${modelsprefix:+"changethistomodelsdot"}
		# models. 를 붙이고 싶은 경우 model name prefix 를 changethistomodelsdot 로 해서 generate 한 뒤 이 문자열을 models.로 바꾼다
		# (model name prefix 를 models.로 하면 .이 사라지기 때문에 임시로 문자열 changethistomodelsdot을 사용한다)
	
	exitcode=$?

	if [ ! -z $modelsprefix ] ; then
		# 대문자로 시작하는 건 models. 이 필요한 것 (models 모듈을 참조하는 것)
		sed -i 's/ChangethistomodelsdotChangethistomodelsdot/models./g' ./${OUTPUT}/temp/go/*
		for num in {0..9}; do sed -i 's/Changethistomodelsdot'${num}'/models.Model'${num}'/g' ./${OUTPUT}/temp/go/* ; done
		sed -i 's/Changethistomodelsdot/models./g' ./${OUTPUT}/temp/go/*

		# 소문자로 시작하는 건 models. 이 필요없는 것 (그냥 매개변수명)
		for num in {0..9}; do sed -i 's/changethistomodelsdot'${num}'/model'${num}'/g' ./${OUTPUT}/temp/go/* ; done
		sed -i 's/changethistomodelsdot//g' ./${OUTPUT}/temp/go/*
	fi

	# 성공했을 때 메세지
	if [ $exitcode -eq 0 ] ; then
		echo -e "${yamlList[$i]} api,supportingFiles generate 성공\n\n"
		success+=("${yamlList[$i]}-----api,supportingFiles")

		# 파일 이동 / 정리
		mv ./${OUTPUT}/temp/go.mod ./${OUTPUT}

		if [ ! -e ${OUTPUT}/${nfList[i]} ]; then
			mkdir ${OUTPUT}/${nfList[i]}
		fi

		if [ ! -e ${OUTPUT}/${nfList[i]}/logger ]; then
			mkdir ${OUTPUT}/${nfList[i]}/logger
		fi
		mv ./${OUTPUT}/temp/go/logger.go ./${OUTPUT}/${nfList[i]}/logger
		
		if [ ! -e ${OUTPUT}/${nfList[i]}/routers ]; then
			mkdir ${OUTPUT}/${nfList[i]}/routers
		fi
		mv ./${OUTPUT}/temp/go/routers.go ./${OUTPUT}/${nfList[i]}/routers
		
		mkdir ${OUTPUT}/${nfList[i]}/${pkgnameList[i]}
		mv ./${OUTPUT}/temp/go/* ./${OUTPUT}/${nfList[i]}/${pkgnameList[i]}/
		


		# main.go 파일을 알아서 병합하지 않을 때
		if [ -z $mergemain ]  ; then
			mv ./${OUTPUT}/temp/main.go ./${OUTPUT}/${nfList[i]}/${pkgnameList[i]}/main.go
		
		# main.go 파일을 알아서 병합할 때
		else
			src_file=./${OUTPUT}/temp/main.go
			des_file=./${OUTPUT}/${nfList[i]}/${nfList[i]}.go
			
			if [ ! -e ${des_file} ]; then
				
				mv ${src_file} ${des_file}

				# import 부분에 pkgnameList 추가
				line_number=$(sed -n "/${nfList[i]}\/routers/=" ${des_file} | head -n 1)
				sed -i "${line_number}i\ \t\"${modulename}\/${nfList[i]}\/${pkgnameList[i]}\"" ${des_file}
			
			else
				# import 부분에 pkgnameList 추가
				line_number=$(sed -n "/${nfList[i]}\/routers/=" ${des_file} | head -n 1)
				sed -i "${line_number}i\ \t\"${modulename}\/${nfList[i]}\/${pkgnameList[i]}\"" ${des_file}

				# apiInfo 선언 부분 합치기
				src_start=$(sed -n '/start of apiInfo/=' ${src_file} | head -n 1)
				src_end=$(sed -n '/end of apiInfo/=' ${src_file} | head -n 1)
				des_end=$(sed -n '/end of apiInfo/=' ${des_file} | head -n 1)
				
				text_to_append=`sed -n "$((src_start+1)),$((src_end-1))p" ${src_file}`

				sed -i "${des_end}i\ \t" ${des_file}	# 공백
				j=-1
				while IFS=$'\r' read line; do 
					j=$((j+1))
					sed -i "$((j+des_end+1))i\ ${line}" ${des_file}
				done <<< $"$text_to_append"

				# NewRouter 함수인자 부분 합치기
				src_start=$(sed -n '/start of NewRouter args/=' ${src_file} | head -n 1)
				src_end=$(sed -n '/end of NewRouter args/=' ${src_file} | head -n 1)
				des_end=$(sed -n '/end of NewRouter args/=' ${des_file} | head -n 1)
				
				text_to_append=`sed -n "$((src_start+1)),$((src_end-1))p" ${src_file}`

				j=-1
				while IFS=$'\r' read line; do 
					j=$((j+1))
					sed -i "$((j+des_end))i\ ${line}" ${des_file}
				done <<< $"$text_to_append"
			fi
		fi


		# temp 디렉토리 삭제
		rm -rf ./${OUTPUT}/temp


	# 실패했을 때 메세지
	else
		echo -e "${yamlList[$i]} api,supportingFiles generate 실패\n\n"
		failed+=("${yamlList[$i]}-----api,supportingFiles")
	fi


	if [ $i != $count ] && [ ${nfList[i]} != ${nfList[i+1]} ] ; then
		sed -i "s/${nfList[i]}/${nfList[i+1]}/g" ${TEMPLATE}/*
	fi
done

#########################################################################################################

# 성공한 것들 목록
echo -e "\nSUCCESS:\n"
for file in ${success[@]} ; do echo "$file" ; done

# 실패한 것들 목록
echo -e "\nFAILED:\n"
for file in ${failed[@]} ; do echo "$file" ; done

read -n 1 -s -r -p "종료하려면 아무 키나 누르십시오..."
