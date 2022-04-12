#include "motor_positions.h"



int calibration0 = 1780; 
int calibration1 = 1810; 
int calibration2 = 1700;
int calibration3 = 1780; 
int calibration4 = 1760; 
int calibration5 = 1580; 


int positionHome[6] = {2150,2367,1351,1600,1633,2014}; 
int positionDead[6] = {2649,1830,1972,2424,11230,1986}; 

int tolerence = 20;
int tolerence_box = 30;  
int board(int square, int joint_position)
{

	//INITIALISATION DE LA MATRICE
	
	
	int* game_board[100];



  int position21[6] = {calibration0,calibration1,calibration2,calibration3,calibration4,calibration5};
  int position22[6] = {calibration0+100,calibration1+40,calibration2-40,calibration3+100,calibration4+50,calibration5-50};
  int position23[6]= {calibration0+210,calibration1+80,calibration2-80,calibration3+210,calibration4+90,calibration5-60};
  int position24[6]= {calibration0+340,calibration1+100,calibration2-90,calibration3+340,calibration4+110,calibration5-90};
  int position25[6]= {calibration0+460,calibration1+100,calibration2-90,calibration3+460,calibration4+110,calibration5-90};
  int position26[6]= {calibration0+580,calibration1+80,calibration2-80,calibration3+580,calibration4+100,calibration5-80};
  int position27[6]= {calibration0+685,calibration1+40,calibration2-40,calibration3+685,calibration4+50,calibration5-50};
  int position28[6]= {calibration0+780,calibration1,calibration2,calibration3+780,calibration4,calibration5};
  
  

  int position31[6]= {1840,1730,1810,1840,1690,1660};
  int position32[6]= {1930,1780,1800,1930,1740,1600};
  int position33[6]= {2020,1820,1775,2020,1770,1575};
  int position34[6]= {2130,1830,1760,2130,1790,1560};
  int position35[6]= {2240,1830,1760,2240,1790,1560};
  int position36[6]= {2345,1820,1775,2345,1775,1570};
  int position37[6]= {2450,1780,1800,2450,1745,1595};
  int position38[6]= {2540,1770,1810,2540,1710,1620};

  int position41[6]= {1860,1650,1900,1860,1625,1750};
  int position42[6] = {1960,1685,1865,1960,1660,1715};
  int position43[6] = {2040,1705,1830,2040,1690,1680};
  int position44[6] = {2130,1720,1815,2130,1705,1665};
  int position45[6] = {2220,1720,1815,2220,1705,1665};
  int position46[6] = {2310,1705,1830,2310,1690,1680};
  int position47[6] = {2390,1705,1845,2390,1665,1710};
  int position48[6] = {2475,1670,1880,2475,1635,1750};

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
  int position98[6] = {3223,1141,2384,3223,1090,2260};














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

  //GET LA POSITION
  
  
  return game_board[square][joint_position];
};

void chess_move(int* start,int* finish, int kill, DynamixelWorkbench *dxl_wb){
  //INITIAlISATION
dxl_wb->torqueOn(8);
dxl_wb->torqueOn(18);
dxl_wb->torqueOn(21);


if(kill == 1){
  pick(finish,dxl_wb);
  drop(positionDead,dxl_wb); 
}
  pick(start,dxl_wb); 
  drop(finish,dxl_wb);  
  move_motors(positionHome[0],positionHome[1],positionHome[2],dxl_wb);
  dxl_wb->torqueOff(8);
  dxl_wb->torqueOff(18);
  dxl_wb->torqueOff(21);
};


void pick(int* square,DynamixelWorkbench *dxl_wb){
  //MOVE HOME
  move_motors(positionHome[3],positionHome[4],positionHome[5],dxl_wb); 
  delay(3000);
  //APPROACH
  move_motors(square[0],square[1],square[2],dxl_wb);  
  GripperOpen(); 
  delay(7000);
  //PICK
  move_motors(square[3],square[4],square[5],dxl_wb); 
   delay(3000);
  GripperClose();
 
  //RETREAT
  move_motors(square[0],square[1],square[2],dxl_wb); 
  delay(3000);
  //MOVE HOME
  move_motors(positionHome[3],positionHome[4],positionHome[5],dxl_wb); 
  delay(7000); 
  };

void drop(int* square, DynamixelWorkbench *dxl_wb){
  //MOVE HOME
  move_motors(positionHome[3],positionHome[4],positionHome[5],dxl_wb);
  delay(3000);
  //APPROACH
   move_motors(square[0],square[1],square[2],dxl_wb); 
   delay(7000);
  //DROP
  move_motors(square[3],square[4],square[5],dxl_wb);
  delay(3000); 
  GripperOpen(); 
   
  //RETREAT
  move_motors(square[0],square[1],square[2],dxl_wb);
  delay(3000); 
  //MOVE HOME
  move_motors(positionHome[3],positionHome[4],positionHome[5],dxl_wb);
  GripperClose();
  delay(7000); 
  };

void GripperClose(){
  Servo myservo;
  myservo.attach(9);
    myservo.write(137);
    delay(1000);
    };

void GripperOpen(){
  Servo myservo;
  myservo.attach(9);
      myservo.write(128);
      delay(1000);
      };

void move_motors(int32_t box_position,int32_t shoulder_position, int32_t elbow_position,DynamixelWorkbench *dxl_wb){
  //INIT
  //MOVE MOTORS
    dxl_wb->goalPosition(8, (int32_t)box_position);
    dxl_wb->goalPosition(18, (int32_t)shoulder_position);
    dxl_wb->goalPosition(21, (int32_t)elbow_position);
}
  
