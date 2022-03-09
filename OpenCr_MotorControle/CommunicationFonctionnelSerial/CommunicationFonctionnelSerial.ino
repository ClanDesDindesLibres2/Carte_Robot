


#include <Arduino.h>
#include <ArduinoJson.h>
#include <String.h>
int led_pin = 13;
int led_pin_user[4] = { BDPIN_LED_USER_1, BDPIN_LED_USER_2, BDPIN_LED_USER_3, BDPIN_LED_USER_4 };

#if defined(__OPENCM904__)
  #define DEVICE_NAME "3" //Dynamixel on Serial3(USART3)  <-OpenCM 485EXP
#elif defined(__OPENCR__)
  #define DEVICE_NAME ""
#endif   

#define STRING_BUF_NUM 64
String cmd[STRING_BUF_NUM];

#include "SerialComm.h"
#include "ControlMessage.h"
#include "MessageIO.h"
#include "TinyStepper_28BYJ_48.h"

#define BAUD 57600 

MessageIO IO;
SerialComm SC(&Serial);



void setup() 
{
  pinMode(led_pin, OUTPUT);
  pinMode(led_pin_user[0], OUTPUT);
  pinMode(led_pin_user[1], OUTPUT);
  pinMode(led_pin_user[2], OUTPUT);
  pinMode(led_pin_user[3], OUTPUT);
  Serial.begin(BAUD);
}
void loop() 
{
  int test =0; 
StaticJsonDocument<MaxJsonSize>  msg;
StaticJsonDocument<MaxJsonSize> msg_retour; 
 if(!SC.isMessageAvailable()){
 Serial.print("waiting for a message \n");  
 }
 else{
 msg = SC.ReadJSon();
 msg_retour = 10; 
int payload =0;
 payload = msg.as<int>();
 if(payload != 0){ 
  Serial.print(payload);
  digitalWrite(led_pin, HIGH);  // set to as HIGH LED is turn-off
  delay(payload);                   // Wait for 0.1 second
  digitalWrite(led_pin, LOW);   // set to as LOW LED is turn-on
  delay(payload);                   // Wait for 0.1 second


  for(int i=0; i<4; i++ )
  {
    digitalWrite(led_pin_user[i], HIGH);
    delay(payload);
    Serial.print("boucle 1");
  }
  Serial.print("entre les deux \n");
  for(int j=0; j<4; j++ )
  {
    digitalWrite(led_pin_user[j], LOW);
    delay(payload);
    Serial.print("boucle2");
  }
  
  }
  //SC.sendJSon(msg_retour);
 }   
}
