/*
 * stepper_drive.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Jake
 */

#ifndef STEPPER_DRIVE_H_
#define STEPPER_DRIVE_H_

void stepperInit (uint16_t max_SPS, uint16_t min_SPS, uint16_t SPS2);

void stepper_start();

void stepper_stop();

void stepper_setSPS(uint16_t SPS);

void stepper_moveTo(uint16_t position);

void stepper_update();

uint16_t stepper_numSteps(uint16_t SPS_start, SPS_finish);

#endif /* STEPPER_DRIVE_H_ */
