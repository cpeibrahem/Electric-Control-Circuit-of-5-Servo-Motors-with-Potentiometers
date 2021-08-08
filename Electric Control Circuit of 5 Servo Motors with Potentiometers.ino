#include <Servo.h> //include servo library

Servo Myservo1;  // create servo object to control a servo
Servo Myservo2;
Servo Myservo3;
Servo Myservo4;
Servo Myservo5;



int POTpin1 = 0;  // analog pin used to connect the potentiometer
int Value1;    // variable to read the value from the analog pin

int POTpin2 = 1;
int Value2;

int POTpin3 = 2;
int Value3;

int POTpin4 = 3;
int Value4;

int POTpin5 = 4;
int Value5;


// Stetup Function
void setup() {
  
  Myservo1.attach(3);  // attaches the servo on pin with a pwm
  Myservo2.attach(4);
  Myservo3.attach(5);
  Myservo4.attach(6);
  Myservo5.attach(7);
  
}


// Loop Function
void loop() {
  Value1 = analogRead(POTpin1);            // reads the value of the potentiometer (value between 0 and 1023)
  Value1 = map(Value1, 0, 1023, 90, 0);     // scale it to use it with the servo (angle value at 90 and 180 becuse we want its movment in 90 degrees range, so any 90 degrees range will work)
  Myservo1.write(Value1);                  // sets the servo position according to the scaled value
                             // waits for the servo to get there

  Value2 = analogRead(POTpin2);
  Value2 = map(Value2, 0, 1023, 90, 0);
  Myservo2.write(Value2);
   

  Value3 = analogRead(POTpin3);
  Value3 = map(Value3, 0, 1023, 90, 0);
  Myservo3.write(Value3);
   

  Value4 = analogRead(POTpin4);
  Value4 = map(Value4, 0, 1023, 90, 0);
  Myservo4.write(Value4);
  

  Value5 = analogRead(POTpin5);
  Value5 = map(Value5, 0, 1023, 90, 0);
  Myservo5.write(Value5);
   delay(10);
  
}