int hijau = 2;
int kuning = 4; 
int merah = 5;
 

void setup() {

  // Menetapkan pin GPIO 2/LED sebagai OUTPUT

  pinMode(hijau, OUTPUT);
  pinMode(kuning, OUTPUT);
  pinMode(merah, OUTPUT);

}

 

// Fungsi Loop akan berjalan berulang-ulang

void loop() {

  digitalWrite(hijau, HIGH);
  digitalWrite(kuning, LOW);
  digitalWrite(merah, LOW);    // Menyalakan Lampu, Memberikan nilai High

  delay(6000);               // Nyalakan Lampu selama 1 detik

  digitalWrite(hijau, LOW);
  digitalWrite(kuning, HIGH);
  digitalWrite(merah, LOW);   // Mematikan Lampu, dengan perintah Low

  delay(2000);               // Matikan Lampu selama 1 detik

  digitalWrite(hijau, LOW);
  digitalWrite(kuning, LOW);
  digitalWrite(merah, HIGH);

  delay(5000);


}