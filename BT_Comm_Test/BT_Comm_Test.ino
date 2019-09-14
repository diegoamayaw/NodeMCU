#include "BluetoothSerial.h"

BluetoothSerial ESP_BT;

String incoming;

void setup() {
  Serial.begin(9600);
  ESP_BT.begin("ESP32_BT_Control");
  Serial.println("Ready to Pair");
}

void loop() {
  
  if (ESP_BT.available()) //Check if we receive anything from Bluetooth
  {
    incoming = ESP_BT.readString();
    Serial.print("Received: "); Serial.println(incoming);
 
  }
  delay(20);
}
