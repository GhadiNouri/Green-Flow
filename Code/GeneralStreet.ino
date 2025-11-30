#include <RGBLed.h>

#define GL1 2 // Green Led pin out (General street)
#define YL1 3 // Yellow Led pin out (General Street)
#define RL1 4 // Red Led pin out (General Street)
RGBLed LD(5, 6, 7, RGBLed::COMMON_ANODE); //Red, Green, Blue

void setup()
{
  pinMode(GL1, OUTPUT);
  pinMode(YL1, OUTPUT);
  pinMode(RL1, OUTPUT);
}

void loop() 
{ 
  while(1){
    digitalWrite(RL1, HIGH);
    LD.setColor(250, 7, 7);
    delay(6000);

    digitalWrite(RL1, LOW);
    digitalWrite(YL1, HIGH);
    LD.setColor(255, 225, 0);
    delay(2000);

    digitalWrite(YL1, LOW);
    digitalWrite(GL1, HIGH);
    LD.setColor(64, 250, 7);
    delay(4000);

  }
}
