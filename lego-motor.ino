#include <Encoder.h>
#define forwardPin 8
#define backwardPin 9
#define pwmPin 10


Encoder myEnc(2, 3);
int pwmValue = 1;

void setup() {
  motorAttach();
}



void loop() {
  analogWrite(10, pwmValue);
  Serial.println( readMotor() );
  digitalWrite(backwardPin, HIGH);
}



