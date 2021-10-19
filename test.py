import os
import configure
import shutil

# Basic parametr setting
conf = configure.configure()
basicPath = conf.outputdir
yamldir = conf.yamldir
templatedir = conf.templatedir
createNFs = conf.createNFs

# Create Directory 
 
for NF in createNFs:
    nfName = NF.name
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
    outputdir = basicPath+nfName+"/temp"
    
    # cleanUp temppath
    shutil.rmtree(outputdir)
    os.mkdir(outputdir)
    
    
    for serviceName in NF.services.keys():
        yamlfile = NF.services[serviceName] # yamlfile name
        ### openapi generator
        os.system openapi_generator_cli generate -g go-server -i yamldir+yamlfile -o outputdir -t templatedir -p enumClassPrefix = true
        
        savedir = basicPath+nfName+"/"+serviceName+"/"
        postConfigured(outputdir,savedir, serviceName)
        
        savedir = basicPath+nfName+"/"
        placementFiles(templatedir, serviceName, savedir)

def postConfigured (filedir, savedir, serviceName, filename = "main.go"):
    savefilename = servicename+"API.go"

    f = open(savedir+serviceName, 'w')
    f.close()
    
    #the input file
    fin = open(filedir+filename,"rt")
    #the stored file
    fout = open(savedir+savefile, "wt")

    for line in fin:
        fout.write(line.replace('main', serviceName+"Router"))

    fin.close()
    fout.close()            
 
    
def placementFiles(tempPath, serviceName, savedir):
    file_list = os.listdir(tempPath+"/go")
    for fileName in file_list:
        print(fileName)
        if 'model_' in fileName:
            savepath = savedir+"model/"
        elif 'api_' in fileName:
            savepath = savedir+serviceName+"/"
        elif fileName in ['routers.go', 'helpers.go', 'error.go', 'impl.go', 'logger.go']: 
            savepath = savedir+"common/"
        else:
            continue

        # Placement
        file_list_savedir = os.listdir(savepath)
        if fileName not in file_list_savedir:
            shutil.move(tempPath+fileName, savepath+fileName)
