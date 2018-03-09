const int ledPin = 3;
const int ledPin2 = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<255; i++) {
    analogWrite(ledPin, i);
    analogWrite(ledPin2, i);
    delay(10);
  }
}
