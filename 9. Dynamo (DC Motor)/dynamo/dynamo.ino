const int PIN_MERAH = 12;
const int DURASI_MERAH = 3;
const int DETIK = 1000;

void setup() {
pinMode(PIN_MERAH, OUTPUT );
}

void loop() {
digitalWrite(PIN_MERAH, HIGH); 
delay(DURASI_MERAH * DETIK); 
digitalWrite(PIN_MERAH, LOW); 
delay(2000);
}
