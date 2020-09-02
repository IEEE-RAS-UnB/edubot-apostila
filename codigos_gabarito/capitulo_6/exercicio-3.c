#include <Sparki.h>;

void setup()
{
    sparki.servo(SERVO_CENTER);
    delay(3000);
}

void loop()
{
    sparki.servo(SERVO_LEFT);
    delay(800);
    sparki.servo(SERVO_CENTER);
    sparki.servo(SERVO_RIGHT);
    delay(800);
    sparki.servo(SERVO_CENTER);
}