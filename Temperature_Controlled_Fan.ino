#include <DHT.h>
#include <LiquidCrystal.h>
#define Type DHT11

  //LiquidCrystalDisplay
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

  // DHT11 Sensor
int sensePin = 2;
DHT HT(sensePin, Type);
float humid;
float tempC;
float tempF;
int setTime = 500;

  //DC Motor
int speedPin = 5;
int dir1 = 4;
int dir2 = 3;
float mSpeed;

void setup() {
  // put your setup code here, to run once:

  //LiquidCrystalDisplay
  lcd.begin(16,2);
  
  //DC-Motor
  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);

  //DHT11 Sensor
  Serial.begin(9600);
  HT.begin();
  delay(setTime);
}

void loop() {
  // put your main code here, to run repeatedly:
  tempF = HT.readTemperature(true);
  delay(500);
  
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, HIGH);

  //LCD
  mSpeed = tempF*(115./67.) + 45.6 ;
  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.print(tempF);
  lcd.print(" F");
  lcd.setCursor(0,1);
  lcd.print("Speed: ");
  lcd.print(mSpeed);
  Serial.print(tempF);
  Serial.print("  ");
  Serial.println(mSpeed);
  
  analogWrite(speedPin, mSpeed);
  
  
}
