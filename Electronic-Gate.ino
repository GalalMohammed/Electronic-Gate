void setup() {
  pinMode(4,INPUT);
  pinMode(7,OUTPUT);
}
int i=0,f=0,s=0,b=-1;
void loop() {
  if (digitalRead(4)==HIGH)
  {
   b=b*(-1);
   delay(500);
  }
  if (b==1)
  {
  if (map(analogRead(A5),6,679,0,255)<100  )
  {
    while (map(analogRead(A5),6,679,0,255)<100); 
    f=s+1;
  }
  if (map(analogRead(A0),6,679,0,255)<100 )
  {
    while (map(analogRead(A0),6,679,0,255)<100);
    s=f+1;
  }
  if (f==1&&s==2)
    {
      i++;
      f=0;
      s=0;
    }
   else if (s==1&&f==2)
   {
      i--;
      f=0;
      s=0;
   }
  if (i>=5)
    digitalWrite(7,1); 
  else
    digitalWrite(7,0);
  }
  else
  {
    i=0;
    s=0;
    f=0; 
    digitalWrite(7,0);
  }
}
