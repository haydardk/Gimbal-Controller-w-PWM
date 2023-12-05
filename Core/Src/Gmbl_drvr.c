/*
 * Gmbl_drvr.c
 *
 *  Created on: Nov 30, 2023
 *      Author: CASPER
 */
#include "stm32f4xx_hal.h"
#include "gmbl_drvr.h"


static void gimbal_pin_configure();

void gimbal_init(void)
{
	gimbal_pin_configure();

	TIM2->PSC = 8000-1; // Timer clock = 8 Mhz / Arbitrary Choosen
	TIM2->ARR = 20000-1;  // Frequency 50 Hz ( You can choose 500 Hz if you desire)
	TIM2->CCR1 = 2000;  // Duty Cycle  %5 - %10 ( 1000ms-2000ms)
	TIM2->CCR2 = 2000;  // Duty Cycle  %5 - %10 ( 1000ms-2000ms)
	TIM2->CCR3 = 2000;  // Duty Cycle  %5 - %10 ( 1000ms-2000ms)
	TIM2->CCR4 = 2000;  // Duty Cycle  %5 - %10 ( 1000ms-2000ms)

	// CH-1 PWM MODE  // YAW - ROLL - PITCH AXIS
	TIM2->CCMR1 |= TIM_CCMR1_OC1M_2;
	TIM2->CCMR1 |= TIM_CCMR1_OC1M_1;
	TIM2->CCMR1 |= TIM_CCMR1_OC1PE;

	// CH-2 PWM MODE

	TIM2->CCMR1 |= TIM_CCMR1_OC2M_2;
	TIM2->CCMR1 |= TIM_CCMR1_OC2M_1;
	TIM2->CCMR1 |= TIM_CCMR1_OC2PE;

	// CH-3 PWM MODE
	TIM2->CCMR2 |= TIM_CCMR2_OC3M_2;
	TIM2->CCMR2 |= TIM_CCMR2_OC3M_1;
	TIM2->CCMR2 |= TIM_CCMR2_OC3PE;

	// Enable OC1REF and OC2REF OUTPUTS
	TIM2->CCER |= TIM_CCER_CC1E;
	TIM2->CCER |= TIM_CCER_CC2E;
	TIM2->CCER |= TIM_CCER_CC3E;
	TIM2->CCER |= TIM_CCER_CC4E;
}

void gimbal_enable(void)
{
	// Enable Timer
	TIM2->CR1 |= TIM_CR1_CEN;
	TIM2->EGR |= TIM_EGR_UG;
}

void gimbal_disable(void)
{
	// Disable Timer
	TIM2->CR1 &= ~(TIM_CR1_CEN);
}

void gimbal_set_duty_cycle(uint32_t duty, Channels_e channel)
{
	switch (channel) {
	case CHANNEL1:
		TIM2->CCR1 = duty;
		break;

	case CHANNEL2:
		TIM2->CCR2 = duty;
		break;

	case CHANNEL3:
		TIM2->CCR3 = duty;
		break;

	case CHANNEL4:
		TIM2->CCR4 = duty;
		break;
	}
}

void gimbal1 (double degree_){
	gimbal_set_duty_cycle((degree_/180*1000 +1000 ), CHANNEL1); //PE9
}
void gimbal2 (double degree_){
	gimbal_set_duty_cycle((degree_/180*1000 +1000 ), CHANNEL2); //PE11
}
void gimbal3 (double degree_){
	gimbal_set_duty_cycle((degree_/180*1000 +1000 ), CHANNEL3); //PE13
}

static void gimbal_pin_configure()
{
	//DOLDURULACAK

		GPIO_InitTypeDef GPIO_InitStruct;

		__HAL_RCC_TIM2_CLK_ENABLE();
		__HAL_RCC_GPIOA_CLK_ENABLE();

		HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

		GPIO_InitStruct.Pin = GPIO_PIN_0;
		GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
		GPIO_InitStruct.Alternate = GPIO_AF1_TIM2;

		GPIO_InitStruct.Pin = GPIO_PIN_1;
		GPIO_InitStruct.Alternate = GPIO_AF1_TIM2;
		HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

		// PB0 - TIMER3 - CH3 - A3
		GPIO_InitStruct.Pin = GPIO_PIN_2;
		GPIO_InitStruct.Alternate = GPIO_AF1_TIM2;
		HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);


}

