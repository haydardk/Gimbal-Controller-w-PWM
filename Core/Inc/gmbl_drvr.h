/*
 * gmbl_drvr.h
 *
 *  Created on: Nov 30, 2023
 *      Author: CASPER
 */

#ifndef INC_GMBL_DRVR_H_
#define INC_GMBL_DRVR_H_
#include "stdint.h"
typedef enum CHANNELS{
	CHANNEL1 =0, // gimbal motor numaraları
	CHANNEL2 =1,
	CHANNEL3 =2,
	CHANNEL4 =3,
}Channels_e;

void gimbal_init(void);

void gimbal_enable(void);
void gimbal_disable(void);

void gimbal_set_duty_cycle(uint32_t duty, Channels_e channel);

void gimbal1 (double degree_);
void gimbal2 (double degree_);
void gimbal3 (double degree_);
void gimbal4 (double degree_);


#endif /* INC_GMBL_DRVR_H_ */
