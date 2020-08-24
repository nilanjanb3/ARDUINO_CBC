#define led 13
#define motor 9
#define val 8

void setup()
{
  digitalWrite(led,LOW);
  digitalWrite(motor,LOW);
}
void loop()
{
  if(digitalRead(val)==HIGH)
  {
    digitalWrite(led,HIGH);
    digitalWrite(motor,HIGH);
    
  }
  else
  {
    digitalWrite(led,LOW);
    digitalWrite(motor,LOW);
  }
}