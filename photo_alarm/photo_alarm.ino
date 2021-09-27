float v;
float v0;
void setup() {
  // put your setup code here, to run once:
 
  pinMode(2,OUTPUT);
  
  pinMode(A2,INPUT);
  Serial.begin(9600);
  

}

void loop() {
  v=analogRead(A2);
  v0= (v/1023.)*(5.);
  Serial.println(v0);
  delay(300);
  if(v0<=4.5){
     
     digitalWrite(2,HIGH);
     
    }
   if (v0>4.5){
      digitalWrite(2,LOW);
      
    }

}
