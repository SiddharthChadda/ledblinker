int led[]={13,12,11,10,9,8,7,6,5,4}; //or #defineled 13
void setup() {

  for(int i=0;i<10;i++)
{
  pinMode(led[i],OUTPUT); //pinmode(13,1) 1--output ,0--input
  // put your setup code here, to run once:
}
}

void loop() {

  for(int i=0;i<10;i++)
  {
     digitalWrite(led[i],HIGH);
  }
  delay(1000);

  
    for(int i=0;i<10;i++)
{
  digitalWrite(led[i],LOW);
  }
  delay(1000);

  
  // put your main code here, to run repeatedly:

}
