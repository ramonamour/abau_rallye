#include <Arduino.h>


void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 

  // if touch sensor on pin 4 is lower than a specific sensitive value
  if(touchRead(4) < 40) {  
    // do something, when touch is active
    Serial.println("Sensor: 4, Number: 9");
  }

  // if touch sensor on pin 4 is lower than a specific sensitive value
  if(touchRead(2) < 40) {  
    // do something, when touch is active
    Serial.println("Sensor: 2, Number: 6");
  }

  // if touch sensor on pin 4 is lower than a specific sensitive value
  if(touchRead(15) < 40) {  
    // do something, when touch is active
    Serial.println("Sensor: 15, Number: 3");
  }

  // if touch sensor on pin 4 is lower than a specific sensitive value
  if(touchRead(32) < 40) {  
    // do something, when touch is active
    Serial.println("Sensor: 32, Number: 8");
  }
  // if touch sensor on pin 4 is lower than a specific sensitive value
  if(touchRead(33) < 40) {  
    // do something, when touch is active
    Serial.println("Sensor: 33, Number: 5");
  }

  // if touch sensor on pin 4 is lower than a specific sensitive value
  if(touchRead(27) < 40) {  
    // do something, when touch is active
    Serial.println("Sensor: 27, Number: 2");
  }

  // if touch sensor on pin 4 is lower than a specific sensitive value
  if(touchRead(14) < 40) {  
    // do something, when touch is active
    Serial.println("Sensor: 14, Number: 7");
  }

  // if touch sensor on pin 4 is lower than a specific sensitive value
  if(touchRead(12) < 40) {  
    // do something, when touch is active
    Serial.println("Sensor: 12, Number: 4");
  }
  
  // if touch sensor on pin 4 is lower than a specific sensitive value
  if(touchRead(13) < 40) {  
    // do something, when touch is active
    Serial.println("Sensor: 13, Number: 1");
  }
}