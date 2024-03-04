int hijau = 2;
int merah = 4;
 

void setup() {

  // Menetapkan pin GPIO 2/LED sebagai OUTPUT

  pinMode(hijau, OUTPUT);
  pinMode(merah, OUTPUT);

}

 

// Fungsi Loop akan berjalan berulang-ulang

void loop() {

  digitalWrite(hijau, HIGH);
  digitalWrite(merah, LOW);    // Menyalakan Lampu, Memberikan nilai High

  delay(1000);               // Nyalakan Lampu selama 1 detik

  digitalWrite(merah, HIGH);
  digitalWrite(hijau, LOW);   // Mematikan Lampu, dengan perintah Low

  delay(1000);               // Matikan Lampu selama 1 detik

}