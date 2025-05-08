#include <SoftwareSerial.h>

SoftwareSerial vvmSerial(7, 3); // RX, TX (TX not used)

void setup() {
  Serial.begin(9600);
  vvmSerial.begin(9600);
  Serial.println("VVM201 UART Reading...");
}

void loop() {
  if (vvmSerial.available()) {
    String data = vvmSerial.readStringUntil('\n'); // assumes newline-terminated data
    Serial.print("VVM201: ");
    Serial.println(data);
  }
}
