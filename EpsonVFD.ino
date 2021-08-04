/*
Epson VFD hack by @iooner
August 2021

WORK IN PROGRESS

Dump Espon board and talk directly to the Noritake-Itron CU20026SCPB-T23C with an ESP8266
*/
#include <SoftwareSerial.h>

SoftwareSerial TTLtoRS(D1, D2); // RX, TX
const int vfd_max = 20;
const int vfd_lines = 2;

void setup()
{
  Serial.begin(115200);
  TTLtoRS.begin(115200);
  clearVFD();
  TTLtoRS.println("Hello World!");
  TTLtoRS.println("Hello World!");
}

void loop()
{
String scroll_msg = "111111111111111111112";
int scroll_lenght = scroll_msg.length();

if (scroll_lenght < vfd_max+1) {
    // afficher le message sur la deuxième ligne
}
else {
    // scroll texte
}

delay(10000);
}

void clearVFD()
{
  // Clean up screen
  TTLtoRS.write(0x0C);
}
