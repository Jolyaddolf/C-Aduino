void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  

  for(int i = 0; i < 1; i++)
  {
     digitalWrite(13, LOW);
     delay(3000);

   }

  digitalWrite(13, HIGH);
 
  delay(500);
  digitalWrite(13, LOW);
  delay(1000);

}
