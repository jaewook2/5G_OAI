Main Configure File 
```python
class configure():
   def __init__(self):
      self.outputdir = ""
      self.yamldir = ""
      self.templatedir = ""
      self.createNFs =['AMF','SMF'] 
```

AMFConf.py
```python
class AMF_configure():
   def __init__(self):
      self.name = "AMF"
      self.services ={'namfcommunication': 'TS29518_Namf_Communication.yaml','namfeventexposure' : 'TS29518_Namf_EventExposure.yaml', 'namflocation': 'TS29518_Namf_Location.yaml', 'namfmt':TS29518_Namf_MT.yaml} 

```





