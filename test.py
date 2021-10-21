import os
import configure
import shutil
import templateChange as tc
import postconfigure as pc

## To Do: orginize functions 
# Path listup
# *basicPath ==> (Yaml, Template, NFs) 
# **NFs ==> (amf, smf,...)
# ***NF ==> NFname+"temp", NFname+"model", NFname+serviceName+"api", NFname+"common", 

# ** Yaml ==> (origin, amf, smf, ...)   

def placementFiles(tempPath, saveDir, sfName, serviceName):
# tempPath = BacsicPath + "NFs/" + sfName + "/"+sfName+"temp/"
# saveDir = BacsicPath + "NFs/" + sfName + "/"
# savePath = Dynmaic Path

# Deploy serviceName+"Router.go" and go.mod
    file_list = os.listdir(tempPath)
    for fileName in file_list:
        if fileName == 'main.go':
            savePath = saveDir+serviceName+"/"
            shutil.move(tempPath+fileName, savePath+serviceName+"Router.go")
    	
# Deploy other files
    tempPath = tempPath+"go/"
    file_list = os.listdir(tempPath)
    for fileName in file_list:
        if 'model_' in fileName:
            endName = sfName+"model/"
        elif 'api_' in fileName or  fileName  in ['api.go']: 
            endName = serviceName+"/"
        elif fileName in ['routers.go', 'helpers.go', 'error.go', 'impl.go', 'logger.go']: 
            endName = sfName+"common/"
        else:
            continue

        # Placement
        file_list_savedir = os.listdir(saveDir+endName)
        if fileName not in file_list_savedir:
            shutil.move(tempPath+fileName, saveDir+endName+fileName)
 
# Deploy api file (Optional? Not necessary?) 
 #   file_list = os.listdir(tempPath+"api/")
 #   for fileName in file_list:
 #       if fileName not in os.listdir(saveDir+serviceName+"/api/"):
 #           shutil.move(tempPath+"api/"+fileName, saveDir+serviceName+"/api/"+ fileName)

def placementMain(filePath, targetPath, sF):
    
    shutil.copyfile(filePath+"main.go", targetPath+"main.go")
    # add function 
    # for serviceName in services



# Basic parametr setting
conf = configure.configure()
basicPath = conf.basicDir #
yamlPath = conf.yamldir
templateDir = conf.templatedir
createSFs = conf.createSFs

# Create Directory 
sFBasicPath = basicPath+"NFs/"
if os.path.isdir(basicPath+"NFs/"):
	pass
else:
    os.mkdir(basicPath+"NFs/") 

for sF in createSFs:    
    sFName = sF.name
    file_list = os.listdir(sFBasicPath)
    if len(file_list) > 0:
        if sFName in file_list:
            shutil.rmtree(sFBasicPath+sFName)
    os.mkdir(sFBasicPath+sFName) # create NFname folder
    os.mkdir(sFBasicPath+sFName+"/"+sFName+"model")
    os.mkdir(sFBasicPath+sFName+"/"+sFName+"common")
    os.mkdir(sFBasicPath+sFName+"/"+sFName+"temp")


    for serviceName in sF.services.keys():
        os.mkdir(sFBasicPath+sFName+"/"+serviceName)
        os.mkdir(sFBasicPath+sFName+"/"+serviceName+"/api")
               
# create serviceAPI
for sF in createSFs:
    sFName = sF.name 
    sFOutputPath = sFBasicPath+sFName+"/"+sFName+"temp/"
    
    # cleanUp temppath
    if sFName+"temp" in os.listdir(sFBasicPath+sFName+"/"):
    	shutil.rmtree(sFOutputPath)
    os.mkdir(sFOutputPath)
    
    
    for serviceName in sF.services.keys():
        # Modify template file
        templatePath = tc.modifiedMustache(templateDir,sFName,serviceName)
        # 
        yamlfile = sF.services[serviceName] # yamlfile name
        ### openapi generator
        osParam = conf.os + " -i " + yamlPath+yamlfile + " -o " + sFOutputPath + " -t " + templatePath
        os.system(osParam)                
        saveDir = sFBasicPath+sFName+"/"
        placementFiles(sFOutputPath, saveDir, sFName, serviceName)
        shutil.rmtree(sFOutputPath)
        
    placementMain(basicPath, sFBasicPath+sFName+"/",sF)
    workPath = sFBasicPath + sF.name +"/"
    pc.postconfigure_ (workPath, sF)
    pc.createModFile (sFBasicPath+sFName+"/", sF)
        
   # run and modfiy	

