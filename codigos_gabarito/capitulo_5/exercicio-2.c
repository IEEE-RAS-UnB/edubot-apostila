#include <Sparki.h> 

int contador = 0;

void setup()
{
}
 
void loop()
{
    sparki.clearLCD();
    sparki.print(contador);
    sparki.updateLCD();
    delay(1000); 
    contador = contador + 1;
}