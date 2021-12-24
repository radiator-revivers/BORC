#include "globals.h"

CRotaryKnob         Knob;
IS31FL3731          Display;
CPowerManager       PowerMgr;
CServoDriver        Servo;
CSystem             System;
CManualModeMgr      ManualModeMgr;
CSleepMgr           SleepMgr;
CLedMgr             Led;
CMenuMgr            MenuMgr;
CSetpointModeMgr    SetpointModeMgr;
CSHT31              SHT31(TEMP_SENSE_ADDRESS);
CSerialServer       SerialServer;
CUSBSensor          USB;
CEEPROM             EEPROM;
CNotchController    TempCtrl;
CSerialLogger       Logger;

// pointer to EEPROM dirty data buffer
CEEPROM::data_t& ee = EEPROM.data;


int c_to_f(float c) {return (c * 1.8) + 32;}
float f_to_c(int f) {return ((f - 32) * 0.55556);}