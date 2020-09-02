#include <Sparki.h>;

int re_Center ,re_Right, re_Left, limiar = 200, PARE = 0;

void setup()
{
}

void loop()
{
    if(PARE != 1){
        sparki.moveForward();
        re_Center = sparki.lineCenter();
        re_Right  = sparki.edgeRight();
        re_Left   = sparki.edgeLeft();
        delay(300);
        
        if(re_Center < limiar || re_Right < limiar || re_Left < limiar)
        {
            PARE = 1;
        }
    }
}