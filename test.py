import os
import configure
import shutil

def postConfigured (filedir, savedir, serviceName, filename = "main.go"):
    savefilename = serviceName+"API.go"

    f = open(savedir+savefilename, 'w')
    f.close()
    
    #the input file
    fin = open(filedir+filename,"rt")
    #the stored file
    fout = open(savedir+savefilename, "wt")

    for line in fin:
        fout.write(line.replace('main', serviceName+"Router"))

    fin.close()
    fout.close()            
 
    
def placementFiles(tempPath, serviceName, savedir):
    file_list = os.listdir(tempPath+"go")
    for fileName in file_list:
        print(fileName)
        if 'model_' in fileName:
            savepath = savedir+"model/"
        elif 'api_' in fileName or  'api.go' in fileName:
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
    os.mkdir(basicPath+nfName+"/model")
    os.mkdir(basicPath+nfName+"/common")
    os.mkdir(basicPath+nfName+"/temp")

    for serviceName in NF.services.keys():
        os.mkdir(basicPath+nfName+"/"+serviceName)
        os.mkdir(basicPath+nfName+"/"+serviceName+"/api")
        
        
        
# create serviceAPI
for NF in createNFs:
    nfName = NF.name ##nf name
    outputdir = basicPath+nfName+"/temp/"
    
    # cleanUp temppath
    file_list = os.listdir(basicPath+nfName)
    if "temp" in file_list:
    	shutil.rmtree(outputdir)
    os.mkdir(outputdir)
    
    
    for serviceName in NF.services.keys():
        yamlfile = NF.services[serviceName] # yamlfile name
        ### openapi generator
        osParam = conf.os + " -i " + yamldir+yamlfile + " -o " + outputdir
        os.system(osParam)        
        savedir = basicPath+nfName+"/"+serviceName+"/"
        
        postConfigured(outputdir,savedir, serviceName)
        savedir = basicPath+nfName+"/"
        placementFiles(outputdir, serviceName, savedir)
        os.mkdir(outputdir)
        


