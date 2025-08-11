/* 
 * File:   main.h
 * Author: Vedant Mishra
 *
 * Created on 21 June, 2025, 7:09 PM
 */

#ifndef MAIN_H
#define	MAIN_H

#include <xc.h>
#include"clcd.h"
#include"digital_keypad.h"
#include"timers.h"
#include"Washing_Machine_head.h"

//#define WASHIING_PROGRAM_SCREEN 0X01
//#define WATER_LEVEL_SCREEN      0x02
//#define START_STOP_SCREEN       0x03
//
//#define RESET_WASH_PROGRAM_SCREEN 0x11
//#define RESET_NOTHING            0xFF
//#define RESET_WASH_PROGRAM_SCREEN 0x22

#define WASHIING_PROGRAM_SCREEN    0x01
#define WATER_LEVEL_SCREEN         0x02
#define START_STOP_SCREEN          0x03
#define START_SCREEN               0x04


// Reset flags for each screen
#define RESET_NOTHING              0xFF
#define RESET_WASH_PROGRAM_SCREEN  0x11
#define RESET_WATER_LEVEL_SCREEN   0x22
#define RESET_START_STOP_SCREEN     0x33
#define RESET_START_SCREEN          0x44

#define FAN_DDR                     TRISC2
#define BUZZER_DDR                  TRISC1

#define BUZZER      RC1
#define FAN         RC2

#define ON      1
#define OFF     0

#define PAUSE 0x55



#endif	/* MAIN_H */

