# Create NF API server
##  python function
createNF_GS.py : -o (output directory) -i (input directory) -t (template directory) -c (configuration file)

- configuration file ==> json?
{ amf / service (nick_name / TSname) }

## operation
1. create directory 
- AMF - {tmp}   
      - {Model}   
      - {Common}   
      - {APIservices} - {apiservice}- {api, files}
2. clean up {tmp} folder
3. generate API coder per service at tmp folder
  -  main.mustache : func main ==> func nicknameRouter 로 수정
4. placement 
5. repeat step 2-4 until allserviceapis create
6. create main function based on configuration file 
