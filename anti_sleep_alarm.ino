
// Components: Eye Blink Sensor, Buzzer, Vibration Motor, Arduino

const int eyeSensorPin = 2;     
const int buzzerPin = 8;        
const int motorPin = 9;         

unsigned long eyeClosedStart = 0;
const unsigned long drowsyTime = 2000; 

void setup() {
  pinMode(eyeSensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(motorPin, OUTPUT);

  digitalWrite(buzzerPin, LOW);
  digitalWrite(motorPin, LOW);

  Serial.begin(9600);
}

void loop() {
  int eyeState = digitalRead(eyeSensorPin);

  //  LOW = eye closed, HIGH = eye open
  if (eyeState == LOW) {
    if (eyeClosedStart == 0) {
      eyeClosedStart = millis();  
    }

    
    if (millis() - eyeClosedStart >= drowsyTime) {
      triggerAlarm();
    }
  } else {
    // Eye open → reset timer and stop alarm
    eyeClosedStart = 0;
    stopAlarm();
  }

  delay(50);
}

void triggerAlarm() {
  digitalWrite(buzzerPin, HIGH);
  digitalWrite(motorPin, HIGH);
  Serial.println("Drowsiness Detected! Alarm ON");
}

void stopAlarm() {
  digitalWrite(buzzerPin, LOW);
  digitalWrite(motorPin, LOW);
  Serial.println("Driver Alert");
}
