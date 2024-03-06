int buzzer = D2;
int ledpin = D3;
int smokeA0 = A0;
// Nilai threshold sensor. Ini bisa berubah
int sensorThres = 6;
 

void setup() {

 pinMode(buzzer, OUTPUT);
 pinMode(ledpin,OUTPUT);

 pinMode(smokeA0, INPUT);

 Serial.begin(9600);

}

 

void loop() {

 int analogSensor = analogRead(smokeA0);

 // Untuk cek nilai threshold

 if (analogSensor > sensorThres)

 {

   tone(buzzer, 100, 200);
   digitalWrite(ledpin, HIGH);delay(200);
   digitalWrite(ledpin, LOW);delay(200);
   Serial.print("Terdeteksi Asap GANNNNN!!, Tebalnya : ");
   Serial.println(analogSensor);delay(1000);
   delay(1000);

 }

 else

 {

   noTone(buzzer);

 }

 delay(100);

}