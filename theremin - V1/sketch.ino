


void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);


}

void loop() 
{
  // put your main code here, to run repeatedly:
   int val, frequency;
   val = analogRead(A0);
 frequency = map(val, 0, 1023 ,3500, 4500 );
 tone(11, frequency, 20);
 



}
