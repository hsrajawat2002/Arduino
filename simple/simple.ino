ashutosh cuhahanasdffloat v,v1;

void setup()
{
  
  pinMode(A2,INPUT);
  pinMode(4,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  Serial.begin(57600);
  
}

void loop()
{
  v=analogRead(A2);
  v1 = (v/1023.)*(5.);
  if(v1<3.){
      digitalWrite(3,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(4,LOW);
    }
  if(v1>=3. && v1<=4.){
      digitalWrite(2,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(3,LOW);
    }
  if(v1>4.){
      digitalWrite(4,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
    }
    
 }
