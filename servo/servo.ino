#include <Servo.h>
Servo mac;
int dt=1000;
void setup() {
  Serial.begin(9600);
  mac.attach(10);
  
  

}

void loop() {
  mac.write(90); delay(dt);
  mac.write(70); delay(dt);
  mac.write(180); delay(dt);
  mac.write(0); delay(dt);
  mac.write(60); delay(dt);
  mac.write(150); delay(dt);
  mac.write(15); delay(dt); 
  
 
  
  
  
}
