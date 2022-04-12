#ifndef MOTOR_POSITIONS_H
#define MOTOR_POSITIONS_H

#include <Arduino.h>
#include <DynamixelWorkbench.h>
#include <Servo.h>

int board(int square, int joint_position);
void chess_move(int* start,int* finish, int kill, DynamixelWorkbench *dxl_wb); 
void pick(int* square, DynamixelWorkbench *dxl_wb);
void drop(int* square, DynamixelWorkbench *dxl_wb);
void move_motors(int32_t box_position,int32_t shoulder_position, int32_t elbow_position,DynamixelWorkbench *dxl_wb);
void GripperClose();
void GripperOpen();

#endif
