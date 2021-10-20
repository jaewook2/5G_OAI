import os
import configure
import shutil
import templateChange as tc
## To Do: orginize functions 
    
def placementFiles(tempPath, serviceName, savedir):
    file_list1 = os.listdir(tempPath)
    for fileName in file_list1:
        if fileName == 'main.go':
            savepath = savedir+serviceName+"/"
            shutil.move(tempPath+fileName, savepath+fileName)
            os.rename(savepath+fileName, savepath+serviceName+"Router.go")

    file_list = os.listdir(tempPath+"go")
    for fileName in file_list:
        if 'model_' in fileName:
            savepath =savedir+"model/"
        elif 'api_' in fileName or  fileName  in ['api.go']: 
            savepath = savedir+serviceName+"/"
        elif fileName in ['routers.go', 'helpers.go', 'error.go', 'impl.go', 'logger.go']: 
            savepath = savedir+"common/"
        else:
            continue

        # Placement
        file_list_savedir = os.listdir(savepath)
        if fileName not in file_list_savedir:
            shutil.move(tempPath+"go/"+fileName, savepath+fileName)
 
 
    file_list = os.listdir(tempPath+"api/")
    for fileName in file_list:
        print(fileName)
        if fileName not in os.listdir(savedir+serviceName+"/api/"):
            shutil.move(tempPath+"api/"+fileName, savedir+serviceName+"/api/"+ fileName)

def placementMain(filePath, targetPath, nfName, services):
    
    shutil.copyfile(filePath+"main.go", targetPath+"main.go")
    # add function 
    # for serviceName in services



# Basic parametr setting
conf = configure.configure()
basicPath = conf.outputdir
yamldir = conf.yamldir
templatedir = conf.templatedir
createNFs = conf.createNFs

# Create Directory 
 
for NF in createNFs:
    nfName = NF.name
    file_list = os.listdir(basicPath)
    if nfName in file_list:
    	shutil.rmtree(basicPath+nfName)
    os.mkdir(basicPath+nfName) # create NFname folder
    os.mkdir(basicPath+nfName+"/go") 
    os.mkdir(basicPath+nfName+"/go/model")
    os.mkdir(basicPath+nfName+"/go/common")
    os.mkdir(basicPath+nfName+"/go/temp")


    for serviceName in NF.services.keys():
        os.mkdir(basicPath+nfName+"/go/"+serviceName)
        os.mkdir(basicPath+nfName+"/go/"+serviceName+"/api")
        
        
        
# create serviceAPI
for NF in createNFs:
    nfName = NF.name ##nf name
    outputdir = basicPath+nfName+"/go/temp/"
    
    # cleanUp temppath
    file_list = os.listdir(basicPath+nfName+"/go")
    if "temp" in file_list:
    	shutil.rmtree(outputdir)
    os.mkdir(outputdir)
    
    
    for serviceName in NF.services.keys():
        # Modify template file
        templatePath = tc.modifiedMustache(templatedir,nfName,serviceName)
        # 
        yamlfile = NF.services[serviceName] # yamlfile name
        ### openapi generator
        osParam = conf.os + " -i " + yamldir+yamlfile + " -o " + outputdir + " -t " + templatePath
        os.system(osParam)                
        savedir = basicPath+nfName+"/go/"
        placementFiles(outputdir, serviceName, savedir)
        shutil.rmtree(outputdir)
        


