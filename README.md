# Task-submission
#**LED BLINKING**

>I don't have access to actual hardware as of now, so i have made use of a simulator to setup the project.Hope you guys would understand.

##Objective : when switch is turned on the the led starts blinking but with less blinks per second. When the potentiometer is swiped the blinking speed increases.  
##Apparatus : In this project i have used an arduino uno , led , potentiometer , breadboard , resister , switch button, jumper wires
##Circuit Diagram : 
<img width="997" height="462" alt="Screenshot 2026-01-29 000518" src="https://github.com/user-attachments/assets/68156c55-808f-49e9-a05c-fd07fbf3ee58" />

##Description : 
###1.The digital input of switch is connected to the pin 4 of arduino.
###2.The analog input is taken from A0.This input is then converted in the range of 50 to 150.
###3.This input is then used to calculate interval between two blinks.When the time between two blinks is equal to interval then the led reverse its state i.e from LOW to HIGH or vice-versa.To measure time it uses millis();
###4.If the switch is turned of the LED also gets into LOW state.

##Working Video:
![working video](https://github.com/user-attachments/assets/15b084df-ebb0-445e-aa36-724f54d6ac47)

>Please check out my github account for my other projects as well.




