#include <Sparki.h>;

int cronometro = 5;
int distancia = 100;
int tempo = 10000;

void setup()
{
}

void loop()
{
    sparki.clearLCD();
    sparki.print(cronometro --);
    sparki.updateLCD();
    delay(1000);
    
    sparki.clearLCD();
    sparki.print(cronometro --);
    sparki.updateLCD();
    delay(1000);
    
    sparki.clearLCD();
    sparki.print(cronometro --);
    sparki.updateLCD();
    delay(1000);
    
    sparki.clearLCD();
    sparki.print(cronometro --);
    sparki.updateLCD();
    delay(1000);
    
    sparki.clearLCD();
    sparki.print(cronometro --);
    sparki.updateLCD();
    delay(1000);
    
    sparki.clearLCD();
    sparki.updateLCD();
    sparki.moveForward(distancia);
    
    cronometro = 5;
    delay(tempo);
}