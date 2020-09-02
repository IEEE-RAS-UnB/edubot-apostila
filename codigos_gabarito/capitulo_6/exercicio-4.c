#include <Sparki.h>;

int distancia;

void setup()
{
    sparki.servo(SERVO_CENTER);
    delay(500);
}

void loop()
{
    distancia = sparki.ping();
    delay(500);
    distancia = distancia - 7;
    sparki.moveForward(distancia);
    delay(3000);
}