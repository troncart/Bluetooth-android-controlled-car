/*********TACHLOG powered********
*********www.troncart.com*******
**electronics components online**
***********Mobile Controlled Car**************
***********13-07-2019**************
*/
 
#define m11 9 
#define m12 10 
#define m21 11 
#define m22 12
#define enA 7
#define enB 6
void setup()
{
Serial.begin(9600);
pinMode(m11, OUTPUT);
pinMode(m12, OUTPUT);
pinMode(m21, OUTPUT);
pinMode(m22, OUTPUT);
pinMode(enA, OUTPUT);
pinMode(enB, OUTPUT);
}
void forward()
{
digitalWrite(m11, HIGH);
digitalWrite(m12, LOW);
digitalWrite(m21, LOW);
digitalWrite(m22, HIGH);
digitalWrite(enA, HIGH);
digitalWrite(enB, HIGH);
}
void left()
{
digitalWrite(m11, HIGH);
digitalWrite(m12, LOW);
digitalWrite(m21, HIGH);
digitalWrite(m22, LOW);
digitalWrite(enA, HIGH);
digitalWrite(enB, HIGH);
}
void backward()
{
digitalWrite(m11, LOW);
digitalWrite(m12, HIGH);
digitalWrite(m21, HIGH);
digitalWrite(m22, LOW);
digitalWrite(enA, HIGH);
digitalWrite(enB, HIGH);
}
void right()
{
digitalWrite(m11, LOW);
digitalWrite(m12, HIGH);
digitalWrite(m21, LOW);
digitalWrite(m22, HIGH);
digitalWrite(enA, HIGH);
digitalWrite(enB, HIGH);
}
void stop0()
{
digitalWrite(m11, LOW);
digitalWrite(m12, LOW);
digitalWrite(m21, LOW);
digitalWrite(m22, LOW);
digitalWrite(enA, HIGH);
digitalWrite(enB, HIGH);

}
void loop()
{
while(Serial.available())
{
char data = Serial.read();
//Serial.println(data);

if(data =='1') // forward
{
Serial.println("Forward");
forward();


}
else if(data == '2') //left
{
Serial.println("Left");
left();

}
else if(data =='3') //right
{
Serial.println("right");
right();

}

else if(data =='4') //backward
{
Serial.println("backward");
backward();

}
else if(data =='5') //stop
{
Serial.println("Stop");
stop0();

}

}
}
 
