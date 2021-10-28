import os
import configure
import shutil
import templateChange as tc
import postconfigure as pc
import temp_config as tempc
from os import chdir

## To Do: orginize functions 
# Path listup
# *basicPath ==> (Yaml, Template, NFs) 
# **NFs ==> (amf, smf,...)
# ***NF ==> server ==> src ==> (handlers. requests. models)

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
    os.mkdir(sFBasicPath+sFName+"/model")
    os.mkdir(sFBasicPath+sFName+"/request")
    os.mkdir(sFBasicPath+sFName+"/handlers")
    os.mkdir(sFBasicPath+sFName+"/temp")

               
# create serviceAPI
for sF in createSFs:
    sFName = sF.name 
    sFOutputPath = sFBasicPath+sFName+"/temp/"
    
    # cleanUp temppath
    if "temp" in os.listdir(sFBasicPath+sFName+"/"):
    	shutil.rmtree(sFOutputPath)
    os.mkdir(sFOutputPath)
    
    for serviceName in sF.services.keys():
        # Modify template file
        ##templatePath = tc.modifiedMustache(templateDir,sFName,serviceName)
        templatePath = templateDir 
        yamlfile = sF.services[serviceName] # yamlfile name
        ### openapi generator
        osParam = conf.os + " -i " + yamlPath+yamlfile + " -o " + sFOutputPath + " -t " +templatePath + " -g cpp-qt-qhttpengine-server"  
        os.system(osParam)      
        workingPath = sFOutputPath+"server"
        # build     
        nowPath =os.getcwd()
        print(nowPath)
        chdir(workingPath)
        print(os.getcwd())
        os.system('make') 
        chdir(nowPath)    


