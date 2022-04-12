void setup() {
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

const char* ssid     = "1234";
const char* password = "00000000";
 
WiFi.softAP(ssid, password);
delay(900000);
}

   
void loop(){  


{ 
  Serial.begin(9600);
  // Connect to WiFi
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
     delay(500);
     Serial.print(".");
  }

}
}
