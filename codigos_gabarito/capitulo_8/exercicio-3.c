#include <Sparki.h>;

int refl1, refl2, refl3, refl4, refl5, media;

void setup()
{
}

void loop()
{
    refl1 = sparki.lineCenter();
    delay(300);
    
    sparki.moveForward(1);
    refl2 = sparki.lineCenter();
    delay(300);
    
    sparki.moveForward(1);
    refl3 = sparki.lineCenter();
    delay(300);
    
    sparki.moveForward(1);
    refl4 = sparki.lineCenter();
    delay(300);
    
    sparki.moveForward(1);
    refl5 = sparki.lineCenter();
    delay(300);
    
    media = (refl1 + refl2 + refl3 + refl4 + refl5)/5;
    
    sparki.clearLCD();
    sparki.print(media);
    sparki.updateLCD();
    delay(3000);
}