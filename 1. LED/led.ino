const int LED_PIN =13;
const int WAKTU_KEDIP = 200;

void setup() {
  // put your setup code here, to run once:
  pinMode( LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN, HIGH);
  delay(WAKTU_KEDIP);
  digitalwrite(LED_PIN, LOW);
  delay(WAKTU_KEDIP);

}
