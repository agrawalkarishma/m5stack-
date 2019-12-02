#include "WiFi.h"
#include <M5StickC.h>
 
const char* ssid = "ENGR_IOT";
const char* password =  "tse@iot2018";
 
void setup() {
 
  Serial.begin(115200);
  // Initialize the M5StickC object
  M5.begin();
  Wire.begin(0, 26, 100000);
  M5.Lcd.setRotation(1);
  M5.Lcd.setTextSize(2);
  WiFi.begin(ssid, password);
 M5.Lcd.println("Start WiFi..");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Connecting to WiFi..");
      // LCD display
// M5.Lcd.print("Connecting to WiFi..");
  }
 
  Serial.println("Connected to the WiFi network");
  M5.Lcd.println("WiFi Connected");
}
 
void loop() {}
