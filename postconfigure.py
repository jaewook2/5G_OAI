### templatelist
# input define
import shutil
import os


def createModFile (workPath, sF):
# workPath = basicPath + /NFs/ + sF.name +"/"
# sF.name + 'common', sF.name+'model'
# basic modfile 
    targetPath = workPath

    f = open(targetPath+"go.mod", 'w')
    f.write ("module "+sF.name+"\n\n")
    f.write ("go 1.13\n\n")
    f.write ("require (\n")
# add discription for **
    f.write (sF.name+".com/"+sF.name+"common v0.0.0\n")
    f.write (sF.name+".com/"+sF.name+"model v0.0.0\n")
    f.write ("\n")
    for serviceName in sF.services.keys():
        f.write (sF.name+".com/"+serviceName+" v0.0.0\n")

    f.write ("github.com/gorilla/mux v1.7.3\n)\n\n")

    f.write ("replace (\n")
# add discription for **
    f.write (sF.name+".com/"+sF.name+"common v0.0.0 => ./"+sF.name+"common\n")
    f.write (sF.name+".com/"+sF.name+"model v0.0.0 => ./"+sF.name+"model\n")
    for serviceName in sF.services.keys():
        f.write (sF.name+".com/"+serviceName+" v0.0.0 => ./"+serviceName+"\n")

    f.write(")")
    f.close()
    
    #common mod 
    f = open(targetPath+sF.name+"common/go.mod", 'w')
    f.write ("module "+sF.name+"common\ngo 1.13")
    f.close()
    #model
    f = open(targetPath+sF.name+"model/go.mod", 'w')
    f.write ("module "+sF.name+"model\ngo 1.13")
    f.write ("\nrequire (\n")
    f.write (sF.name+".com/"+sF.name+"common v0.0.0\n")
    f.write ("github.com/gorilla/mux v1.7.3\n)\n\n")

    f.write ("replace (\n")
    f.write (sF.name+".com/"+sF.name+"common v0.0.0 => ../"+sF.name+"common\n")
    f.write(")")

    f.close()
    #servicemodel
    for serviceName in sF.services.keys():
        f = open(targetPath+serviceName+"/go.mod", 'w')
        f.write ("module "+serviceName+ "\ngo 1.13")
        f.write ("\nrequire (\n")
        f.write (sF.name+".com/"+sF.name+"common v0.0.0\n")
        f.write (sF.name+".com/"+sF.name+"model v0.0.0\n")
        f.write ("github.com/gorilla/mux v1.7.3\n)\n\n")

        f.write ("replace (\n")
        f.write (sF.name+".com/"+sF.name+"common v0.0.0 => ../"+sF.name+"common\n")
        f.write (sF.name+".com/"+sF.name+"model v0.0.0 => ../"+sF.name+"model\n")
        f.write(")")
        f.close()
    
    
def postconfigure_ (workPath, sF):
# WorkingPath = basicPath + /NFs/ + sF.name +"/"
# Directory : [sF.name+"common/", sF.name+"model/"] + [serviceName+"/"] 
    # common foler
    dirList = [sF.name+"common/", sF.name+"model/"]
    for serviceName in sF.services.keys():
    	dirList.append(serviceName+"/")
    
    for dirName in dirList:
    	file_list = os.listdir(workPath+dirName)
    	for fileName in file_list:
            if fileName != 'api':
                replaceWD (workPath+dirName+fileName, "amfmodel.string", "string")
                replaceWD (workPath+dirName+fileName, "amfmodel.*os.File", "*os.File")

#continue






def replaceWD (filename, originWord, changeWord):
    f = open(filename,'r')
    lines = f.readlines()
    f.close

    fw = open(filename,'wt')
    for line in lines:
        fw.write(line.replace(originWord, changeWord))
    fw.close() 
 



