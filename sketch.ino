nt ldrPin = A0;
int ledPin = 13;
int ldrValue = 0;
int threshold = 500;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);

  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH); // Dark → LED ON
  } else {
    digitalWrite(ledPin, LOW);  // Bright → LED OFF
  }
  delay(100);
}
