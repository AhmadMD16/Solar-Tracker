#include <Servo.h>

Servo servo_x;
Servo servo_y;

int val_x = 19;
int val_y = 100;
int val0;
int val1;
int val2;
int val3;
int servoSpeed = 20;

void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  servo_x.attach(9);
  servo_y.attach(8);
  Serial.begin(9600);
  servo_x.write(val_x);
}

void loop() {
  val0 = analogRead(A0);
  val1 = analogRead(A1);
  val2 = analogRead(A2);
  val3 = analogRead(A3);
  up_down();
  right_left();
}

void up_down()
{
  if (max(val0, val2) > max(val1, val3))
  {
    if(val_y < 140)
    {
      val_y++;
    }
    servo_y.write(val_y);
    delay(servoSpeed);
  }
  else if (max(val0, val2) < max(val1, val3))
  {
    if(val_y > 100)
    {
      val_y--;
    }
    servo_y.write(val_y); 
    delay(servoSpeed);
  }  
}

void right_left()
{
  if(max(val0, val1) > max(val2, val3))
  {
    servo_x.write(val_x + 4);
  }
  else if(max(val0, val1) < max(val2, val3))
  {
    servo_x.write(val_x - 5);
  }
  else
  {
    servo_x.write(val_x);
  }
}
