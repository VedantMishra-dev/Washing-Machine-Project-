/* 
 * File:   Washing_Machine_head.h
 * Author: Vedant Mishra
 *
 * Created on 21 June, 2025, 4:47 PM
 */

#ifndef WASHING_MACHINE_HEAD_H
#define	WASHING_MACHINE_HEAD_H

void  power_on_screen(void);
void clear_screen(void);
void washing_program_display(unsigned char key);
void water_level_screen(unsigned char key);
void start_stop_screen(void);
void run_program(unsigned char key);
void set_time(void);
void door_status_check(void);

#endif	/* WASHING_MACHINE_HEAD_H */

