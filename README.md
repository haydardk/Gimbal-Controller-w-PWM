# Gimbal-Controller-w-PWM
There are  code blocks for STM32 and GUI properties for STorM32 Gimbal (o323BGCTool_v090) 

*** STorM32 Gimbalini sürmek için kullanılacak PWM sinyali için ; 
Duty Cycle : %5-%10 
Frekans : 50 Hz - 500 Hz 
STM32 için hazırlanan kodun içinde daha detaylı bilgilere ulaşabilirsiniz. 

1-) Calibration of accelemeter : 
Before this step, gimbal must be connected to computer.
TR: Gimbal bilgisayarınıza bağlayın. İvmeölçeri kalibre etmek içn Calibrate ACC menüsüne gelin. Run 1-Point Calibration butonuna tıklayın ve kalibre edeceğiniz pozisyonda gimbali tutun. (Örneğin baş aşağı). Üst üste aldığınız değerler arasında fark azaldığında kalibrasyonu tamamlayabilirsiniz.

![image](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/f8696dde-4fee-46ef-acbb-31c46f0ca47e)


2-) RC Inputs and Hold-Pan Settings :
TR : Gimbalin sabit kalmasını istedğiniz eksenleri için hold (Sabitleme) diğer eksenler için Pan seçeneğini kullanın. Hold hızını artırmak sabitlenen eksende ani hareketlerde kaymayı azaltır. Aşağıdaki örneğe bakabilirsiniz. Diğer değerler default kalabilir.

![image](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/56f70447-2b10-49dd-a1fd-8b68be1d0d5c)

*** We adjust only 2 axis to configure and use, RC2-0 and RC2-2 : 
TR : Gimbali PWM sinyali ile kontrol etmek için RC2 ve RC0 pinlerini (Bilgisayara bağlamak için kullanılan USB-Mini-B girişinin yanındaki 5'li ve 4'lü pin girişleri) kullanabilirsiniz. Aşağıdaki örnekte RC2-0 ve RC2-2 pinlerini üzerinden sürülüyor.
RC Pitch modlarını işleve göre seçebilirsiniz : 
Absolute : Gimbal eğim değeri belirli bir referans noktasına göre mutlak bir değer olarak ayarlanır. Yani, gimbalın eğimi, başlangıç konumuna göre belirli bir dereceye sabitlenir.
Relatve : Gimbal eğim değeri bir referans noktasına göre değil, kullanıcının şu anki eğim ayarına göre ilişkilendirilir. Yani, gimbalın mevcut eğimi referans alınarak değişiklik yapılır.
Home : Bu mod, gimbalın belirli bir "ev" veya başlangıç konumuna dönmesini sağlar. Gimbal, belirli bir başlangıç konumuna göre sıfırlanır.

![image](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/d00dd4be-dd9c-4014-8c32-2abb6b4cf612)

- “Virtual Channel Configuration” have to be maintained as off to control motors by PWM .
TR : Virtual Channel Configuration menüsü üzerinde motorları nasıl kontrol edeceğinizi belirleyebilirsiniz

Off: Fonksiyon devre dışı bırakılmıştır (0 değeri üretir). Fonksiyonu etkinleştirmek için herhangi bir aşağıdaki girişlerden birini seçin:
Rc(0-1-2): RC portunun  PWM çıkış sinyali
Rc2-(0-1-2): RC2 portunun belirli bir pinindeki PWM çıkış sinyali.
Pot-(0-1-2): POT portunun belirli bir pinindeki analog giriş sinyali (voltaj aralığı 0 - 3.3 V).
Virtual-1 - Virtual-16 : PPM , Sbus gibi kanallar. 
But Switch ve AUX ise diğer belirli kanallar içindir.

![image](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/12b569d2-b091-46d9-b12b-71b30919eeb4)

4- PID and Functions : 
Gimbal konfigürasyonunu daha rahat ve güvenilir yapabilmek için PID ayarlarını auto-write yapılmalı. Örnekteki PID ayarlarını kullanabilirsiniz.

![image](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/8ed9956d-c5a8-4ac7-94ac-a98bb4f9361d)
![image](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/00383b02-d351-40d8-bb2c-838ae3464e3c)

4- Gimbal Configuration : 
At this final step, camera or any object can be used to optimize the configuration. It can be failed due to grossly PID settings or too much vibration during this step. 
TR : Gimbal konfigürasyonunu başlatın ve açılan menüdeki talimatları takip edin. Motor ve batarya kontrolünden sonra 45 derece gimbali eğin . IMU-Orientation ve IMU2-Orientation eksenlerinin doğru olduğundan emin olun (Aşağıdaki örnekte no12 ve no1 seçilidir).
Sonrasında Gimbali ivemölçer kalibrasyonunu yaptığınız konumda tutun. Kamera ya da herhangi bir nesneyi kamera yuvasına konumlandırıp daha güvenli bir kalibrasyon sağlayabilirsiniz. Motor hareeti ve beep sesini duyduğunuzda konfigürasyon tamamlanmış demektir.

![image](https://github.com/haydardk/Gimbal-Controller-w-PWM/assets/134811972/1492467f-feaa-4af4-a10b-682cfaf7623e)




