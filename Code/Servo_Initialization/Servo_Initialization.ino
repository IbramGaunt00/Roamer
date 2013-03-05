 #include <Servo.h>
 #include <Wire.h>
 
 void setup ()
 {
    pinMode(22,OUTPUT);
    servo1.attach(22); //digital pin 22
    //servo1.setMaximumPulse(2000);
    //servo1.setMinimumPulse(700);
        Serial.begin(19200);
        Serial.println("Ready");
    servo2.attach(24); //digital pin 24
        Serial.begin(19200);
        Serial.println("Ready");
      
    servo3.attach(26); //digital pin 26      This completes the first leg
        Serial.begin(19200);
        Serial.println("Ready");
    
    servo4.attach(28); //digital pin 28
        Serial.begin(19200);
        Serial.println("Ready");
    
    servo5.attach(30); //digital pin 30
        Serial.begin(19200);
        Serial.println("Ready");
    
    servo6.attach(32); //digital pin 32      This completes the second leg
        Serial.begin(19200);
        Serial.println("Ready");
    
    servo7.attach(34); //digital pin 34
        Serial.begin(19200);
        Serial.println("Ready");
    
    servo8.attach(36); //digital pin 36
        Serial.begin(19200);
        Serial.println("Ready");
    
    servo9.attach(38); //digital pin 38      This completes the third leg
        Serial.begin(19200);
        Serial.println("Ready");
    
    servo10.attach(40); //digital pin 40
        Serial.begin(19200);
        Serial.println("Ready");
    
    servo11.attach(42); //digital pin 42
        Serial.begin(19200);
        Serial.println("Ready");
    
    servo12.attach(44); //digital pin 44      This completes teh third leg
        Serial.begin(19200);
        Serial.println("Ready");
 }
