#include <Sparki.h>;

void setup ()
{
}

void loop ()
{
    sparki.motorRotate(MOTOR_LEFT,DIR_CCW,100);
    sparki.motorRotate(MOTOR_RIGHT,DIR_CW,50);
}