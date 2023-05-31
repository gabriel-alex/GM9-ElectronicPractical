## Introduction to electronics and connected objects

### Educational objectives
* Understand the basic concepts of electronics 
* Create simple programs in C language 
* Use an Arduino development platform
* Create a prototype incorporating electronics
* Translate a flowchart into a program 
* Document the process and operation of the system

### Work to do
Create a vehicule that will :
* display its operating status with a color code (red: error, orange: obstacle, green: ok)
* send messages via bluetooth
* avoid obstacles

### Advices 
* Test every functionalities alone before integrate it with other fonctionalities

### Steps 
* Install software and driver ([Documentation](./Tutorial.pdf) p15-17)  
* Assemble hardware ([Documentation](./Tutorial.pdf) p20-30)  
* Test the LED program ([01-LEDscrollExample](../Scripts/01-LEDscrollExample/)) and complete the response document.  
* Write the code to scroll red LEDs ([02-LEDscrollCustom](../Scripts/02-LEDscrollCustom/)) and complete the answer document.  
* Measure a distance with an ultrasonic sensor ([03-UltrasonicRanging](../Scripts/03-UltrasonicRanging)) and complete the answer document.  
* Measure a distance with an ultrasonic sensor ([04-UltrasonicRanging](../Scripts/03-UltrasonicRanging)) and complete the answer document.  
* Test the obstacle avoidance program ([05-ObstacleAvoidance](../Scripts/05-ObstacleAvoidance/05-obstacleAvoidance.ino)) and complete the answer document.  
* Add color codes to the obstacle avoidance program (red: error, orange: obstacle, green: ok) ([06-ObstacleAvoidanceWithColors](../Scripts/06-obstacleAvoidanceWithColors/)), draw the program flowchart and complete the response document.   
* Test bluetooth communication ([07-bluetoothConnexion](../Scripts/07-bluetoothConnexion/)) with [Serial Bluetooth Terminal](https://play.google.com/store/apps/details?id=de.kai_morich.serial_bluetooth_terminal&hl=fr&gl=US&pli=1) and complete the answer document.  
* Modify the program to change LED color via Bluetooth ([08-bluetoothLEDcontrol](../Scripts/08-bluetoothLEDcontrol/)) and complete the answer document  
* Integrate message sending into the obstacle avoidance program ([09-obstacleavoidanceBluetooth](../Scripts/09-ObstacleAvoidanceBluetooth/)) 


### Evaluation 
* Number of features implemented
* Response document ([assignment.odt](../Assignment.odt) or [assignment.doc]())
* Source code (via github)

### Timeline
* 15 min Objective presentation
* 60 min Hardware assembly (tutorial p20-30) + functional analysis
* 150 min Independent work (validation for each task)
* 15 min Review of practical work

### Ressources
[Original Github Freenove Rover](https://github.com/Freenove/Freenove_4WD_Car_Kit)