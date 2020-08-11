   int a=0;
   void setup() {
  // put your setup code here, to run once:
  pinMode(5,INPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 
   a= digitalRead(5);
   if(a==0)
   {
    digitalWrite(8,HIGH);
    }
     digitalWrite(8,LOW);
}
