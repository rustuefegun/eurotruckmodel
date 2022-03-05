#include <Servo.h>

Servo motor;
int value;
int angle;
char data;
#define servo_pin 9
int red1 = 2;
int green1 = 3;
int blue1 = 4;

bool engine = false;
bool handbrake = false;
bool rightsignal = false;
bool leftsignal = false;

void setup() {
  Serial.begin(9600);
  motor.attach(9);

  pinMode(red1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(blue1, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  if(Serial.available()){
    data = Serial.read();
    if(data == 'w'){
      motor.write(90);
    }
    else if(data == 'a'){
      motor.write(180);
    }
    else if(data == 's'){
      motor.write(90);
    }
    else if(data == 'd'){
      motor.write(0);
    }
    else if(data == 'd'){
      motor.write(0);
    }
    else if(data == 'e'){
      engineOnOff();
    }
    else if(data == 'p'){
      handBrake();
      
    }
    else if(data == 'm'){
      rightSignal();
    }
    else if(data == 'n'){
      leftSignal();
    }
  }

}
void engineOnOff(){
  if(engine == false){
    digitalWrite(red1, LOW);
    digitalWrite(green1, HIGH);
    digitalWrite(blue1, LOW);
    engine = true;
  }
  else{
    digitalWrite(red1, HIGH);
    digitalWrite(green1, HIGH);
    digitalWrite(blue1, HIGH);
    engine = false;
    
  }
}
void handBrake(){
  if(handbrake == false){
    digitalWrite(8, HIGH);
    handbrake = true;
  }
  else{
    digitalWrite(8, LOW);
    handbrake = false;
  }
}
void rightSignal(){
  if(rightsignal== false){
    digitalWrite(6, HIGH);
    rightsignal= true;
  }
  else{
    digitalWrite(6, LOW);
    rightsignal= false;
    
  }
}
void leftSignal(){
  if(leftsignal== false){
    digitalWrite(5, HIGH);
    leftsignal= true;
  }
  else{
    digitalWrite(5, LOW);
    leftsignal= false;
    
  }
}
