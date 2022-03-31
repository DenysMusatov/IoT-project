/*******
 
 All the resources for this project:
 https://www.hackster.io/Aritro

*******/
#include <Wire.h>
#include "rgb_lcd.h"

//rgb_lcd lcd;

int redLed = 2;
int greenLed = 3;
int buzzer = A2;

//const int colorR = 255;
//const int colorG = 0;
//const int colorB = 0;


void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  //pinMode(smokeA0, INPUT);
  //Serial.begin(9600);

  //lcd.begin(16, 2);

  //lcd.begin(16, 2);

    //lcd.setRGB(colorR, colorG, colorB);

    // Print a message to the LCD.
    //lcd.print("hello, world!");

    delay(1000);
}

void loop() {
  int sensorValue = analogRead(A3);
  //lcd.setCursor(0, 1);
  Serial.println(sensorValue);
  //lcd.print(sensorValue);
  
  
  
  
  if (sensorValue > 400 )
  {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
    tone(buzzer, 2000, 200);
  }
  else
  {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
    noTone(buzzer);
  }
  delay(1);
}
