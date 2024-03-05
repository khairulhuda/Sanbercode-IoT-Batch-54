int ldrPin = A0; // Pin analog untuk sensor LDR
int ledPin = D4; // Pin digital untuk LED

void setup() {
  Serial.begin(115200);
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);
}
void loop() {
  int ldrValue = analogRead(ldrPin);
  // Sesuaikan nilai ambang sesuai kebutuhan
  int threshold = 500;

  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH); delay(500);
    digitalWrite(ledPin, LOW); delay(500); // Mengaktifkan LED
    Serial.print("Lampu Menyala karena ldr valuenya di bawah 500 yaitu ");
    Serial.println(ldrValue);
    delay(1000);

  } else {
    digitalWrite(ledPin, LOW);  // Mematikan LED
    Serial.print("Lampu Mati karena ldr valuenya di atas 500 yaitu ");
    Serial.println(ldrValue);
    delay(1000);
  }

}

