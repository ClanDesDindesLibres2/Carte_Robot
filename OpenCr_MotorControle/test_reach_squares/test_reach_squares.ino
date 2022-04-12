//THIS TEST WILL MAKE THE ARM REACH THE FOUR SQUARES LOCATED AT EACH CORNER OF THE BOARD
#include "motor_positions.h"
#if defined(__OPENCM904__)
#define DEVICE_NAME "3" //Dynamixel on Serial3(USART3)  <-OpenCM 485EXP
#elif defined(__OPENCR__)
#define DEVICE_NAME ""
#endif   

#define BAUDRATE_NUM 7
#define DXL_ID    1


uint8_t scanned_id[100];

DynamixelWorkbench dxl_wb;

void setup() {
  // put your setup code here, to run once
  while(!Serial); // Wait for Opening Serial Monitor
  bool result0 = false;
  const char *log;
  uint8_t dxl_cnt = 0;
  uint32_t baudrate = 57600;
  uint8_t range = 253;
  uint8_t index = 0;
  uint8_t dxl_id = DXL_ID;

  
  
    result0 = dxl_wb.init(DEVICE_NAME, baudrate, &log);
    if (result0 == false)
    {
      Serial.println(log);
      Serial.println("Failed to init");
    }
    else
    {
      Serial.print("Succeed to init : ");
      Serial.println(baudrate);  
    }

    dxl_cnt = 0;
    for (uint8_t num = 0; num < 3; num++) scanned_id[num] = 0;

    result0 = dxl_wb.scan(scanned_id, &dxl_cnt, range, &log);
    if (result0 == false)
    {
      Serial.println(log);
      Serial.println("Failed to scan");
    }
    else
    {
      Serial.print("Find ");
      Serial.print(dxl_cnt);
      Serial.println(" Dynamixels");

      for (int cnt = 0; cnt < dxl_cnt; cnt++)
      {
        Serial.print("id : ");
        Serial.print(scanned_id[cnt]);
        Serial.print(" model name : ");
        Serial.println(dxl_wb.getModelName(scanned_id[cnt]));
      }
    }  
    for(int i=0;i<3;i++){
    if(scanned_id[i] == 8){
      result0 = dxl_wb.jointMode(scanned_id[i], 20, 20, &log);
    }
    else{
       result0 = dxl_wb.jointMode(scanned_id[i], 20, 20, &log);
    }
    if(result0==false)Serial.println("error1"); 
    }
}

void loop() {
  int start[6] = {board(26,0), board(26,1),board(26,2),board(26,3),board(26,4),board(26,5)};
  int finish[6] = {board(23,0), board(23,1),board(23,2),board(23,3),board(23,4),board(23,5)}; 
  chess_move(start,finish,0,&dxl_wb);
}
