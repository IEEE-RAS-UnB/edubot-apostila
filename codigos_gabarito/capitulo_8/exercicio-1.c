#include <Sparki.h>;

int botao;

void setup()
{
}

void loop()
{
    botao = sparki.readIR();
    if(botao == 70)
    {
        sparki.moveStop();
        delay(500);
        sparki.moveForward();
    } else if(botao == 67)
    {
        sparki.moveStop();
        sparki.moveRight();
    } else if(botao == 68)
    {
        sparki.moveStop();
        delay(500);
        sparki.moveLeft();
    } else if(botao == 21)
    {
        sparki.moveStop();
        delay(500);
        sparki.moveBackward();
    } else if(botao == 64)
    {
        sparki.moveStop();
        sparki.gripperStop();
    } else if(botao == 7)
    {
        sparki.gripperClose();
        // aperte o botão do quadrado para parar a garra
    } else if(botao == 9)
    {
        sparki.gripperOpen();
        delay(1000);
    }
}