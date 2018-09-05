#include <Servo.h> 

Servo servo;
const int ServoA = 2;   //"Pusher" Servo D4
const int ButtonA = 4; //"Button Green" D2

void setup() {
  Serial.begin(9600);
   pinMode(ButtonA, INPUT_PULLUP); 
   
  servo.attach(ServoA); 
}

void loop() {
  // put your main code here, to run repeatedly:
  
       if ((digitalRead(ButtonA) == 0)){
                             
       }
       else{
        rotate();
       }
  Serial.println(digitalRead(ButtonA));
}
void rotate(){ 
     digitalWrite(ServoA,HIGH);
     delayMicroseconds(1400); //1300 is fast, 1499 is very slow
     digitalWrite(ServoA,LOW);
     delay(20); // 20.0ms 
     //delay(50);// enable this line to slow servo rotation
}
