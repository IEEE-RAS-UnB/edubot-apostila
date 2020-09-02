#include <Sparki.h>;

void setup()
{
}

void loop()
{
    int x = 34534;
    sparki.clearLCD();
    if ( (!(x % 2)) && (!(x % 3)) ) 
    {
        sparki.print("Numero divisivel por 2 e por 3.");
    } else if(!(x % 2)) 
    {
        sparki.print("Numero divisivel por 2.");
    } else if(!(x % 3))
    {
        sparki.print("Numero divisivel por 3.");
    }
    sparki.updateLCD();
    delay(1000);
}