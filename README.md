# R2D2
Bringing my childhood dream of being besties with R2D2 to life with this self-balancing robot 

<img width="1366" height="768" alt="r2d2" src="https://github.com/user-attachments/assets/57b44e42-9edb-402c-8d01-4017164f7151" />

## Inspiration 

Did I binge watch the entire Star Wars Saga not too long ago? Absolutely. Do I love R2D2? Oh yes. 
This self-balancing robot is my first shot at electronics beyond Arduino. I was not only motivated to get into this project for my love for star wars, but truly because I want to dive deeper into hardware projects as an aspiring aerospace engineer. And let me tell you, this was one amazing ride. Within a week, I learned A LOT about 3d modeling on OnShape and schematics through KiCad, and was mind blown by how little I know about the tech world. 

Is this the most perfect self-balancing robot you will ever see? Absolutely not. 
Do I feel like it will pave the way for my future projects? yes. (hopefully I know what I'm doing!)

The goal is simple: make R2D2 balance and move on two wheels while making cute noises. 

## Components 

- ESP32
- MPU9250 (although the MPU6050 is sufficient but I could not find it)
- Nema 17 Stepper Motors
- A4988 Stepper Motor Drivers
- LM386 Audio Power Amplifier Modul
- Speaker

## Wiring Diagram 

You could obviously turn this schematic into a PCB, but I currently can't do that so I will stick to the good old jumper wires and breadboard!

<img width="1250" height="899" alt="wiring diagram" src="https://github.com/user-attachments/assets/dbfaf57a-b9c8-4cbb-8b36-2dae2e6a948a" />

## 3D Model 
You can check out the "3d Model" file for screenshots of the design or go to this link: https://cad.onshape.com/documents/41ff22a7ba16d7ff0c6695ed/w/d662b2744b51235da2560300/e/657d65253b670dbc1a6ec125?renderMode=0&uiState=69d2b66812f1d4591a9e5eba


## BOM (Bill of Materials)

| Component | Type | Quantity | Link |
| :--- | :--- | :--- | :--- |
| Microcontroller | ESP32 | 1 | https://electroslab.com/products/esp32?_pos=1&_sid=5815c3ed6&_ss=r
| Stepper Motor | 17HS8401S-D150S Nema 17 Stepper Motor | 2 | https://electroslab.com/products/17hs8401s-d150s-nema-17-stepper-motor-1-8a-52n-cm?variant=40089360597159
| Stepper Motor Driver | A4988 Stepper Motor Driver | 2 | https://electroslab.com/products/a4988-stepper-motor-driver?variant=41577562472615
| Audio Power Amplifier Module | LM386 | 1 | https://electroslab.com/products/lm386-audio-power-amplifier-module?variant=47111880769703
| Speaker | small speaker | 1 | https://electroslab.com/products/speaker-8-ohm-0-5-watt?variant=28315692597348
| Multi-Sensor Module | GY-91 10DOF MPU-9250 and BMP280 Multi-Sensor Module | 1 | https://electroslab.com/products/gy-91-10dof-mpu-9250-and-bmp280-multi-sensor-module?_pos=1&_sid=98ab6c4b8&_ss=r
