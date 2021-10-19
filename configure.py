class configure():
   def __init__(self):
        self.outputdir = "/home/etriboo/Test/NF/"
        self.yamldir = "/home/etriboo/Test/5GC_APIs/"
        self.templatedir = "/home/etriboo/Test/go-server/"
        self.createNFs =[AMF()] 
        #AMF, SMF, PCF etc    
        self.os = "java -jar /home/etriboo/openapi-generator/modules/openapi-generator-cli/target/openapi-generator-cli.jar generate"+" -t " + self.templatedir + " -p enumClassPrefix=true " + " -g go-server"

class AMF():
   def __init__(self):
        self.name ="amf"
        self.services ={'namfCommunication': 'TS29518_Namf_Communication.yaml'}
        #,
        #              'namfEventExposure' : 'TS29518_Namf_EventExposure.yaml', 
        #              'namfLocation': 'TS29518_Namf_Location.yaml', 
        #              'namfMT': 'TS29518_Namf_MT.yaml'} 
