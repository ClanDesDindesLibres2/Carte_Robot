#include "opencr_serial_comm.h"
#include "motor_positions.h"

void setup() {
  // put your setup code here, to run once:
Serial.begin(57600);

}

void loop() {
  int **game_board = board(); 
  int *home_spot = game_board[0];
  int *start = game_board[98]; 
  int *finish = game_board[21];
  int kill = 0;
  // put your main code here, to run repeatedly:
reach_square(start,finish,home_spot,kill); 
}
