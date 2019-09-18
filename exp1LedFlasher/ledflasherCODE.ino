void setup()
{
  pinMode(1, OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  delay(800); 
  digitalWrite(1, LOW);
  delay(800); 
}