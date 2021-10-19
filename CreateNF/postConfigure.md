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
