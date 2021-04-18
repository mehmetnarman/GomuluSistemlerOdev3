#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int led[]={6,7,8,9,10};
static int analog;
void setup() {
lcd.begin(16, 2);
for(int i=6; i<=10; i++){
  pinMode(i,OUTPUT);
}
}
void loop() {
  analog =map(analogRead(0),0,1024,0,100);
  lcd.print("Analog Bilgi");
  lcd.setCursor(0,1);
  lcd.print(analog);
  if(analog<10){
    digitalWrite(6,OUTPUT);
  }
  if(analog<20){
    digitalWrite(7,OUTPUT);
  }
  if(analog<40){
    digitalWrite(8,OUTPUT);
  }
  if(analog<60){
    digitalWrite(9,OUTPUT);
  }
  if(analog<80){
    digitalWrite(10,OUTPUT);
  }
  delay(500);
  for(int i=6; i<=10; i++){
  digitalWrite(i,LOW);
}
  lcd.clear();
}
