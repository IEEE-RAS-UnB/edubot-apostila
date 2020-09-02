#include <Sparki.h> 

float valor1 = 10;
float valor2 = 4;

void setup()
{
}
 
void loop()
{
    sparki.clearLCD();
     
    sparki.print("valor 1 = ");
    sparki.println(valor1);
     
    sparki.print("valor 2 = ");
    sparki.println(valor2);
     
    sparki.print("valor1 + valor2 = ");
    sparki.println(Valor1 + Valor2); 
    
    sparki.print("valor1 - valor2 = ");
    sparki.println(Valor1 - Valor2); 
     
    sparki.print("valor1 * valor2 = ");
    sparki.println(valor1 * valor2); 
     
    sparki.print("valor1 / valor2 = ");
    sparki.println(valor1 / valor2); 
     
    sparki.updateLCD();
    delay(1000); 
}