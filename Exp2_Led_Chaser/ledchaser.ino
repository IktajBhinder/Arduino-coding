void setup()
{ for(int i=1;i<5;i++)
{
  pinMode(i, OUTPUT);
}
}

void loop()
{ for(int i=1;i<5;i++)
{ if(i!=4)
{ digitalWrite(i, HIGH);
 digitalWrite(i+1, HIGH);
  delay(800); 
  digitalWrite(i, LOW);
 digitalWrite(i+1, LOW);
  delay(800); 
}
 else
   digitalWrite(i, HIGH);
 digitalWrite(i-3, HIGH);
 delay(800);
 digitalWrite(i, LOW);
 digitalWrite(i-3, LOW);
  delay(800);
} 
}