int ledPin = 9;
int buttonPin = 2;
int buttonState = 0;

int blinkDelay = 300;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(blinkDelay);
    digitalWrite(ledPin, LOW);
    delay(blinkDelay);
  } else {
    digitalWrite(ledPin, LOW);
  }
}

