#include<hpma115s0.h>
void setup() 
{
   Serial.begin(38400);
}

void loop() {
   if(Serial.available() > 0)
   {
    state = Serial.read();
   }

}
