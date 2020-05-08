#define trigPin 7
#define echoPin 6

#define Led1 11
#define Led2 10
#define Led3 9



void setup() {
  Serial.begin (9800);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
}

void loop() {
long duration, distance;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);

digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) /29.1;

if (distance <= 25){
    digitalWrite(Led1,HIGH);
    digitalWrite(Led2,LOW);
    digitalWrite(Led3,LOW);
  }


 if (distance < 20){
    digitalWrite(Led1,LOW);
    digitalWrite(Led2,HIGH);
    digitalWrite(Led3,LOW);
  }

  
 if (distance < 10){
    digitalWrite(Led1,LOW);
    digitalWrite(Led2,LOW);
    digitalWrite(Led3,HIGH);
  }

delay(500);

    

}
