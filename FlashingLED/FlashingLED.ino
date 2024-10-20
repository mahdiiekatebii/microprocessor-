const int led = 13;
const int pushbtn = 2;
int pinState = 0;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(pushbtn, INPUT);
}

void loop() {
  digitalWrite(led, LOW);
  pinSate = digitalRead(pushbtn);
  if (pinState == = HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
