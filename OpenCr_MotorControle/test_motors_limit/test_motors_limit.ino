/*******************************************************************************
* Copyright 2016 ROBOTIS CO., LTD.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

/* Authors: Taehun Lim (Darby) */

#include <DynamixelWorkbench.h>

#if defined(__OPENCM904__)
  #define DEVICE_NAME "3" //Dynamixel on Serial3(USART3)  <-OpenCM 485EXP
#elif defined(__OPENCR__)
  #define DEVICE_NAME ""
#endif   

#define BAUDRATE_NUM 7
#define DXL_ID    1

uint8_t scanned_id[100];

DynamixelWorkbench dxl_wb;

void setup() 
{
  Serial.begin(57600);
  while(!Serial); // Wait for Opening Serial Monitor

  const char *log;
  bool result0 = false;

  
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
    result0 = dxl_wb.jointMode(scanned_id[i], 50, 50, &log);
    if(result0==false)Serial.println("error1"); 
    }
    
    for(int j =0; j <3;j++)
    {
      dxl_wb.torqueOff(scanned_id[j]);
    }
    
}

void loop() 
{
  bool result0 = true;
  const char *log;
  int32_t get_data0 = 0;
  for(int k = 0; k < 3; k++){
    result0 = dxl_wb.itemRead(scanned_id[k], "Present_Position", &get_data0, &log);
    if (result0 == false)
  {
    Serial.println(log);
    Serial.println("Failed to get present position");
  }
  else
  {
    Serial.print("Succeed to get present position(value : ");
    Serial.print(get_data0);
    Serial.println(")");
  }
 }
  
  Serial.println("============================================");
  delay(500);
  
}
