#include <Sparki.h>;

void setup ()
{
}

void loop ()
{
    sparki.moveForward(500); //anda 5 metros para frente
    sparki.moveRight(90); //olha para a direita
    delay(1000);
    sparki.moveLeft(180); //olha para a esquerda
    delay(2000);
    sparki.moveRight(90); //volta a olhar para frente
    delay(1000);
}