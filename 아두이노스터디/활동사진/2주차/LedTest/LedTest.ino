const int btn = 5;
const int ledPin = 4;


void setup() {
  // put your setup code here, to run once:
  pinMode(btn, INPUT);
  Serial.begin(9600);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  int val = digitalRead(btn);
  Serial.println(val);
  if(val == 1) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(100);

}
