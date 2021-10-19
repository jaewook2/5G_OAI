```python
def postConfigured (filedir, savedir, nickname, filename = "main.go"):
    savefilename = nickname+".go"

    f = open(savedir+savefilename, 'w')
    f.close()
    
    #the input file
    fin = open(filedir+filename,"rt")
    #the stored file
    fout = open(savedir+savefile, "wt")

    for line in fin:
        fout.write(line.replace('main', nickname))

    fin.close()
    fout.close()
```
