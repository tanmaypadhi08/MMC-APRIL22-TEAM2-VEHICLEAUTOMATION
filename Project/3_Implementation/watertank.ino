#include<Servo.h>
#define trigPin 12
#define echoPin 13
#define MAX_DISTANCE 50
int LEDhigh = 3, LEDlow=2;
Servo myservo;

void setup()
{
Serial.begin(9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(LEDhigh, OUTPUT);
pinMode(LEDlow, OUTPUT);
myservo.attach(9);

}

void loop()
{
int duration, low, posi=0,i;
digitalWrite(trigPin,LOW);
delay(2);
digitalWrite(trigPin,HIGH);
delay(10);
duration = pulseIn(echoPin,HIGH);
low = (duration/2)/29.1;
Serial.print(low);
Serial.println(" cm");

if(low<5)
{
digitalWrite(LEDlow, LOW);
digitalWrite(LEDhigh, HIGH);
myservo.write(180);
}
else
{digitalWrite(LEDlow, HIGH);
digitalWrite(LEDhigh, LOW);
myservo.write(90);
}
}
