# Gimbal-Controller-w-PWM
There are  code blocks for STM32 and GUI properties for STorM32 Gimbal (o323BGCTool_v090)

1-) Calibration of accelemeter : 
Before this step, gimbal must be connected to computer.

![image](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/f8696dde-4fee-46ef-acbb-31c46f0ca47e)


2-) RC Inputs and Hold-Pan Settings :


![image](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/56f70447-2b10-49dd-a1fd-8b68be1d0d5c)

*** We adjust only 2 axis to configure and use, RC2-0 and RC2-2 : 


![image](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/d00dd4be-dd9c-4014-8c32-2abb6b4cf612)

- “Virtual Channel Configuration” have to be maintained as off to control motors by PWM .


![image](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/12b569d2-b091-46d9-b12b-71b30919eeb4)

4- PID and Functions : 


![image](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/8ed9956d-c5a8-4ac7-94ac-a98bb4f9361d)
![image](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/00383b02-d351-40d8-bb2c-838ae3464e3c)

4- Gimbal Configuration : 
At this final step, camera or any object can be used to optimize the configuration. It can be failed due to grossly PID settings or too much vibration during this step. 


![image](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/1492467f-feaa-4af4-a10b-682cfaf7623e)




