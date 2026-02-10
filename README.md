# Anti-Sleep Alarm for Drivers using Eye Blink Sensor

A low-cost embedded safety system designed to detect **driver drowsiness** in real time using an **eye blink sensor, Arduino, buzzer, and vibration motor**, helping prevent fatigue-related road accidents.

---

## Project Overview

Driver fatigue is one of the major causes of road accidents worldwide.  
This project implements a **real-time drowsiness detection prototype** that continuously monitors **eye blink activity** and provides **instant alert mechanisms** when prolonged eye closure is detected.

The system is suitable for:

- Two-wheeler and four-wheeler drivers  
- Long-distance travel safety  
- Low-cost road safety research prototypes  

---

## Hardware Components

- **Arduino Uno**
- **IR-based Eye Blink Sensor**
- **Buzzer (audio alert)**
- **Vibration Motor (haptic alert)**
- Connecting wires and 5V power supply

---

## Working Principle

1. The **eye blink sensor** detects eyelid movement using infrared reflection.
2. Arduino continuously reads the sensor output.
3. If the **eyes remain closed beyond a preset time threshold**, the system identifies **drowsiness**.
4. Arduino activates:
   -  **Buzzer sound alert**
   -  **Vibration motor alert**
5. Alerts stop automatically when the **eyes reopen**.

---

## Repository Contents

```
anti-sleep-alarm-driver/
│
├── anti_sleep_alarm.ino   # Arduino C++ code
└── README.md              # Project documentation
```


---

##  Key Features

- Real-time eye blink monitoring  
- Instant **audio + vibration** alert system  
- Simple **Arduino-based embedded design**  
- Low-cost and portable safety solution  
- Suitable for **IoT and automotive safety extensions**

---

##  Future Improvements

- GSM alert message to family members  
- IoT cloud-based driver monitoring  
- Machine learning–based fatigue detection  
- Camera-based eye tracking integration  
- Vehicle ignition safety control  

---

##  Author

**Fathima Nashiba M**  
B.E. Biomedical Engineering  
PSG College of Technology  

**Areas of Interest:**  
Embedded Systems • Medical Devices • AI in Healthcare

---

## 📜 License

This project is developed for **academic learning and safety research purposes**.


