
long oldPosition  = -999;
long newPosition = 0;

int readMotor(){
  long newPosition = myEnc.read();
  if (newPosition != oldPosition) {
    oldPosition = newPosition;
    return newPosition;
  }
}


void motorAttach(){
  pinMode(forwardPin, OUTPUT);
  pinMode(backwardPin, OUTPUT);
  pinMode(pwmPin, OUTPUT);
  Serial.begin(9600);
}

/*motorWrite(int value) {
 
}*/

