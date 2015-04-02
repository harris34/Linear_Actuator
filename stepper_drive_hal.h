/*
 * pulses.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Jake
 */

#ifndef STEPPER_DRIVE_HAL_
#define STEPPER_DRIVE_HAL_

void timerInit();

void pulse_start();

void pulse_stop();

void pulse_setPPS(uint16_t PPS);

void pulse_update(void(*fn)(void));

#endif /* STEPPER_DRIVE_HAL_ */
