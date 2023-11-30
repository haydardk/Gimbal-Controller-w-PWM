# Gimbal-Controller-w-PWM
There are  code blocks for STM32 and GUI properties for STorM32 Gimbal (o323BGCTool_v090)
Calibration and Configuration on GUI 
1-) Calibration of accelemeter : 
Before this step, gimbal must be connected to computer.
![Calibrate ACC](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/06fae9c6-6741-4df6-9605-51f4bb7098dd)
2-) RC Inputs and Hold-Pan Settings :
![Hold-Pan ](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/dbe26b1a-6fdf-4b25-8290-66cab92398c7)
![RC_Input](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/f556b6f9-a472-4ee4-9969-3540529cfec9)
*** We adjust only 2 axis to configure and use, RC2-0 and RC2-2 :
![Dashboard](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/57ee2711-2ac2-4815-ad49-dec4af4c0412)
3- “Virtual Channel Configuration” have to be maintained as off to control motors by PWM .
![Setup](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/b5b29f81-7b48-4bff-9d3e-45aedd33af1f)
4- PID and Functions : 
![Functions](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/6f7b3b6b-9f43-4223-9e9c-1d27ca80fac3)
![PID](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/a29a609e-707b-41df-ba0b-06ce7ae6b6f1)
4- Gimbal Configuration : 
At this final step, camera or any object can be used to optimize the configuration. It can be failed due to grossly PID settings or too much vibration during this step. 
![Gimbal Conf](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/fa28da92-ce2c-4128-b133-cedeb2d08601)
[Configuration on GUI.pdf](https://github.com/haydardk/Gimbal-Controller-w-PWM/files/13515348/Configuration.on.GUI.pdf)
