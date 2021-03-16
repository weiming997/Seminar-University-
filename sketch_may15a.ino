#include <Time.h>
#include <TimeAlarms.h>

void setup()
{
 Serial.begin(9600);
 setTime(10,24,0,5,15,2016); // set time
  // create the alarms     
}
void  loop(){  
  digitalClockDisplay();
  Alarm.delay(995); // wait one second between clock display
}
void digitalClockDisplay()
{
  // digital clock display of the time
  Serial.print(hour());
  printDigits(minute());
  printDigits(second());
  Serial.println(); 
}
void printDigits(int digits)
{
  Serial.print(":");
  if(digits < 10)
    Serial.print('0');
  Serial.print(digits);
}
