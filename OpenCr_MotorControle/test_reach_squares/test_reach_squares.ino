//THIS TEST WILL MAKE THE ARM REACH THE FOUR SQUARES LOCATED AT EACH CORNER OF THE BOARD
#include "motor_positions.h"


void setup() {
  // put your setup code here, to run once:
Serial.begin(57600);
}

void loop() {
  int **game_board = board();
  int *start = game_board[28]; 
  int *finish = game_board[91]; 
  chess_move(start,finish,0);
  start = game_board[21]; 
  finish = game_board[98];
  chess_move(start,finish,1);   

}
