#include <Sparki.h>;

void setup()
{
}

void loop()
{
  sparki.clearLCD();
  sparki.drawCircle(64,32,20);
  sparki.drawCircleFilled(64,32,10);
  sparki.updateLCD();
  delay(1000);  
}