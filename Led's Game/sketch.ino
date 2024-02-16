int control;
int ball=6;
int ballDirectory = 1;
int lose = 0;



void setup() 
{
for(int i = 0; i < 10 ;++i)
pinMode(i + 0, OUTPUT);  

}

void loop() 
{ 


   if(lose == 0)
   {
    digitalWrite(control, LOW);
    digitalWrite(ball, LOW);

   }



  int read = analogRead(A0);
  if(read >= 512) control = 0;
  if(read < 512) control = 9;  
  digitalWrite(control, HIGH);

  if(ballDirectory == 1 ) ++ball;
  if(ballDirectory == 2 ) --ball;

  if(ball == 3 && control == 2 )
  {
    ballDirectory = 1;
    
  }

if(ball == 8 &&  control == 9 )
  {
    ballDirectory = 2;
    
  }

  if(ball == 9 || ball == 0) lose = 1;
  if(lose == 1){
    for(int i = 0; i < 10; ++i)
    digitalWrite(i + 0, HIGH);
  }
  digitalWrite(ball, HIGH);
  delay(1000);
}


 


   
   
  





