const int PIN_MERAH = 11;
const int PIN_KUNING = 10;
const int PIN_HIJAU = 9;

const int DURASI_MERAH = 6;
const int DURASI_KUNING = 2;
const int DURASI_HIJAU = 4;


const int DETIK = 1000;


void setup() {
  // put your setup code here, to run once:
pinMode(PIN_MERAH, OUTPUT );
pinMode(PIN_KUNING, OUTPUT);
pinMode(PIN_HIJAU, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(PIN_MERAH, HIGH); //Menyalakan LED
delay(DURASI_MERAH * DETIK); //Waktu Menyalakan LED
digitalWrite(PIN_MERAH, LOW); // Mematikan LED

digitalWrite(PIN_KUNING, HIGH);
delay(DURASI_KUNING * DETIK);
digitalWrite(PIN_KUNING, LOW);

digitalWrite(PIN_HIJAU, HIGH);
delay(DURASI_HIJAU * DETIK);
digitalWrite(PIN_HIJAU, LOW);

delay(2000);

digitalWrite(PIN_MERAH, HIGH);
digitalWrite(PIN_KUNING, HIGH);
digitalWrite(PIN_HIJAU, HIGH);
delay(5000);

digitalWrite(PIN_MERAH, LOW);
digitalWrite(PIN_KUNING, LOW);
digitalWrite(PIN_HIJAU, LOW);












}
