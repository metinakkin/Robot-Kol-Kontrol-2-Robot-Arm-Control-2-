#include<Servo.h>

Servo sg901, sg902, sg903, sg904, sg905;

const int x1 = A0;
const int y1 = A1;
const int x2 = A2;
const int y2 = A3;
const int m = A4;
int val1, val2, val3, val4, val5;

void setup()
{
  sg901.attach(3);
  sg902.attach(9);
  sg903.attach(5);
  sg904.attach(6);
  sg905.attach(10);
  pinMode(x1, INPUT);
  pinMode(y1, INPUT);
  pinMode(x2, INPUT);
  pinMode(y2, INPUT);
  pinMode(m, INPUT);
  Serial.begin(9600);
}

void loop()
{

    val1 = analogRead(x1);
    val1 = map(val1, 0, 1023, 0, 180);
    Serial.println( val1);
    sg901.write(val1);
    delay(15);
    val2 = analogRead(y1);
    val2 = map(val2, 0, 1023, 0, 90);
    // Serial.println( val2);
    sg902.write(val2);
    delay(15);
    val3 = analogRead(x2);
    val3 = map(val3, 0, 1023, 0, 180);
    //Serial.println( val3);
    sg903.write(val3);
    delay(15);
    val4 = analogRead(y2);
    val4 = map(val4, 0, 1023, 0, 180);
    //Serial.println( val4);
    sg904.write(val4);
    delay(15);

  
  val5 = analogRead(m);
  val5 = map(val5, 0, 1023, 90, 180);
  Serial.println(val5);
  sg905.write(val5);
  delay(15);
}
