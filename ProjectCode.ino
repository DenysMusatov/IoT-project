#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

int redLed = 2;
int greenLed = 3;
int buzzer = A2;

const int colorR = 255;
const int colorG = 0;
const int colorB = 0;

void setup() {
    // set up the LCD's number of columns and rows:
    pinMode(redLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
    pinMode(buzzer, OUTPUT);
    lcd.begin(16, 2);

    lcd.setRGB(colorR, colorG, colorB);
    // Print a message to the LCD.
    lcd.print("hello, world!");
    

    delay(1000);
}

void loop() {
    int sensorValue = analogRead(A3);
    lcd.setCursor(0, 1);
    lcd.print(sensorValue);
    delay(1000);
    lcd.clear();
    
    
    
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

/*********************************************************************************************************
    END FILE
*********************************************************************************************************/
