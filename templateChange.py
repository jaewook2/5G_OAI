### templatelist
# input define
import shutil
import os


def modifiedMustache(origin_templatePath, NFname, serviceName):
 
    templatePath = copyMustache(origin_templatePath,NFname,serviceName)
 
    # looger.go
    replaceWD(templatePath+"logger.mustache", "{{packageName}}", NFname+"common")   

    # routers.go
    replaceWD(templatePath+"routers.mustache", "{{packageName}}", NFname+"common")   

    # error.go
    replaceWD(templatePath+"error.mustache", "{{packageName}}", NFname+"common")   

    # helper.go
    replaceWD(templatePath+"helpers.mustache", "{{packageName}}", NFname+"common")  

     # impl.go
    replaceWD(templatePath+"impl.mustache", "{{packageName}}", NFname+"common")  

    # api.go
    replaceWD(templatePath+"api.mustache", "{{packageName}}", serviceName+"api")
    replaceWD(templatePath+"api.mustache", "importModel", NFname+"model") 
    replaceWD(templatePath+"api.mustache", "importCommon", NFname+"Common")    
    replaceWD(templatePath+"api.mustache", "ImplResponse", NFname+"Common.ImplResponse")   
    replaceWD(templatePath+"api.mustache", "{{dataType}}", NFname+"model.{{dataType}}") 

    # api_*.go (controller-api)
    replaceWD(templatePath+"controller-api.mustache", "{{packageName}}", serviceName+"api")
    replaceWD(templatePath+"controller-api.mustache", "importModel", NFname+"model") 
    replaceWD(templatePath+"controller-api.mustache", "importCommon", NFname+"Common")    
    replaceWD(templatePath+"controller-api.mustache", "Router {", NFname+"Common.Router {")
    replaceWD(templatePath+"controller-api.mustache", "Routes{", NFname+"Common.Routes {")
    replaceWD(templatePath+"controller-api.mustache", "Routes {", NFname+"Common.Routes {")
    replaceWD(templatePath+"controller-api.mustache", "EncodeJSONResponse", NFname+"Common.EncodeJSONResponse")
    replaceWD(templatePath+"controller-api.mustache", "ReadFormFile", NFname+"Common.ReadFormFile")
    replaceWD(templatePath+"controller-api.mustache", "parseInt64Parameter", NFname+"Common.parseInt64Parameter")
    replaceWD(templatePath+"controller-api.mustache", "parseInt32Parameter", NFname+"Common.parseInt32Parameter")
    replaceWD(templatePath+"controller-api.mustache", "parseIntBoolParameter", NFname+"Common.parseBoolParameter")
    replaceWD(templatePath+"controller-api.mustache", "parseInt64ArrayParameter", NFname+"Common.parseInt64ArrayParameter")
    replaceWD(templatePath+"controller-api.mustache", "parseInt32ArrayParameter", NFname+"Common.parseInt32ArrayParameter")
    replaceWD(templatePath+"controller-api.mustache", "{{dataType}}", NFname+"model.{{dataType}}") 
    
    # api_*_service.go
    replaceWD(templatePath+"service.mustache", "{{packageName}}", serviceName+"api")
    replaceWD(templatePath+"service.mustache", "importModel", NFname+"model")   
    replaceWD(templatePath+"service.mustache", "{{dataType}}", NFname+"model.{{dataType}}") 

    # main.go
    replaceWD(templatePath+"main.mustache", "{{packageName}}", serviceName+"api")
    replaceWD(templatePath+"main.mustache", "main", serviceName+"Router")

    # model.go
    replaceWD(templatePath+"model.mustache", "{{packageName}}", NFname+"model")
    replaceWD(templatePath+"model.mustache", "importCommon", NFname+"common")  
    replaceWD(templatePath+"model.mustache", "IsZeroValue(el)", NFname+"common.IsZeroValue(el)")
    replaceWD(templatePath+"model.mustache", "RequiredError{", NFname+"common.RequiredError{")
    replaceWD(templatePath+"model.mustache", "AssertRecurseInterfaceRequired", NFname+"common.AssertRecurseInterfaceRequired")
    replaceWD(templatePath+"model.mustache", "ErrTypeAssertionError", NFname+"common.ErrTypeAssertionError")
    
    return templatePath
    
def copyMustache(temPath, NFname,serviceName):
# orgin copy
    targetPath = temPath+NFname+"/"+serviceName
    if os.path.isdir(targetPath):
        shutil.rmtree(targetPath)
    originPath = temPath+"origin"    
    shutil.copytree(originPath, targetPath)
    
    return targetPath+"/"


def replaceWD (filename, originWord, changeWord):
    f = open(filename,'r')
    lines = f.readlines()
    f.close

    fw = open(filename,'wt')
    for line in lines:
        fw.write(line.replace(originWord, changeWord))
    fw.close() 
 
 
    
def postconfigure():
    pass
