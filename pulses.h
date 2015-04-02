/*
 * pulses.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Jake
 */

#ifndef PULSES_H_
#define PULSES_H_

void timerInit();

void pulse_start();

void pulse_stop();

void pulse_setPPS(uint16_t PPS);

void pulse_update(void(*fn)(void));

#endif /* PULSES_H_ */
