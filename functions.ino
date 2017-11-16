
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

void motorWrite(int value) {
  analogWrite(10, motorSpeed);
  //Serial.println( readMotor() );
  
  if (readMotor() < value) {

  digitalWrite(forwardPin, HIGH);
  digitalWrite(backwardPin, LOW);
  } 
  else if (readMotor() > value) {

  digitalWrite(forwardPin, LOW);
  digitalWrite(backwardPin, HIGH);
  }
  else {
   digitalWrite(forwardPin, LOW);
  digitalWrite(backwardPin, LOW);
  }
}

