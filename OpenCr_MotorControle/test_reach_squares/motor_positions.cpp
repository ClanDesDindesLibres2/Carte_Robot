#include "motor_positions.h"



int positionHome[6] = {3102,2377,1351,3103,1633,1814}; 
int positionDead[6] = {2649,1830,1972,2424,11230,1986}; 
int tolerence = 12; 
int** board()
{
	int* game_board[100];



  int position21[6] = {2762,1850,1627,2762,1765,1401};
  int position22[6] = {1,1,1,1,1,1};
  int position23[6]= {1,1,1,1,1,1};
  int position24[6]= {1,1,1,1,1,1};
  int position25[6]= {1,1,1,1,1,1};
  int position26[6]= {1,1,1,1,1,1};
  int position27[6]= {1,1,1,1,1,1};
  int position28[6]= {3524,1850,1550,3519,1765,1417};
  

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

  int position91[6] = {2926,1030,2276,2926,1080,2180};
  int position92[6] = {1,1,1,1,1,1};
  int position93[6] = {1,1,1,1,1,1};
  int position94[6] = {1,1,1,1,1,1};
  int position95[6] = {1,1,1,1,1,1};
  int position96[6] = {1,1,1,1,1,1};
  int position97[6] = {1,1,1,1,1,1};
  int position98[6] = {3304,1030,2311,3304,1080,2170};














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
  game_board[99] = positionDead;   
  
  return game_board;
};

void chess_move(int* start,int* finish, int kill){
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
       result0 = dxl_wb.jointMode(scanned_id[i], 90, 90, &log);
    }
    if(result0==false)Serial.println("error1"); 
    }
if(kill == 1){
  pick(finish,dxl_wb);
  drop(positionDead,dxl_wb); 
}
  pick(start,dxl_wb); 
  drop(finish,dxl_wb);  
};


void pick(int* square,DynamixelWorkbench dxl_wb){
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
    
    dxl_wb.goalPosition(8, (int32_t)positionHome[3]);
    dxl_wb.goalPosition(18, (int32_t)positionHome[4]);
    dxl_wb.goalPosition(21, (int32_t)positionHome[5]);
    
    if(data_shoulder <=( positionHome[4]+tolerence) && data_shoulder >=( positionHome[4]-tolerence)){
      shoulder_goal = true;
      }
    if(data_box <=( positionHome[3]+tolerence) && data_box >=( positionHome[3]-tolerence))
    {
      box_goal = true;
    }
    if(data_elbow <=( positionHome[5]+tolerence) && data_elbow >=( positionHome[5]-tolerence))
    {
      elbow_goal = true;
    }
    Serial.println("shoudler_goal_1 : "); 
    Serial.println(shoulder_goal); 
    Serial.println("box_goal_1 : "); 
    Serial.println(box_goal);
    Serial.println("elbow_goal_1 : "); 
    Serial.println(elbow_goal);
    Serial.println(data_elbow);   
}
   
//RESET
  box_goal = false;
  shoulder_goal = false;
  elbow_goal=false;
  data_shoulder = -1;
  data_box = -1; 
  data_elbow=-1;
  uint8_t dxl_cnt = 0;
  uint32_t baudrate = 57600;
  uint8_t range = 253;
  uint8_t index = 0;
  uint8_t dxl_id = DXL_ID;
  uint8_t scanned_id[100];
  bool result0 = true;
  delay(100);
