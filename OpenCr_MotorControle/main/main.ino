#include "motor_positions.h"
#include "opencr_serial_comm.h"
#if defined(__OPENCM904__)
#define DEVICE_NAME "3" //Dynamixel on Serial3(USART3)  <-OpenCM 485EXP
#elif defined(__OPENCR__)
#define DEVICE_NAME ""
#endif   

#define BAUDRATE_NUM 7
#define DXL_ID    1


uint8_t scanned_id[100];

DynamixelWorkbench dxl_wb;
String msg;
int value[3] = {0,0,0};


void setup() {
  // put your setup code here, to run once
  //while(!Serial); // Wait for Opening Serial Monitor
  bool result0 = false;
  const char *log;
  uint8_t dxl_cnt = 0;
  uint32_t baudrate = 57600;
  uint8_t range = 253;
  uint8_t index = 0;
  uint8_t dxl_id = DXL_ID;

  
  
    result0 = dxl_wb.init(DEVICE_NAME, baudrate, &log);
    dxl_cnt = 0;
    for (uint8_t num = 0; num < 3; num++) scanned_id[num] = 0;

    result0 = dxl_wb.scan(scanned_id, &dxl_cnt, range, &log);
    for(int i=0;i<3;i++){
    if(scanned_id[i] == 8){
      result0 = dxl_wb.jointMode(scanned_id[i], 20, 20, &log);
    }
    else{
       result0 = dxl_wb.jointMode(scanned_id[i], 20, 20, &log);
    }
     
    }
}

void loop() {
  if ((msg = readSerialPort(value))!= "") {
    int start[6] = {board(value[0],0), board(value[0],1),board(value[0],2),board(value[0],3),board(value[0],4),board(value[0],5)};
    int finish[6] = {board(value[1],0), board(value[1],1),board(value[1],2),board(value[1],3),board(value[1],4),board(value[1],5)}; 
    chess_move(start,finish,value[2],&dxl_wb); 
    sendData(msg); 
  }
}
