const int POT_PIN = A1; // Pin Analog
const int LED_PIN = 11; // Pin LED


void setup() {
  pinMode(POT_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int val = analogRead(POT_PIN);
  val = map(val, 0, 1023, 0, 255);
  analogWrite(LED_PIN, val);

}