Serial.println("shoudler_goal_f : "); 
    Serial.println(shoulder_goal); 
    Serial.println("box_goal_f : "); 
    Serial.println(box_goal);
    Serial.println("elbow_goal_f : "); 
    Serial.println(elbow_goal);
    Serial.println(data_elbow);   

  
  //APPROACH
  while(!shoulder_goal || !box_goal || !elbow_goal){
    Serial.println("dedans1");
    bool tests = dxl_wb.itemRead(18, "Present_Position", &data_shoulder, &log);
    Serial.println("tests : ");
    Serial.println(tests);
    bool testb = dxl_wb.itemRead(8, "Present_Position", &data_box, &log);
    Serial.println("testb : ");
        Serial.println(testb);
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
    bool teste = dxl_wb.itemRead(21, "Present_Position", &data_elbow, &log);
    Serial.println("teste : ");
        Serial.println(teste);

    Serial.println("dedans2");
    dxl_wb.goalPosition(8, (int32_t)square[0]);
    dxl_wb.goalPosition(18, (int32_t)square[1]);
    dxl_wb.goalPosition(21, (int32_t)square[2]);

    Serial.println(square[0]); 
    Serial.println(data_shoulder); 
    
    if(data_shoulder <=( square[1]+tolerence) && data_shoulder >=( square[1]-tolerence)){
      shoulder_goal = true;
      }
    if(data_box <=( square[0]+tolerence) && data_box >=( square[0]-tolerence))
    {
      box_goal = true;
    }
    if(data_elbow <=( square[2]+tolerence) && data_elbow >=( square[2]-tolerence))
    {
      elbow_goal = true;
    }
    Serial.println("shoudler_goal_2 : "); 
    Serial.println(shoulder_goal); 
    Serial.println("box_goal_2 : "); 
    Serial.println(box_goal);
    Serial.println("elbow_goal_2 : "); 
    Serial.println(elbow_goal); 
    }
   
//RESET
  box_goal = false;
  shoulder_goal = false;
  elbow_goal=false;
  data_shoulder = -1;
  data_box = -1; 
  data_elbow=-1;
  delay(100);

GripperOpen(); 

  //PICK
  while(!shoulder_goal || !box_goal || !elbow_goal){
    dxl_wb.itemRead(18, "Present_Position", &data_shoulder, &log);
    dxl_wb.itemRead(8, "Present_Position", &data_box, &log);
    dxl_wb.itemRead(21, "Present_Position", &data_elbow, &log);
    
    dxl_wb.goalPosition(8, (int32_t)square[3]);
    dxl_wb.goalPosition(18, (int32_t)square[4]);
    dxl_wb.goalPosition(21, (int32_t)square[5]);
    
    if(data_shoulder <=( square[4]+tolerence) && data_shoulder >=( square[4]-tolerence))
    {
      shoulder_goal = true;
    }
    if(data_box <=( square[3]+tolerence) && data_box >=( square[3]-tolerence))
    {
      box_goal = true;
    }
    if(data_elbow <=( square[5]+tolerence) && data_elbow >=( square[5]-tolerence))
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

GripperClose();

//RETREAT
  while(!shoulder_goal || !box_goal || !elbow_goal){
    dxl_wb.itemRead(18, "Present_Position", &data_shoulder, &log);
    dxl_wb.itemRead(8, "Present_Position", &data_box, &log);
    dxl_wb.itemRead(21, "Present_Position", &data_elbow, &log);
    
    dxl_wb.goalPosition(8, (int32_t)square[0]);
    dxl_wb.goalPosition(18, (int32_t)square[1]);
    dxl_wb.goalPosition(21, (int32_t)square[2]);
    
    if(data_shoulder <=( square[1]+tolerence) && data_shoulder >=( square[1]-tolerence)){
      shoulder_goal = true;
      }
    if(data_box <=( square[0]+tolerence) && data_box >=( square[0]-tolerence))
    {
      box_goal = true;
    }
    if(data_elbow <=( square[2]+tolerence) && data_elbow >=( square[2]-tolerence))
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
    
    dxl_wb.goalPosition(8, (int32_t)positionHome[3]);
    dxl_wb.goalPosition(18, (int32_t)positionHome[4]);
    dxl_wb.goalPosition(21, (int32_t)positionHome[5]);
    
    if(data_shoulder <=( positionHome[4]+tolerence) && data_shoulder >=( positionHome[4]-tolerence)){
      shoulder_goal = true;
      }
    if(data_box <=( positionHome[3]+tolerence) && data_box >=( positionHome[3]-tolerence))
    {
      box_goal = true;
    }
    if(data_elbow <=( positionHome[5]+tolerence) && data_elbow >=( positionHome[5]-tolerence))
    {
      elbow_goal = true;
    }
}

  };

