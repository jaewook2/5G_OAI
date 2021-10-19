class configure():
   def __init__(self):
        self.outputdir = ""
        self.yamldir = ""
        self.templatedir = ""
        self.createNFs =[AMF()] 
        #AMF, SMF, PCF etc    

class AMF():
   def __init__(self):
        self.name ="amf"
        self.services ={'namfCommunication': 'TS29518_Namf_Communication.yaml',
                      'namfEventExposure' : 'TS29518_Namf_EventExposure.yaml', 
                      'namfLocation': 'TS29518_Namf_Location.yaml', 
                      'namfMT': 'TS29518_Namf_MT.yaml'} 