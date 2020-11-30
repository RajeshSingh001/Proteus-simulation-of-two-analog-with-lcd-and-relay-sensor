#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{  
  lcd.begin(16, 2);
  Serial.begin(9600);
  //start serial connection
  //configure pin2 as an input and enable the internal pull-up resistor
 // pinMode(10, INPUT_PULLUP);
  pinMode(9, OUTPUT);
   //lcd.setCursor(0, 0);
   lcd.print("LM35 READING");
   lcd.setCursor(0, 1);
   lcd.print("System");
   delay(1000);
   lcd.clear();
}

void loop() 
{
  //read the pushbutton value into a variable
   int sensorValue1 = analogRead(A0);
   int sensorValue2 = analogRead(A1);
   int TEMP1=sensorValue1/2;
   int TEMP2=sensorValue2/2;
  //int sensorVal = digitalRead(10);
  //print out the value of the pushbutton
   lcd.setCursor(0, 0);
   lcd.print("TEMP1:");
   lcd.print(TEMP1);
   lcd.setCursor(0, 1);
   lcd.print("TEMP2:");
   lcd.print(TEMP2);
   
   Serial.print("TEMP1:");
   Serial.print(TEMP1);
   Serial.print("TEMP2:");
   Serial.print(TEMP2);
   delay(500);
      
 /* if (TEMP >=50)
  { 
    lcd.clear();
    digitalWrite(9, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("OVER TEMP");
    delay(20);
  } 
  else 
  { 
    lcd.clear();
    digitalWrite(9, LOW);
    lcd.setCursor(0, 1);
    lcd.print("NORMAL TEMP ");
    delay(20);
  }*/
  
}
