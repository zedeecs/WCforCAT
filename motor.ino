/*
 * Stepper_Motor
 * 步进电机驱动，实现正反转
 */
int ys = 3;


void setup() {
  // put your setup code here, to run once:
  for (int i = 2; i < 6; i++) //初始化步进电机控制针脚
  {
    pinMode(i, OUTPUT);
    
  }

  for (int i = 8; i < 9; i++) //初始化按钮控制针脚
  {
    pinMode(i,INPUT);
    digitalWrite(i,HIGH);
  }
} 

// void cwbtm == 8;
// void antcwbtm == 9;


void clockwise(int num)
{
  for (int count = 0; count < num; count++)
  {
    for (int i = 2; i < 6; i++)
    {
      digitalWrite(i, HIGH);
      delay(ys);
      digitalWrite(i, LOW);
    }
  }
}

void anticlockwise(int num)
{
  for (int count = 0; count < num; count++)
  {
    for (int i = 5; i > 1; i--)
    {
      digitalWrite(i, HIGH);
      delay(ys);
      digitalWrite(i, LOW);
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  while (digitalRead(8) == LOW)
  {
    clockwise(1);
  }
  delay(200);
  anticlockwise(0);
}