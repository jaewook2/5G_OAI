class configure():
   def __init__(self):
        self.basicDir = "/home/etri/5G_OAI/QT_TEST/TEST/"
        self.yamldir = "/home/etri/5G_OAI/Yaml_16/"
        self.templatedir = "/home/etri/5G_OAI/QT_TEST/Template/"
        self.createSFs =[AMF()] 
        #AMF, SMF, PCF etc    
        self.os = "java -jar /home/etri/openapi-generator-cli.jar generate"

class AMF():
   def __init__(self):
        self.name ="amf"
        self.services ={'amfeventexposure' : 'TS29518_Namf_EventExposure.yaml'}
        		  #{'amfcommunication': 'TS29518_Namf_Communication.yaml'},
#                        {'amfeventexposure' : 'TS29518_Namf_EventExposure.yaml'}, 
#                        'amflocation': 'TS29518_Namf_Location.yaml', 
#                        'amfmt': 'TS29518_Namf_MT.yaml'} 
