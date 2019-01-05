#include <ESP8266WiFi.h>
#include <WiFiUdp.h>

#define STRLEN    256
#define UDP_PORT	1337

static WiFiUDP Udp;
static char strbuffer[256];

void setup()
{
  // Enter your SSID details here
	WiFi.begin("ssid-name", "password123");
	Udp.begin(UDP_PORT);
}

void loop()
{
  int packetSize = Udp.parsePacket();
  if (packetSize)
  {
    int len = Udp.read(strbuffer, STRLEN);
    if (len > 0)
    {
      strbuffer[len] = 0; // Forces a null terminated string
    }
    Udp.beginPacket(Udp.remoteIP(), Udp.remotePort());
    // respond with our received message. Definitely vulnerable ;)
    Udp.write(strbuffer);
    Udp.endPacket();
  }
}
