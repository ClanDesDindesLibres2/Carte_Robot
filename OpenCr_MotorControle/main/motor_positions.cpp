#include "motor_positions.h"


int** board()
{
	int* game_board[100];
  
  int positionHome[6] = {0,1,2,3,4,5}; 
  
  int position21[6] = {6,7,8,9,10,11};
  int position22[6] = {1,1,1,1,1,1};
  int position23[6]= {1,1,1,1,1,1};
  int position24[6]= {1,1,1,1,1,1};
  int position25[6]= {1,1,1,1,1,1};
  int position26[6]= {1,1,1,1,1,1};
  int position27[6]= {1,1,1,1,1,1};
  int position28[6]= {1,1,1,1,1,1};
  

  int position31[6]= {1,1,1,1,1,1};
  int position32[6]= {1,1,1,1,1,1};
  int position33[6]= {1,1,1,1,1,1};
  int position34[6]= {1,1,1,1,1,1};
  int position35[6]= {1,1,1,1,1,1};
  int position36[6]= {1,1,1,1,1,1};
  int position37[6]= {1,1,1,1,1,1};
  int position38[6]= {1,1,1,1,1,1};

  int position41[6]= {1,1,1,1,1,1};
  int position42[6] = {1,1,1,1,1,1};
  int position43[6] = {1,1,1,1,1,1};
  int position44[6] = {1,1,1,1,1,1};
  int position45[6] = {1,1,1,1,1,1};
  int position46[6] = {1,1,1,1,1,1};
  int position47[6] = {1,1,1,1,1,1};
  int position48[6] = {1,1,1,1,1,1};

  int position51[6] = {1,1,1,1,1,1};
  int position52[6] = {1,1,1,1,1,1};
  int position53[6] = {1,1,1,1,1,1};
  int position54[6] = {1,1,1,1,1,1};
  int position55[6] = {1,1,1,1,1,1};
  int position56[6] = {1,1,1,1,1,1};
  int position57[6] = {1,1,1,1,1,1};
  int position58[6] = {1,1,1,1,1,1};

  int position61[6] = {1,1,1,1,1,1};
  int position62[6] = {1,1,1,1,1,1};
  int position63[6] = {1,1,1,1,1,1};
  int position64[6] = {1,1,1,1,1,1};
  int position65[6] = {1,1,1,1,1,1};
  int position66[6] = {1,1,1,1,1,1};
  int position67[6] = {1,1,1,1,1,1};
  int position68[6] = {1,1,1,1,1,1};

  int position71[6] = {1,1,1,1,1,1};
  int position72[6] = {1,1,1,1,1,1};
  int position73[6] = {1,1,1,1,1,1};
  int position74[6] = {1,1,1,1,1,1};
  int position75[6] = {1,1,1,1,1,1};
  int position76[6] = {1,1,1,1,1,1};
  int position77[6] = {1,1,1,1,1,1};
  int position78[6] = {1,1,1,1,1,1};
  
  
  int position81[6] = {1,1,1,1,1,1};
  int position82[6] = {1,1,1,1,1,1};
  int position83[6] = {1,1,1,1,1,1};
  int position84[6] = {1,1,1,1,1,1};
  int position85[6] = {1,1,1,1,1,1};
  int position86[6] = {1,1,1,1,1,1};
  int position87[6] = {1,1,1,1,1,1};
  int position88[6] = {1,1,1,1,1,1};

  int position91[6] = {1,1,1,1,1,1};
  int position92[6] = {1,1,1,1,1,1};
  int position93[6] = {1,1,1,1,1,1};
  int position94[6] = {1,1,1,1,1,1};
  int position95[6] = {1,1,1,1,1,1};
  int position96[6] = {1,1,1,1,1,1};
  int position97[6] = {1,1,1,1,1,1};
  int position98[6] = {1,1,1,1,1,1};














  game_board[0] = positionHome;
  
  game_board[21] = position21;
  game_board[22] = position22;
  game_board[23] = position23;
  game_board[24] = position24;
  game_board[25] = position25;
  game_board[26] = position26;
  game_board[27] = position27;
  game_board[28] = position28;

  game_board[31] = position31;
  game_board[32] = position32;
  game_board[33] = position33;
  game_board[34] = position34;
  game_board[35] = position35;
  game_board[36] = position36;
  game_board[37] = position37;
  game_board[38] = position38;

  game_board[41] = position41;
  game_board[42] = position42;
  game_board[43] = position43;
  game_board[44] = position44;
  game_board[45] = position45;
  game_board[46] = position46;
  game_board[47] = position47;
  game_board[48] = position48;

  game_board[51] = position51;
  game_board[52] = position52;
  game_board[53] = position53;
  game_board[54] = position54;
  game_board[55] = position55;
  game_board[56] = position56;
  game_board[57] = position57;
  game_board[58] = position58;

  game_board[61] = position61;
  game_board[62] = position62;
  game_board[63] = position63;
  game_board[64] = position64;
  game_board[65] = position65;
  game_board[66] = position66;
  game_board[67] = position67;
  game_board[68] = position68;

  game_board[71] = position71;
  game_board[72] = position72;
  game_board[73] = position73;
  game_board[74] = position74;
  game_board[75] = position75;
  game_board[76] = position76;
  game_board[77] = position77;
  game_board[78] = position78;

  game_board[81] = position81;
  game_board[82] = position82;
  game_board[83] = position83;
  game_board[84] = position84;
  game_board[85] = position85;
  game_board[86] = position86;
  game_board[87] = position87;
  game_board[88] = position88;

  game_board[91] = position91;
  game_board[92] = position92;
  game_board[93] = position93;
  game_board[94] = position94;
  game_board[95] = position95;
  game_board[96] = position96;
  game_board[97] = position97;
  game_board[98] = position98;
  
  
  return game_board;
};

