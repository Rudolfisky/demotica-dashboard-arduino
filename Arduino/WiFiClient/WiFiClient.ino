#include <ESP8266WiFi.h>

// Network SSID
const char* ssid = "Hatter";
const char* password = "Wifi plz?";
 
void setup() {

  Serial.begin(115200);
  delay(10);
  Serial.println("start");
 
  // Connect WiFi
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.hostname("Name");
  WiFi.begin(ssid, password);
 
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
 
  // Print the IP address
  Serial.print("IP address: ");
  Serial.print(WiFi.localIP());
}
 
void loop() {
  
//Add your project's loop code here

  }