void drop(int* square, DynamixelWorkbench dxl_wb){
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
    
    dxl_wb.goalPosition(8, (int32_t)positionHome[3]);
    dxl_wb.goalPosition(18, (int32_t)positionHome[4]);
    dxl_wb.goalPosition(21, (int32_t)positionHome[5]);
    
    if(data_shoulder <=( positionHome[4]+tolerence) && data_shoulder >=( positionHome[4]-tolerence)){
      shoulder_goal = true;
      }
    if(data_box <=( positionHome[3]+tolerence) && data_box >=( positionHome[3]-tolerence))
    {
      box_goal = true;
    }
    if(data_elbow <=( positionHome[5]+tolerence) && data_elbow >=( positionHome[5]-tolerence))
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
    
    if(data_shoulder <=( square[1]+tolerence) && data_shoulder >=( square[1]-tolerence)){
      shoulder_goal = true;
      }
    if(data_box <=( square[0]+tolerence) && data_box >=( square[0]-tolerence))
    {
      box_goal = true;
    }
    if(data_elbow <=( square[2]+tolerence) && data_elbow >=( square[2]-tolerence))
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

  //DROP
  while(!shoulder_goal || !box_goal || !elbow_goal){
    dxl_wb.itemRead(18, "Present_Position", &data_shoulder, &log);
    dxl_wb.itemRead(8, "Present_Position", &data_box, &log);
    dxl_wb.itemRead(21, "Present_Position", &data_elbow, &log);
    
    dxl_wb.goalPosition(8, (int32_t)square[3]);
    dxl_wb.goalPosition(18, (int32_t)square[4]);
    dxl_wb.goalPosition(21, (int32_t)square[5]);
    
    if(data_shoulder <=( square[4]+tolerence) && data_shoulder >=( square[4]-tolerence))
    {
      shoulder_goal = true;
    }
    if(data_box <=( square[3]+tolerence) && data_box >=( square[3]-tolerence))
    {
      box_goal = true;
    }
    if(data_elbow <=( square[5]+tolerence) && data_elbow >=( square[5]-tolerence))
    {
      elbow_goal = true;
    }
      
  }

GripperOpen(); 

  //RESET
  shoulder_goal = false;
  box_goal = false; 
  elbow_goal = false;   
  data_shoulder = -1;
  data_box = -1;
  data_elbow = -1;

  //RETREAT
  while(!shoulder_goal || !box_goal || !elbow_goal){
    dxl_wb.itemRead(18, "Present_Position", &data_shoulder, &log);
    dxl_wb.itemRead(8, "Present_Position", &data_box, &log);
    dxl_wb.itemRead(21, "Present_Position", &data_elbow, &log);
    
    dxl_wb.goalPosition(8, (int32_t)square[0]);
    dxl_wb.goalPosition(18, (int32_t)square[1]);
    dxl_wb.goalPosition(21, (int32_t)square[2]);
    
    if(data_shoulder <=( square[1]+tolerence) && data_shoulder >=( square[1]-tolerence)){
      shoulder_goal = true;
      }
    if(data_box <=( square[0]+tolerence) && data_box >=( square[0]-tolerence))
    {
      box_goal = true;
    }
    if(data_elbow <=( square[2]+tolerence) && data_elbow >=( square[2]-tolerence))
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
    
    dxl_wb.goalPosition(8, (int32_t)positionHome[3]);
    dxl_wb.goalPosition(18, (int32_t)positionHome[4]);
    dxl_wb.goalPosition(21, (int32_t)positionHome[5]);
    
    if(data_shoulder <=( positionHome[4]+tolerence) && data_shoulder >=( positionHome[4]-tolerence)){
      shoulder_goal = true;
      }
    if(data_box <=( positionHome[3]+tolerence) && data_box >=( positionHome[3]-tolerence))
    {
      box_goal = true;
    }
    if(data_elbow <=( positionHome[5]+tolerence) && data_elbow >=( positionHome[5]-tolerence))
    {
      elbow_goal = true;
    }
}

GripperClose();
  };

void GripperClose(){
  Servo myservo;
  myservo.attach(9);
    myservo.write(135);
    delay(1000);
    };

void GripperOpen(){
  Servo myservo;
  myservo.attach(9);
      myservo.write(120);
      delay(1000);
      };
