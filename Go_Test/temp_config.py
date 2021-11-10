### templatelist
# input define
import shutil
import os


def tempconfigure (workPath):
    dirPath = workPath+"amfmodel/"
    fileName = "model__5_gs_user_state_any_of.go"
    
    replaceWD (dirPath+fileName, "5GsUserStateAnyOf", "_5GsUserStateAnyOf")
    replaceWD (dirPath+fileName, "5GSUSERSTATEANYOF", "_5GSUSERSTATEANYOF")
    replaceWD (dirPath+fileName, "a_5GsUserStateAnyOf", "a5GsUserStateAnyOf")
    replaceWD (dirPath+fileName, "t_5GsUserStateAnyOf", "t5GsUserStateAnyOf")   

    dirPath = workPath+"amfcommunication/"
    fileName = "api_individual_ue_context_document.go"
    replaceWD (dirPath+fileName,"ueContextIdParam, jsonDataParam, binaryDataGtpcMessageParam,", "ueContextIdParam, UeContextRelocateDataParam, binaryDataGtpcMessageParam,")
    replaceWD (dirPath+fileName,"ueContextIdParam, jsonDataParam, binaryDataGtpcMessageParam", "ueContextIdParam, UeContextCancelRelocateDataParam, binaryDataGtpcMessageParam")
    replaceWD (dirPath+fileName,"ueContextIdParam, jsonDataParam, binaryDataN2InformationParam,", "ueContextIdParam, UeContextCreateDataParam, binaryDataN2InformationParam,")



def replaceWD (filename, originWord, changeWord):
    f = open(filename,'r')
    lines = f.readlines()
    f.close

    fw = open(filename,'wt')
    for line in lines:
        fw.write(line.replace(originWord, changeWord))
    fw.close() 
 



