String msg="What colour you want?";
String ans;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(msg);
  while(Serial.available()==0){
    
    }
  ans= Serial.readString();
  if(ans=="1"){
     digitalWrite(2,HIGH);
     digitalWrite(4,LOW);
     digitalWrite(3,LOW);
        
    }
  if(ans=="2"){
     digitalWrite(3,HIGH);
     digitalWrite(2,LOW);
     digitalWrite(4,LOW); 
         
    }
  if(ans=="3"){
     digitalWrite(4,HIGH);
     digitalWrite(3,LOW);
     digitalWrite(2,LOW);
           
    }
  if(ans=="on"){
     digitalWrite(4,HIGH);
     digitalWrite(3,HIGH);
     digitalWrite(2,HIGH);
           
    }
   if(ans=="off"){
     digitalWrite(4,LOW);
     digitalWrite(3,LOW);
     digitalWrite(2,LOW);
           
    }

}
