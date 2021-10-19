configuration file에서
outPath = conf.output

for 구문 돌아가고  
NF = conf.NF
filedir = outPath+"/"+NF+"/{temp}/"  
nickname = {}
saveddir = outPath+"/"+NF+"/"+nickname+"/"




```python
def postConfigured (filedir, savedir, servicename, filename = "main.go"):
    savefilename = servicename+"API.go"

    f = open(savedir+savefilename, 'w')
    f.close()
    
    #the input file
    fin = open(filedir+filename,"rt")
    #the stored file
    fout = open(savedir+savefile, "wt")

    for line in fin:
        fout.write(line.replace('main', servicename+"Router"))

    fin.close()
    fout.close()

```
# Placement function
```python
def placementFiles(tempPath, serviceName, savedir):
    import os
    import shutil


    file_list = os.listdir(tempPath)

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
```
