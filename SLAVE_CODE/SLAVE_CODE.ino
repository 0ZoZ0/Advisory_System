void setup() {
  Serial.begin(38400);
  pinMode(10,OUTPUT);
}

void loop() {
  if(Serial.available()>0)
  {
    char val = Serial.read();
    if(val == 'A')
    {
      digitalWrite(10,HIGH);
    }
    if(val == 'a')
    {
      digitalWrite(10,LOW);
    }
  }

}
