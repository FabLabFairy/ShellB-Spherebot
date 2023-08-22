// StepperTester.c - Simple stepper motor tester
int PUL=5; //define Pulse pin
int DIR=2; //define Direction pin
int ENA=8; //define Enable Pin - note this is a NOT_ENABLE
void setup() {
  pinMode (PUL, OUTPUT);
  pinMode (DIR, OUTPUT);
  pinMode (ENA, OUTPUT);
}

void loop() {
  digitalWrite(ENA,LOW);      // LOW enables the motors

  // First go one way...
  digitalWrite(DIR,LOW);
  for (int i=0; i<200; i++)    // Forward 200 steps
  {
    delay(10);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(50);
  }

  // Then go the other way
  digitalWrite(DIR,HIGH);
  for (int i=0; i<200; i++)   // Backward 200 steps
  {
    delay(10);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(50);
  }
}