void reach_square(int* start,int* finish, int* home_spot,int kill){
  //INITIAlISATION
#if defined(__OPENCM904__)
#define DEVICE_NAME "3" //Dynamixel on Serial3(USART3)  <-OpenCM 485EXP
#elif defined(__OPENCR__)
#define DEVICE_NAME ""
#endif   

#define BAUDRATE_NUM 7
#define DXL_ID    1


uint8_t scanned_id[100];

DynamixelWorkbench dxl_wb;

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
      result0 = dxl_wb.jointMode(scanned_id[i], 175, 175, &log);
    }
    else{
       result0 = dxl_wb.jointMode(scanned_id[i], 80, 80, &log);
    }
    if(result0==false)Serial.println("error1"); 
    }
if(kill == 1){
  pick(finish,home_spot,dxl_wb);
  //DROP DANS LA FAUSSE
}
  pick(start,home_spot,dxl_wb); 
  drop(finish,home_spot,dxl_wb);  
};


void pick(int* square, int* home_spot, DynamixelWorkbench dxl_wb){
  //INIT
  bool done = false; 
  const char *log;
  bool shoulder_goal = false;
  bool box_goal = false; 
  bool elbow_goal = false;   
  int32_t data_shoulder = -1;
  int32_t data_box = -1;
  int32_t data_elbow = -1;
  //MOVE HOME
while(!shoulder_goal || !box_goal || !elbow_goal){
    dxl_wb.itemRead(18, "Present_Position", &data_shoulder, &log);
    dxl_wb.itemRead(8, "Present_Position", &data_box, &log);
    dxl_wb.itemRead(21, "Present_Position", &data_elbow, &log);
    
    dxl_wb.goalPosition(8, (int32_t)home_spot[3]);
    dxl_wb.goalPosition(18, (int32_t)home_spot[4]);
    dxl_wb.goalPosition(21, (int32_t)home_spot[5]);
    
    if(data_shoulder <=( home_spot[4]+20) && data_shoulder >=( home_spot[4]-20)){
      shoulder_goal = true;
      }
    if(data_box <=( home_spot[3]+10) && data_box >=( home_spot[3]-10))
    {
      box_goal = true;
    }
    if(data_elbow <=( home_spot[5]+10) && data_elbow >=( home_spot[5]-10))
    {
      elbow_goal = true;
    }
}
   
//RESET
  box_goal = false;
  shoulder_goal = false;
  elbow_goal=false;
  data_shoulder = -1;
  data_box = -1; 
  data_elbow=-1;
  delay(100);


  
  //APPROACH
  while(!shoulder_goal || !box_goal || !elbow_goal){
    dxl_wb.itemRead(18, "Present_Position", &data_shoulder, &log);
    dxl_wb.itemRead(8, "Present_Position", &data_box, &log);
    dxl_wb.itemRead(21, "Present_Position", &data_elbow, &log);
    
    dxl_wb.goalPosition(8, (int32_t)square[0]);
    dxl_wb.goalPosition(18, (int32_t)square[1]);
    dxl_wb.goalPosition(21, (int32_t)square[2]);
    
    if(data_shoulder <=( square[1]+20) && data_shoulder >=( square[1]-20)){
      shoulder_goal = true;
      }
    if(data_box <=( square[0]+10) && data_box >=( square[0]-10))
    {
      box_goal = true;
    }
    if(data_elbow <=( square[2]+10) && data_elbow >=( square[2]-10))
    {
      elbow_goal = true;
    }
    }
   
//RESET
  box_goal = false;
  shoulder_goal = false;
  elbow_goal=false;
  data_shoulder = -1;
  data_box = -1; 
  data_elbow=-1;
  delay(100);

  //PICK
  while(!shoulder_goal || !box_goal || !elbow_goal){
    dxl_wb.itemRead(18, "Present_Position", &data_shoulder, &log);
    dxl_wb.itemRead(8, "Present_Position", &data_box, &log);
    dxl_wb.itemRead(21, "Present_Position", &data_elbow, &log);
    
    dxl_wb.goalPosition(8, (int32_t)square[3]);
    dxl_wb.goalPosition(18, (int32_t)square[4]);
    dxl_wb.goalPosition(21, (int32_t)square[5]);
    
    if(data_shoulder <=( square[4]+20) && data_shoulder >=( square[4]-20))
    {
      shoulder_goal = true;
    }
    if(data_box <=( square[3]+10) && data_box >=( square[3]-10))
    {
      box_goal = true;
    }
    if(data_elbow <=( square[5]+10) && data_elbow >=( square[5]-10))
    {
      elbow_goal = true;
    }
      
  }
  //RESET
  shoulder_goal = false;
  box_goal = false; 
  elbow_goal = false;   
  data_shoulder = -1;
  data_box = -1;
  data_elbow = -1;
  //MOVE HOME
  while(!shoulder_goal || !box_goal || !elbow_goal){
    dxl_wb.itemRead(18, "Present_Position", &data_shoulder, &log);
    dxl_wb.itemRead(8, "Present_Position", &data_box, &log);
    dxl_wb.itemRead(21, "Present_Position", &data_elbow, &log);
    
    dxl_wb.goalPosition(8, (int32_t)home_spot[3]);
    dxl_wb.goalPosition(18, (int32_t)home_spot[4]);
    dxl_wb.goalPosition(21, (int32_t)home_spot[5]);
    
    if(data_shoulder <=( home_spot[4]+20) && data_shoulder >=( home_spot[4]-20)){
      shoulder_goal = true;
      }
    if(data_box <=( home_spot[3]+10) && data_box >=( home_spot[3]-10))
    {
      box_goal = true;
    }
    if(data_elbow <=( home_spot[5]+10) && data_elbow >=( home_spot[5]-10))
    {
      elbow_goal = true;
    }
}

  };

