/*
 * assignment.h
 *
 *  Created on: 27. 9. 2020
 *      Author: Stancoj
 */

#ifndef ASSIGNMENT_H_
#define ASSIGNMENT_H_

/**
 * 		This header file provides macros to the MCU's registers required for this assignment.
 * 		Your task is to provide their actual implementation so you can use them in application in "main.c"
 * 		and make your "LED blink" application code readable and great again!
 */

/* General purpose input output port A macros */
//GPIOA peripheral base address
#define	GPIOA_BASE_ADDR			(uint32_t)(0x48000000U) /* Add GPIO A peripheral base address here. */
//MODER register
#define	GPIOA_MODER_REG			*(uint32_t *)(GPIOA_BASE_ADDR + 0x00U) /* Add moder register address here. */
//OTYPER register
#define	GPIOA_OTYPER_REG		*(uint32_t *)(GPIOA_BASE_ADDR + 0x04U) /* Add otyper register address here. */
//OSPEEDER register
#define GPIOA_OSPEEDER_REG		*(uint32_t *)(GPIOA_BASE_ADDR + 0x08U) /* Add ospeeder register address here. */
//PUPDR register
#define GPIOA_PUPDR_REG			*(uint32_t *)(GPIOA_BASE_ADDR + 0x0CU) /* Add pupdr register address here. */
//IDR register
#define GPIOA_IDR_REG			*(uint32_t *)(GPIOA_BASE_ADDR + 0x10U) /* Add idr register address here. */
//ODR register
#define GPIOA_ODR_REG			*(uint32_t *)(GPIOA_BASE_ADDR + 0x14U) /* Add odr register address here. */
//BSRR register
#define GPIOA_BSRR_REG			*(uint32_t *)(GPIOA_BASE_ADDR + 0x18U) /* Add bsrr register address here. */
//BRR register
#define GPIOA_BRR_REG			*(uint32_t *)(GPIOA_BASE_ADDR + 0x28U) /* Add brr register address here. */

/*Reset clock control register macros */
//RCC base address
#define	RCC_BASE_ADDR			(uint32_t)(0x40021000U) /* Add rcc register address here. */
//AHBEN register
#define	RCC_AHBENR_REG			*(uint32_t *)(RCC_BASE_ADDR + 0x14U)/* Add ahben register address here. */

/* LED and button macros */
#define LED_ON					(GPIOA_BSRR_REG |= (uint32_t)(1 << 4)) /* Add LED_ON implementation here. */
#define LED_OFF					(GPIOA_BRR_REG |= (uint32_t)(1 << 4)) /* Add LED_OFF implementation here. */
#define LED_GET_STATE 			(GPIOA_ODR_REG & (uint32_t)(1 << 4))	// Vyhodnotenie stavu LED.
#define BUTTON_GET_STATE		(GPIOA_IDR_REG & (uint32_t)(1 << 3)) /* Add BUTTON_GET_STATE implementation here. */

enum EDGE_TYPE {NONE, RISE, FALL};	// Jednotlive typy hran, pri stlaceni tlacidla.

#endif /* ASSIGNMENT_H_ */
