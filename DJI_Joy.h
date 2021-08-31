/*
 * DJI_Joy.h
 *
 *  Created on: Aug 26, 2021
 *      Author: stdcat
 */

#ifndef DJI_JOY_H
#define DJI_JOY_H

#include "usart.h"

#define CH0_BIAS 1024
#define CH1_BIAS 1024
#define CH2_BIAS 1024
#define CH3_BIAS 1024
#define CH_RANGE 660.0

typedef struct
{
	int16_t ch0;//channel 0
	int16_t ch1;//channel 1
	int16_t ch2;//channel 2
	int16_t ch3;//channel 3
	int8_t left;//left button
	int8_t right;//right button
}Remote_t;

extern Remote_t Raw_Data;

#endif /* DJI_JOY_H */
