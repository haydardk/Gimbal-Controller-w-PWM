# Gimbal-Controller-w-PWM
There are  code blocks for STM32 and GUI properties for STorM32 Gimbal (o323BGCTool_v090)

Calibration and Configuration on GUI 
1-) Calibration of accelemeter : 
Before this step, gimbal must be connected to computer.
 
2-) RC Inputs and Hold-Pan Settings :














*** We adjust only 2 axis to configure and use, RC2-0 and RC2-2 : 















3- “Virtual Channel Configuration” have to be maintained as off to control motors by PWM .














4- PID and Functions : 




















 
4- Gimbal Configuration : 
 
At this final step, camera or any object can be used to optimize the configuration. It can be failed due to grossly PID settings or too much vibration during this step. 





[Configuration on GUI.pdf](https://github.com/haydardk/Gimbal-Controller-w-PWM/files/13515348/Configuration.on.GUI.pdf)
