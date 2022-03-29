#ifndef MOTOR_POSITIONS_H
#define MOTOR_POSITIONS_H

#include <Arduino.h>
#include <DynamixelWorkbench.h>
#include <Servo.h>

int** board(); 
void chess_move(int* start,int* finish, int kill); 
void pick(int* square, DynamixelWorkbench dxl_wb);
void drop(int* square, DynamixelWorkbench dxl_wb);
void GripperClose();
void GripperOpen();

#endif
