#include <Encoder.h>

#define tach1 2
#define tach2 3 
#define forwardPin 8
#define backwardPin 9
#define pwmPin 10


Encoder myEnc(tach1, tach2);
int motorSpeed = 80;

void setup() {
  motorAttach();
}



void loop() {
  motorWrite(300);
}



