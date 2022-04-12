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
    if(scanned_id[i] == 8){
      result0 = dxl_wb.jointMode(scanned_id[i], 50, 50, &log);
    }
    else{
       result0 = dxl_wb.jointMode(scanned_id[i], 20, 20, &log);
    }
   
    
    if(result0==false)Serial.println("error1"); 
    }
    /*
    for(int j =0; j <3;j++)
    {
      dxl_wb.torqueOff(scanned_id[j]);
    }
    */
}

void loop() 
{
  bool shoulder_goal = false;
  bool box_goal = false;
  //int goal_reached = 0; 
  bool elbow_goal = false;   
  const char *log;
  int32_t data_shoulder = -1;
  int32_t data_box = -1;
   int32_t data_elbow = -1;
  int32_t SHOULDER_MIN = 1000;
  int32_t SHOULDER_MAX = 2000;
  int32_t BOX_LEFT = 2409;
  int32_t BOX_RIGHT = 2700;
  int32_t ELBOW_MIN = 2000;
  int32_t ELBOW_MAX = 2500;
   
  while(!shoulder_goal || !box_goal || !elbow_goal){
    dxl_wb.itemRead(18, "Present_Position", &data_shoulder, &log);
 
    dxl_wb.itemRead(8, "Present_Position", &data_box, &log);
  
    dxl_wb.itemRead(21, "Present_Position", &data_elbow, &log);
 
    
    dxl_wb.goalPosition(18, (int32_t)SHOULDER_MIN);
 
    dxl_wb.goalPosition(8, (int32_t)BOX_LEFT);
     
    dxl_wb.goalPosition(21, (int32_t)ELBOW_MAX);
   
    
    
    if(data_shoulder <=( SHOULDER_MIN+40) && data_shoulder >=( SHOULDER_MIN-40)){
      shoulder_goal = true;
      Serial.println("shoulder done");
      }
    if(data_box <=( BOX_LEFT+10) && data_box >=( BOX_LEFT-10))
    {
      box_goal = true;
      Serial.println("box done");
    }
    if(data_elbow <=( ELBOW_MAX+40) && data_elbow >=( ELBOW_MAX-40))
    {
      elbow_goal = true;
      Serial.println("elbow done");
    }

    }
   
  //dxl_wb.torqueOff(18);
  //dxl_wb.torqueOff(8);
  Serial.println("fin boucle 1"); 
  Serial.println("le data qui arrête est :"); 
  Serial.println("=========================");
  Serial.println(data_shoulder); 
  Serial.println(data_box);
  Serial.println(data_elbow);
  Serial.println("=========================");
  delay(5000);
  box_goal = false;
  shoulder_goal = false;
  elbow_goal=false;
  data_shoulder = -1;
  data_box = -1; 
  data_elbow=-1;
  delay(100);
  while(!shoulder_goal || !box_goal || !elbow_goal){
    dxl_wb.itemRead(18, "Present_Position", &data_shoulder, &log);
 
    dxl_wb.itemRead(8, "Present_Position", &data_box, &log);

    dxl_wb.itemRead(21, "Present_Position", &data_elbow, &log);

    
    dxl_wb.goalPosition(18, (int32_t)SHOULDER_MAX);
 
    dxl_wb.goalPosition(8, (int32_t)BOX_RIGHT);
 
    dxl_wb.goalPosition(21, (int32_t)ELBOW_MIN);
 
    
    if(data_shoulder <=( SHOULDER_MAX+40) && data_shoulder >=( SHOULDER_MAX-40)){
      shoulder_goal = true;
      Serial.println("shoulder done");
      }
    if(data_box <=( BOX_RIGHT+10) && data_box >=( BOX_RIGHT-10)){
      box_goal = true;
      Serial.println("box done");
      }
    if(data_elbow <=( ELBOW_MIN+40) && data_elbow >=( ELBOW_MIN-40))
    {
      elbow_goal = true;
      Serial.println("elbow done");
    }      
      
  }
  Serial.println("fin boucle 2"); 
  Serial.println("le data qui arrête est :"); 
  Serial.println("=============== ==========");
  Serial.println(data_shoulder); 
  Serial.println(data_box);
  Serial.println(data_elbow);
  Serial.println("=========================");
  delay(3000); 
}
