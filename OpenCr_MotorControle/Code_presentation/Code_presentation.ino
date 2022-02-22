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

#define BAUDRATE  57600
#define BOX_ID    19
#define SHOULDER_ID   4
#define ELBOW_ID    21  
#define WRIST_ID    18

const uint8_t dxl_id = WRIST_ID;
DynamixelWorkbench dxl_wb;

void setup() 
{
  Serial.begin(57600);
  // while(!Serial); // Wait for Opening Serial Monitor

  const char *log;
  bool result = false;
  bool result2 = false;


  uint16_t model_number = 0;

  result = dxl_wb.init(DEVICE_NAME, BAUDRATE, &log);
  result2 = dxl_wb.init(DEVICE_NAME, BAUDRATE, &log);
  if (result == false)
  {
    Serial.println(log);
    Serial.println("Failed to init");
  }
  else
  {
    Serial.print("Succeeded to init : ");
    Serial.println(BAUDRATE);  
  }



   
  result= dxl_wb.ping(BOX_ID, &model_number, &log);
  result2= dxl_wb.ping(WRIST_ID, &model_number, &log);
  
  if (result == false)
  {
    Serial.println(log);
    Serial.println("Failed to ping");
  }
  else
  {
    Serial.println("Succeeded to ping");
    Serial.print("id : ");
    Serial.print(BOX_ID);
    Serial.print(" model_number : ");
    Serial.println(model_number);

    Serial.println("Succeeded to ping");
    Serial.print("id : ");
    Serial.print(WRIST_ID);
    Serial.print(" model_number : ");
    Serial.println(model_number);
    
  }

  
  result = dxl_wb.jointMode(BOX_ID, 100, 1000, &log);
  //result = dxl_wb.torqueOff(BOX_ID, &log);
  result2 = dxl_wb.jointMode(WRIST_ID, 100, 1000, &log);
  //result2 = dxl_wb.torqueOff(WRIST_ID, &log);

  
  if (result == false)
  {
    Serial.println(log);
    Serial.println("Failed to change joint mode");
  }
  else
  {
    Serial.println("Succeed to change joint mode");
    Serial.println("Dynamixel is moving...");
    while(true){
    dxl_wb.goalPosition(BOX_ID, (int32_t)1500);
    dxl_wb.goalPosition(WRIST_ID, (int32_t)3500);
    delay(1500);

    dxl_wb.goalPosition(BOX_ID, (int32_t)2500);
    dxl_wb.goalPosition(WRIST_ID, (int32_t)1900);
    delay(1500);
    }
  }
}

void loop() 
{
  const char *log;
 
  bool result = false;
  bool result2 = false;
  int32_t get_data = 0;
  int32_t get_data2 = 0;
  result = dxl_wb.itemRead(BOX_ID, "Present_Position", &get_data, &log);
  result = dxl_wb.itemRead(WRIST_ID, "Present_Position", &get_data2, &log);
  if (result == false)
  {
    Serial.println(log);
    Serial.println("Failed to get present position");
  }
  else
  {
    Serial.print("Succeed to get present position(value : ");
    Serial.print(get_data);
    Serial.println(")");

    Serial.print("Succeed to get present position 2(value : ");
    Serial.print(get_data2);
    Serial.println(")");
  }

  delay(100);
}
