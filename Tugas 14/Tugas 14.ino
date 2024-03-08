#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define BLYNK_AUTH_TOKEN "s7iyzXVVwaGFCoc0plUSije0d--Y0vLy"


char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "cahyo";//Enter your WIFI name
char pass[] = "cahyo012";//Enter your WIFI password

BLYNK_WRITE(V0) {
  digitalWrite(D1, param.asInt());
}

BLYNK_WRITE(V1) {
  digitalWrite(D2, param.asInt());
}

BLYNK_WRITE(V2) {
  digitalWrite(D3, param.asInt());
  digitalWrite(D4, param.asInt());
}
void setup() {
  pinMode(D1, OUTPUT);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  pinMode(D2, OUTPUT);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  pinMode(D3, OUTPUT);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  pinMode(D4, OUTPUT);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  Blynk.run();
}