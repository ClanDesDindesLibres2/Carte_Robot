#include "opencr_serial_comm.h"

String readSerialPort(int values[3])
{
	String msg = "";
	 if (Serial.available()) {
	   delay(10);
	   int index = 0;
	   while (Serial.available() > 0) {
		values[index] = Serial.parseInt();
		 msg += values[index];
		 index++;
	   }
	   Serial.flush();
	 }
	 
	 return msg;
};

void sendData(String msg) 
{
 Serial.print(1);
};
