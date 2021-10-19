### templatelist
# input define
def modifiedMustache(origin_templatePath, NFname, serviceName):
    def # orgin copy
    def replace (filename, originWord, changeWord):
        f = open(file_name,'r')
        lines = f.readlines()
        f.close

        fw = open(file_name,'w')
        for line in lines:
            fw.wirte(line,replace(originWord, changeWord))
        fw.close()

    templatePath = origin_templatePath+NFname+"/"+serviceName+"/"
    # looger.go
    replace(templatePath+"logger.mustache", "{{packageName}}", NFname+"common")   

    # routers.go
    replace(templatePath+"router.mustache", "{{packageName}}", NFname+"common")   

    # error.go
    replace(templatePath+"error.mustache", "{{packageName}}", NFname+"common")   

    # helper.go
    replace(templatePath+"helpers.mustache", "{{packageName}}", NFname+"common")  

     # impl.go
    replace(templatePath+"impl.mustache", "{{packageName}}", NFname+"common")  

    # api.go
    replace(templatePath+"api.mustache", "{{packageName}}", serviceName+"api")
    replace(templatePath+"api.mustache", "importModel", NFname+"model") 
    replace(templatePath+"api.mustache", "importCommon", NFname+"Common")    
    replace(templatePath+"api.mustache", "ImplResponse", NFname+"Common.ImplResponse")   
    replace(templatePath+"api.mustache", "{{dataType}}", NFname+"model.{{dataType}}") 

    # api_*.go (controller-api)
    replace(templatePath+"controller-api.mustache", "{{packageName}}", serviceName+"api")
    replace(templatePath+"controller-api.mustache", "importModel", NFname+"model") 
    replace(templatePath+"controller-api.mustache", "importCommon", NFname+"Common")    
    replace(templatePath+"controller-api.mustache", "Router {", NFname+"Common.Router {")
    replace(templatePath+"controller-api.mustache", "Routes{", NFname+"Common.Routes {")
    replace(templatePath+"controller-api.mustache", "Routes {", NFname+"Common.Routes {")
    replace(templatePath+"controller-api.mustache", "EncodeJSONResponse", NFname+"Common.EncodeJSONResponse")
    replace(templatePath+"controller-api.mustache", "ReadFormFile", NFname+"Common.ReadFormFile")
    replace(templatePath+"controller-api.mustache", "parseInt64Parameter", NFname+"Common.parseInt64Parameter")
    replace(templatePath+"controller-api.mustache", "parseInt32Parameter", NFname+"Common.parseInt32Parameter")
    replace(templatePath+"controller-api.mustache", "parseIntBoolParameter", NFname+"Common.parseBoolParameter")
    replace(templatePath+"controller-api.mustache", "parseInt64ArrayParameter", NFname+"Common.parseInt64ArrayParameter")
    replace(templatePath+"controller-api.mustache", "parseInt32ArrayParameter", NFname+"Common.parseInt32ArrayParameter")
    replace(templatePath+"controller-api.mustache", "{{dataType}}", NFname+"model.{{dataType}}") 
    
    # api_*_service.go
    replace(templatePath+"service.mustache", "{{packageName}}", serviceName+"api")
    replace(templatePath+"service.mustache", "importModel", NFname+"model")   
    replace(templatePath+"service.mustache", "{{dataType}}", NFname+"model.{{dataType}}") 

    # main.go
    replace(templatePath+"main.mustache", "{{packageName}}", serviceName+"api")
    replace(templatePath+"main.mustache", "main", serviceName+"Router")

    # model.go
    replace(templatePath+"model.mustache", "{{packageName}}", NFname+"model")
    replace(templatePath+"model.mustache", "importCommon", NFname+"common")  
    replace(templatePath+"model.mustache", "IsZeroValue(el)", NFname+"common.IsZeroValue(el)")
    replace(templatePath+"model.mustache", "RequiredError{", NFname+"common.RequiredError{")
    replace(templatePath+"model.mustache", "AssertRecurseInterfaceRequired", NFname+"common.AssertRecurseInterfaceRequired")
    replace(templatePath+"model.mustache", "ErrTypeAssertionError", NFname+"common.ErrTypeAssertionError")
    