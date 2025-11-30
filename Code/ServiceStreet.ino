#include <RGBLed.h>

#define GL2 2 // Green Led pin out (General street)
#define YL2 3 // Yellow Led pin out (General Street)
#define RL2 4 // Red Led pin out (General Street)
//#define E 5 // Ultra sonic Echo Pin
//#define T 6 // Ultra sonic Trig Pin
RGBLed LD(7, 8, 9, RGBLed::COMMON_CATHODE); //Red, Green, Blue
#define IR1 10 // IR one sensor pin in <Street>
#define IR2 11 // IR second sensor pin in <Street>
#define IR3 12 // IR three sensor pin in <Street>
#define IR4 13 // IR four sensor pin in <Street>
long Meas; // variable for the duration of sound wave travel
int Measr; // variable for the distance measurment
int Street1;
int Street2;
int R1, R2, street; // road1, road2, both roads
int lescar = 2; // minimmum car for the general street
int medcar = 4; // midume car for the general street
int maxcar = 6; // max car for the general street

void setup()
{

  //pinMode(E, INPUT); // set echo as input
  //pinMode(T, OUTPUT); // set trig as output
  pinMode(GL2, OUTPUT);
  pinMode(YL2, OUTPUT);
  pinMode(RL2, OUTPUT);
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(IR3, INPUT);
  pinMode(IR4, INPUT);
  Serial.begin(9600); // Starts the serial communication

}

void loop()
{
  check();
  Decrmnt();
}

void St1()//increment road 1
{
  Street1 = digitalRead(IR1);
  if(Street1 == LOW) // receive a signal
  {
    R1 = R1+1; //increment in the road number of cars
    street = street+1; // increment for the both roads
    Serial.print("street");
    Serial.println(street);
  }
  delay(50);
}

void St3()//decrement road 1
{
  Street1 = digitalRead(IR3);
  if(Street1 == LOW) // receive a signal
  {
    //R1 = R1-1; //decrement in the road number of cars
    street = street-1; // decrement for the both roads
    Serial.print("street");
    Serial.println(street);
  }
  delay(50);
}

void St2() //increment road 2

{
  Street2 = digitalRead(IR2);
  if(Street2 == LOW) // receive a signal
  {
    R2 = R2+1; // increment in the road number of cars
    street = street+1; // increment for the both roads
    Serial.print("street");  
    Serial.println(street);
  }
  delay(50);

}

void St4() //dicrement road 2

{
  Street2 = digitalRead(IR4);
  if(Street2 == LOW) // receive a signal
  {
    //R2 = R2-1; // decrement in the road number of cars
    street = street-1; // decrement for the both roads
    Serial.print("street");  
    Serial.println(street);
  }
  delay(50);

}

void check()
{
  St1();
  St2();
  switch(street){
    case 0 ... 2:
    Gled();
    break;
    case 3 ... 4:
    Yled();
    break;  
    case 5 ... 6:
    Rled();
    break;
  }
}

void Rled()
{
  digitalWrite(YL2, LOW);
  digitalWrite(GL2, LOW);
  digitalWrite(RL2, HIGH);
  LD.setColor(255, 0, 0);
}

void Yled()
{
  digitalWrite(RL2, LOW);
  digitalWrite(GL2, LOW);
  digitalWrite(YL2, HIGH);
  LD.setColor(255, 255, 0);//255,151,0
}

void Gled()
{
  digitalWrite(RL2, LOW);
  digitalWrite(YL2, LOW);
  digitalWrite(GL2, HIGH);
  LD.setColor(0, 255, 0);
}

void Decrmnt()
{
  St3();
  St4();
}

