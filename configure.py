class configure():
   def __init__(self):
        self.basicDir = "/home/etriboo/Test/"
        self.yamldir = "/home/etriboo/Test/Yaml/"
        self.templatedir = "/home/etriboo/Test/Template/"
        self.createSFs =[AMF()] 
        #AMF, SMF, PCF etc    
        self.os = "java -jar /home/etriboo/openapi-generator/modules/openapi-generator-cli/target/openapi-generator-cli.jar generate"+ " -p enumClassPrefix=true " + " -g go-server"

class AMF():
   def __init__(self):
        self.name ="amf"
        self.services ={'amfcommunication': 'TS29518_Namf_Communication.yaml',
                        'amfeventexposure' : 'TS29518_Namf_EventExposure.yaml', 
                        'amflocation': 'TS29518_Namf_Location.yaml', 
                        'amfmt': 'TS29518_Namf_MT.yaml'} 
