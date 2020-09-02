#include <Sparki.h>;

int distancia;

void setup()
{
}

void loop()
{
    distancia = sparki.ping();
    delay(500);
    sparki.clearLCD();
    sparki.print(distancia);
    sparki.updateLCD();
}