void drop(int* square, int* home_spot, DynamixelWorkbench dxl_wb){
    //GRIPPER TO ADD
    //INIT
  const char *log;
  bool shoulder_goal = false;
  bool box_goal = false; 
  bool elbow_goal = false;   
  int32_t data_shoulder = -1;
  int32_t data_box = -1;
  int32_t data_elbow = -1;
  //MOVE HOME
while(!shoulder_goal || !box_goal || !elbow_goal){
    dxl_wb.itemRead(18, "Present_Position", &data_shoulder, &log);
    dxl_wb.itemRead(8, "Present_Position", &data_box, &log);
    dxl_wb.itemRead(21, "Present_Position", &data_elbow, &log);
    
    dxl_wb.goalPosition(8, (int32_t)home_spot[3]);
    dxl_wb.goalPosition(18, (int32_t)home_spot[4]);
    dxl_wb.goalPosition(21, (int32_t)home_spot[5]);
    
    if(data_shoulder <=( home_spot[4]+20) && data_shoulder >=( home_spot[4]-20)){
      shoulder_goal = true;
      }
    if(data_box <=( home_spot[3]+10) && data_box >=( home_spot[3]-10))
    {
      box_goal = true;
    }
    if(data_elbow <=( home_spot[5]+10) && data_elbow >=( home_spot[5]-10))
    {
      elbow_goal = true;
    }
}
   
//RESET
  box_goal = false;
  shoulder_goal = false;
  elbow_goal=false;
  data_shoulder = -1;
  data_box = -1; 
  data_elbow=-1;
  delay(100);


  
  //APPROACH
  while(!shoulder_goal || !box_goal || !elbow_goal){
    dxl_wb.itemRead(18, "Present_Position", &data_shoulder, &log);
    dxl_wb.itemRead(8, "Present_Position", &data_box, &log);
    dxl_wb.itemRead(21, "Present_Position", &data_elbow, &log);
    
    dxl_wb.goalPosition(8, (int32_t)square[0]);
    dxl_wb.goalPosition(18, (int32_t)square[1]);
    dxl_wb.goalPosition(21, (int32_t)square[2]);
    
    if(data_shoulder <=( square[1]+20) && data_shoulder >=( square[1]-20)){
      shoulder_goal = true;
      }
    if(data_box <=( square[0]+10) && data_box >=( square[0]-10))
    {
      box_goal = true;
    }
    if(data_elbow <=( square[2]+10) && data_elbow >=( square[2]-10))
    {
      elbow_goal = true;
    }
    }
   
//RESET
  box_goal = false;
  shoulder_goal = false;
  elbow_goal=false;
  data_shoulder = -1;
  data_box = -1; 
  data_elbow=-1;
  delay(100);

  //PICK
  while(!shoulder_goal || !box_goal || !elbow_goal){
    dxl_wb.itemRead(18, "Present_Position", &data_shoulder, &log);
    dxl_wb.itemRead(8, "Present_Position", &data_box, &log);
    dxl_wb.itemRead(21, "Present_Position", &data_elbow, &log);
    
    dxl_wb.goalPosition(8, (int32_t)square[3]);
    dxl_wb.goalPosition(18, (int32_t)square[4]);
    dxl_wb.goalPosition(21, (int32_t)square[5]);
    
    if(data_shoulder <=( square[4]+20) && data_shoulder >=( square[4]-20))
    {
      shoulder_goal = true;
    }
    if(data_box <=( square[3]+10) && data_box >=( square[3]-10))
    {
      box_goal = true;
    }
    if(data_elbow <=( square[5]+10) && data_elbow >=( square[5]-10))
    {
      elbow_goal = true;
    }
      
  }
  //RESET
  shoulder_goal = false;
  box_goal = false; 
  elbow_goal = false;   
  data_shoulder = -1;
  data_box = -1;
  data_elbow = -1;
  //MOVE HOME
  while(!shoulder_goal || !box_goal || !elbow_goal){
    dxl_wb.itemRead(18, "Present_Position", &data_shoulder, &log);
    dxl_wb.itemRead(8, "Present_Position", &data_box, &log);
    dxl_wb.itemRead(21, "Present_Position", &data_elbow, &log);
    
    dxl_wb.goalPosition(8, (int32_t)home_spot[3]);
    dxl_wb.goalPosition(18, (int32_t)home_spot[4]);
    dxl_wb.goalPosition(21, (int32_t)home_spot[5]);
    
    if(data_shoulder <=( home_spot[4]+20) && data_shoulder >=( home_spot[4]-20)){
      shoulder_goal = true;
      }
    if(data_box <=( home_spot[3]+10) && data_box >=( home_spot[3]-10))
    {
      box_goal = true;
    }
    if(data_elbow <=( home_spot[5]+10) && data_elbow >=( home_spot[5]-10))
    {
      elbow_goal = true;
    }
}
  };
