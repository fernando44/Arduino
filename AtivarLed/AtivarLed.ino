void setup() 
{
  pinMode(12, OUTPUT);//led
}

void loop() 
{
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(12,LOW);
    delay(1000);
}
