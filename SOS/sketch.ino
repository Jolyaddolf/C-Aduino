
int ledPin = 13;
int dotDeley = 200;

void setup() 
{
  pinMode(ledPin, OUTPUT);

}

void loop() 
{

  //Буква S
  
   digitalWrite(ledPin, HIGH);
   delay(dotDeley);
   digitalWrite(ledPin, LOW);
   delay(dotDeley);

    digitalWrite(ledPin, HIGH);
    delay(dotDeley);
    digitalWrite(ledPin, LOW);
    delay(dotDeley);

    digitalWrite(ledPin, HIGH);
    delay(dotDeley);
    digitalWrite(ledPin, LOW);
    

    delay(3*dotDeley);

  //Буква О

    digitalWrite(ledPin, HIGH);
   delay(3*dotDeley);
   digitalWrite(ledPin, LOW);
   delay(dotDeley);

    digitalWrite(ledPin, HIGH);
    delay(3*dotDeley);
    digitalWrite(ledPin, LOW);
    delay(3*dotDeley);

    digitalWrite(ledPin, HIGH);
    delay(3*dotDeley);
    digitalWrite(ledPin, LOW);

    delay(3*dotDeley);
    
  //Буква S  
    digitalWrite(ledPin, HIGH);
   delay(dotDeley);
   digitalWrite(ledPin, LOW);
   delay(dotDeley);

    digitalWrite(ledPin, HIGH);
    delay(dotDeley);
    digitalWrite(ledPin, LOW);
    delay(dotDeley);

    digitalWrite(ledPin, HIGH);
    delay(dotDeley);
    digitalWrite(ledPin, LOW);

    delay(7*dotDeley);

}
