// C++ code
//
const int output_pin =3;
void setup()
{
  pinMode(output_pin, OUTPUT);
}

void loop()
{
  analogWrite(output_pin,255);
  delay(1000);
  
  analogWrite(output_pin,100);
  delay(1000);
  
  //digitalWrite(output_pin, HIGH);
  //delay(1000); // Wait for 1000 millisecond(s)
  //digitalWrite(13, LOW);
  //delay(1000); // Wait for 1000 millisecond(s)
}