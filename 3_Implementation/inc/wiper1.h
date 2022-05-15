/**
 * @file wiper1.h
 * @author Rohit Varshney
 * @brief Header file for wiper_control_system
 *
 */
#ifndef WIPER1_H_INCLUDED
#define WIPER1_H_INCLUDED

void turnoff_wiper(void);

void turnon_wiper(void);

void mainkey_off(void);

void mainkey_on(void);

void Delay_ms(void);

void motion_direction_clockwise(void);

void motion_direction_anticlockwise(void);

void Reset_Handler(void);



#endif 