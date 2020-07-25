#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


#define BLYNK_PRINT Serial

char auth [] = "8vGr_CjHDTQUfYpPDHGtV1pDZTFynZ_R";
char ssid [] = "D5/16";
char pswd [] = "ab1107fok";
void setup () {
 Serial.begin(9600);
 Blynk.begin(auth,ssid,pswd);
}
 void loop() {
  Blynk.run();
 }
