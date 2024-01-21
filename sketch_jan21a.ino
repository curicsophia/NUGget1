#include <Servo.h>

Servo alfred;
Servo cleop;
Servo dave;
Servo edward;
Servo a;
Servo c;
Servo d;
Servo e;
Servo t;

void setup() {
  alfred.attach(6);
  cleop.attach(5);
  //dave.attach(3);
  edward.attach(10);
  a.attach(3);
  c.attach(4);
  d.attach(5);
  e.attach(7);
  t.attach(2);
  pinMode(12,INPUT);

}

void loop() {
  if(digitalRead(12) == HIGH){
  alfred.write(0);
  delay(700);
  a.write(20);
  delay(700);
  cleop.write(80);
  delay(700);
  c.write(30);
  delay(10000);
  }
  /*
  alfred.write(0);
  a.write(110);
  cleop.write(80);
  c.write(30);
  dave.write(150);
  delay(450);
  dave.write(90);
  d.write(0);
  delay(700);
  e.write(160);
  edward.write(0);
  delay(700);

  cleop.write(80);
  c.write(30);
  e.write(160);
  edward.write(180);
  delay(100000);
     
  alfred.write(0);
  delay(1000);
  a.write(20);
  delay(2000);
  a.write(110);
  delay(2000);
  alfred.write(130);
  delay(700);
   
   cleop.write(80);
   delay(700);
   c.write(30);
   delay(1000);
   cleop.write(170);
   delay(700);
   c.write(140);
   delay(1000);
   
   d.write(20);
   delay(700);
   dave.write(150);
   delay(450);
   dave.write(90);
   delay(50);
   d.write(90);
   delay(700);
   dave.write(75);
   delay(450);
   dave.write(90);
   delay(50);

   e.write(160);
   delay(700);
   edward.write(180);
   delay(700);
   e.write(70);
   delay(700);
   edward.write(80);
   delay(1000);



   */
 
}
