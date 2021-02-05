#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "Your Auth Token";       // You should get Auth Token in the Blynk App.
const int out = 5;                      // Relay 1 of BlynkBoard Conneted with D1(GPIO 05) pin of NodeMCU or Wemos D1
char ssid[] = "Your SSID";    // Your WiFi credentials.
char pass[] = "Password";        // Set password to "" for open networks.

void setup()
  {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(out,OUTPUT);
  }
  
void loop()
  {
  Blynk.run();
  }
