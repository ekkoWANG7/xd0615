/*
  Pitch follower

  Plays a pitch that changes based on a changing
  analog input

  circuit:
  * 8-ohm speaker on digital pin 9
  * photoresistor on analog 0 to 5V
  * 4.7K resistor on analog 0 to ground

  created 21 Jan 2010
  modified 31 May 2012  by Tom Igoe, with
  suggestion from Michael Flynn

  This example code is in the public domain.
  http://www.arduino.cc/en/Tutorial/Tone2
*/

int sensorReading = 0;   //存储值的变量

void setup()
{
  pinMode(A0, INPUT);   //将A0声明为INPUT模式
  Serial.begin(9600);        //串口

  pinMode(9, OUTPUT);    //将9声明为OUTPUT模式
}

void loop()
{
  // read the sensor
  sensorReading = analogRead(A0);      //读取音调跟随器A0的值并且存入sensorReading变量

  // print the sensor reading so you know its range
  Serial.println(sensorReading);              //输出消息sensorReading
  // map the sensor reading to a range for the

  // speaker
  tone(9, 440 * pow(2.0, (constrain(int(map(sensorReading, 0, 1023, 36, 84)), 35, 127) - 57) / 12.0), 1000);    //扬声器发出音调

  //延迟10毫秒保持串口稳定性
  delay(10); // Delay a little bit to improve simulation performance
}