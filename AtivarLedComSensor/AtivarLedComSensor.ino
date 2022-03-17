void setup() 
{
  pinMode(12, OUTPUT);//led
  pinMode(8, INPUT);//sensor
}

void loop() 
{
  if(digitalRead(8)==HIGH)
  {
    digitalWrite(12, HIGH);
  }
  else{
    digitalWrite(12,LOW);
  }
}
