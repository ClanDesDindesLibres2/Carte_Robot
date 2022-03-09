#include "opencr_serial_comm.h"

String msg;
int value[3] = {0,0,0};

void setup() {
 Serial.begin(9600);
}

void loop() {
 if ((msg = readSerialPort(value))!= "") {
   sendData(msg);
 }
  delay(500);
}
