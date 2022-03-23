#ifndef MOTOR_POSITIONS_H
#define MOTOR_POSITIONS_H

#include <Arduino.h>
#include <DynamixelWorkbench.h>

int** board(); 
void reach_square(int* start,int* finish,int *home_spot, int kill); 
void pick(int* square, int* home_spot, DynamixelWorkbench dxl_wb);
void drop(int* square, int* home_spot, DynamixelWorkbench dxl_wb);
#endif
