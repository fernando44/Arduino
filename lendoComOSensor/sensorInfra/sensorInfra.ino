const int pinSensor1 = 7;

void setup (){
  pinMode(10, OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(pinSensor1, INPUT);
  Serial.begin(9600);
}

void loop(){
  
  if(digitalRead(pinSensor1)==0){
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }
  else{
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  }
  delay(10);
}
