### templatelist
# input define
import shutil
import os


def modifiedMustache(templatePath, sFname, serviceName):
 
    templatePath = copyMustache(templatePath,sFname,serviceName)
 
    # looger.go
    replaceWD(templatePath+"logger.mustache", "{{packageName}}", sFname+"common")   

    # routers.go
    replaceWD(templatePath+"routers.mustache", "{{packageName}}", sFname+"common")
    # addrouter in router.mustache  modification

    # error.go
    replaceWD(templatePath+"error.mustache", "{{packageName}}", sFname+"common")   

    # helper.go
    replaceWD(templatePath+"helpers.mustache", "{{packageName}}", sFname+"common")  

     # impl.go
    replaceWD(templatePath+"impl.mustache", "{{packageName}}", sFname+"common")  

    # api.go
    replaceWD(templatePath+"api.mustache", "{{packageName}}", serviceName)
    replaceWD(templatePath+"api.mustache", "import (", "import (\n"+'"'+sFname+".com/"+sFname+'model"') 
    replaceWD(templatePath+"api.mustache", "import (", "import (\n"+'"'+sFname+".com/"+sFname+'common"')    
    replaceWD(templatePath+"api.mustache", "ImplResponse", sFname+"common.ImplResponse")   
    replaceWD(templatePath+"api.mustache", "{{dataType}}", sFname+"model.{{dataType}}") 

    # api_*.go (controller-api)
    replaceWD(templatePath+"controller-api.mustache", "{{packageName}}", serviceName)
    
    replaceWD(templatePath+"controller-api.mustache", "import (", "import (\n"+'"'+sFname+".com/"+sFname+'model"') 
    replaceWD(templatePath+"controller-api.mustache", "import (", "import (\n"+'"'+sFname+".com/"+sFname+'common"')    
    replaceWD(templatePath+"controller-api.mustache", "Router {", sFname+"common.Router {")
    replaceWD(templatePath+"controller-api.mustache", "Routes {", sFname+"common.Routes {")
    replaceWD(templatePath+"controller-api.mustache", "Routes{", sFname+"common.Routes {")
    replaceWD(templatePath+"controller-api.mustache", "EncodeJSONResponse", sFname+"common.EncodeJSONResponse")
    replaceWD(templatePath+"controller-api.mustache", "ReadFormFile", sFname+"common.ReadFormFile")
    replaceWD(templatePath+"controller-api.mustache", "parseInt64Parameter", sFname+"common.parseInt64Parameter")
    replaceWD(templatePath+"controller-api.mustache", "parseInt32Parameter", sFname+"common.parseInt32Parameter")
    replaceWD(templatePath+"controller-api.mustache", "parseIntBoolParameter", sFname+"common.parseBoolParameter")
    replaceWD(templatePath+"controller-api.mustache", "parseInt64ArrayParameter", sFname+"common.parseInt64ArrayParameter")
    replaceWD(templatePath+"controller-api.mustache", "parseInt32ArrayParameter", sFname+"common.parseInt32ArrayParameter")
    replaceWD(templatePath+"controller-api.mustache", "{{dataType}}", sFname+"model.{{dataType}}")     
    replaceWD(templatePath+"controller-api.mustache", " ErrorHandler", " "+sFname+"common.ErrorHandler")        
    replaceWD(templatePath+"controller-api.mustache", " DefaultErrorHandler", " "+sFname+"common.DefaultErrorHandler")
    replaceWD(templatePath+"controller-api.mustache", "Assert", " "+sFname+"model.Assert")
    replaceWD(templatePath+"controller-api.mustache", "ParsingError", " "+sFname+"common.ParsingError")
    replaceWD(templatePath+"controller-api.mustache", '{{paramName}}Param := r.FromValue("{{baseName}}")', '{{baseType}}Param := '+ sFname+"model.{{baseType}}{}\n"
+ "\td := json.NewDecoder(r.Body)\n\t"
+ "d.DisallowUnknownFields()\n" 
+ "\tif err := d.Decode(&{{baseType}}Param); err != nil { \n"
+ "\t\t c.errorHandler(w, r,&"+ sFname+"common.ParsingError{Err: err}, nil)"
+ "\n\t\t return \n\t}\n"
+ "\t\tif err := "+ sFname+"model.Assert{{baseType}}Required({{baseType}}Param); err != nil {\n\t\t"
+ "c.errorHandler(w, r, err, nil) \n\t\treturn \n\t}")

    # api_*_service.go
    replaceWD(templatePath+"service.mustache", "{{packageName}}", serviceName)
    replaceWD(templatePath+"service.mustache", "import (", "import (\n"+'"'+sFname+".com/"+sFname+'model"')   
    replaceWD(templatePath+"service.mustache", "import (", "import (\n"+'"'+sFname+".com/"+sFname+'common"')   
    replaceWD(templatePath+"service.mustache", "{{dataType}}", sFname+"model.{{dataType}}") 
    replaceWD(templatePath+"service.mustache", "Response", sFname+"common.Response")
    replaceWD(templatePath+"service.mustache", "ImplResponse", sFname+"common.ImplResponse")   
    replaceWD(templatePath+"service.mustache", "Impl"+sFname+"common.Response", sFname+"common.ImplResponse")   

    # main.go
    replaceWD(templatePath+"main.mustache", "package main", "package "+serviceName)
    replaceWD(templatePath+"main.mustache", "import (", "import (\n"+'"'+sFname+".com/"+sFname+'common"'+'\n\t"github.com/gorilla/mux"')    
    replaceWD(templatePath+"main.mustache", "main() {", "Router"+serviceName+"(router *mux.Router) *mux.Router {")
    replaceWD(templatePath+"main.mustache", "router := {{packageName}}.NewRouter({{#apiInfo}}{{#apis}}{{classname}}Controller{{^-last}}, {{/-last}}{{/apis}}{{/apiInfo}})", "router ="+ sFname+"common.AddRouter(router,{{#apiInfo}}{{#apis}}{{classname}}Controller{{^-last}}, {{/-last}}{{/apis}}{{/apiInfo}}) ")
    replaceWD(templatePath+"main.mustache", "{{packageName}}.New", "New")
    replaceWD(templatePath+"main.mustache", 'log.Printf("Server started")', "")        
    replaceWD(templatePath+"main.mustache", 'log.Fatal(http.ListenAndServe(":{{serverPort}}", router))', "return router") 
    replaceWD(templatePath+"main.mustache", '{{packageName}} "{{gitHost}}/{{gitUserId}}/{{gitRepoId}}/{{sourceFolder}}"', "") 

    # model.go
    replaceWD(templatePath+"model.mustache", "{{packageName}}", sFname+"model")
    replaceWD(templatePath+"model.mustache", "{{#models}}", "\n{{#models}}import (\n"+'"'+sFname+".com/"+sFname+'common"\n')
    replaceWD(templatePath+"model.mustache", "{{#-first}}import (", "{{#-first}}")
    replaceWD(templatePath+"model.mustache", "){{/-last}}{{/imports}}", "{{/-last}}{{/imports}})\n")  
    replaceWD(templatePath+"model.mustache", "IsZeroValue(el)", sFname+"common.IsZeroValue(el)")
    replaceWD(templatePath+"model.mustache", "RequiredError{", sFname+"common.RequiredError{")
    replaceWD(templatePath+"model.mustache", "AssertRecurseInterfaceRequired", sFname+"common.AssertRecurseInterfaceRequired")
    replaceWD(templatePath+"model.mustache", "ErrTypeAssertionError", sFname+"common.ErrTypeAssertionError")
    
    return templatePath
    
def copyMustache(templatePath, sFname,serviceName):
# orgin copy
    targetPath = templatePath+sFname+"/"+serviceName
    if os.path.isdir(targetPath):
        shutil.rmtree(targetPath)
    originPath = templatePath+"origin"    
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
