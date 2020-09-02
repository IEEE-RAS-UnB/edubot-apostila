#include <Sparki.h>;

void setup()
{
}

void loop()
{
    int x = 2042385;
    sparki.clearLCD();
    if(!(x % 2)) 
    {
        sparki.print("O numero e par.");
    } else 
    {
        sparki.print("O numero e impar.");
    }
    sparki.updateLCD();
    delay(1000);
}