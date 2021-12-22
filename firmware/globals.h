#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include <Arduino.h>
#include "common.h"
#include "changelog.h"
#include "rotary_knob.h"
#include "power_manager.h"
#include "servo.h"
#include "system.h"
#include "manual_mode.h"
#include "sleep_manager.h"
#include "led_manager.h"
#include "menu_manager.h"
#include "setpoint_mode.h"
#include "eeprom_manager.h"
#include "temphum.h"
#include "serialserver.h"
#include "misc_small.h"
#include "aprintf.h"
#include "temp_ctrl.h"
#include "serial_logger.h"
#include "is31fl3731.h"


extern CRotaryKnob      Knob;
extern IS31FL3731       Display;
extern CPowerManager    PowerMgr;
extern CServoDriver     Servo;
extern CSystem          System;
extern CManualModeMgr   ManualModeMgr;
extern CSleepMgr        SleepMgr;
extern CLedMgr          Led;
extern CMenuMgr         MenuMgr;
extern CSetpointModeMgr SetpointModeMgr;
extern CTempHum         TempHum;
extern CSerialServer    SerialServer;
extern CUSBSensor       USB;
extern CEEPROM          EEPROM;
extern CNotchController TempCtrl;
extern CSerialLogger    Logger;

extern CEEPROM::data_t& ee;

int c_to_f(float c);
//float f_to_c(int f);


#endif
