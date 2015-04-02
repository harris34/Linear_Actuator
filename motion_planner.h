/*
 * motion_planner.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Jake
 */

#ifndef MOTION_PLANNER_H_
#define MOTION_PLANNER_H_

void motion_planner_Init(uint16_t mode);

uint16_t motion_planner_addToQueue(queue *motion_queue, uint16_t position, uint16_t time);

#endif /* MOTION_PLANNER_H_ */
