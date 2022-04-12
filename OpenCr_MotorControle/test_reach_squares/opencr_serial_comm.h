#ifndef OPENCR_SERIAL_COMM_H
#define OPENCR_SERIAL_COMM_H

#include <Arduino.h>

String readSerialPort(int values[3]); 
void sendData(String msg);

#endif
