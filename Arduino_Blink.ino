/*
YouTube Demo
Arduino Tutorial - LED Blink / Code Included 
*/

//Sets Red to digital pin 8 and Green to digital pin 7
#define Red 8
#define Green 7

void setup()
{
//Initializes pin 8 and 7 as outputs
  pinMode(Red,OUTPUT);
  pinMode(Green,OUTPUT);
}

void loop()
{
//Blinking
  digitalWrite(Red,HIGH); //Red on
  digitalWrite(Green,LOW); //Green off
  delay(500); //Wait half a second
  digitalWrite(Red,LOW); //Red off
  digitalWrite(Green,HIGH); //Green on
  delay(500); //Wait half a second
}
