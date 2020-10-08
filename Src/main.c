/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "assignment.h"
#include "stdio.h"

// Functions:
enum EDGE_TYPE edgeDetect(uint8_t, uint8_t);

int main(void) {
  /*
   *  DO NOT WRITE TO THE WHOLE REGISTER!!!
   *  Write to the bits, that are meant for change.
   */

	LL_Init1msTick(8000000);
	LL_SYSTICK_SetClkSource(LL_SYSTICK_CLKSOURCE_HCLK);
	LL_SetSystemCoreClock(8000000);

  /*
   * TASK - configure MCU peripherals so that button state can be read and LED will blink.
   * Button must be connected to the GPIO port A and its pin 3.
   * LED must be connected to the GPIO port A and its pin 4.
   *
   * In header file "assignment.h" define macros for MCU registers access and LED blink application.
   * Code in this file must use these macros for the peripherals setup.
   * Code of the LED blink application is already given so just the macros used in the application must be defined.
   */


	  /* Enable clock for GPIO port A*/

	//type your code for GPIOA clock enable here:
	RCC_AHBENR_REG |= (uint32_t)(1 << 17);

	/* GPIOA pin 3 and 4 setup */

	//type your code for GPIOA pins setup here:
	// GPIOA pin 3:
	GPIOA_MODER_REG &= ~(uint32_t)(0x3 << 6);		// MODER reset - input mode
	GPIOA_OTYPER_REG &= ~(uint32_t)(1 << 3);		// OTYPER reset - output push-pull
	GPIOA_OSPEEDER_REG &= ~(uint32_t)(0x3 << 6);	// OSPEEDER reset - low speed
	GPIOA_PUPDR_REG &= ~(uint32_t)(0x3 << 6);		// PUPDR reset - no pull
	GPIOA_PUPDR_REG |= (uint32_t)(1 << 6);			// PUPDR - pull-up

	// GPIOA pin 4:
	GPIOA_MODER_REG &= ~(uint32_t)(0x3 << 8);		// MODER reset - input mode
	GPIOA_MODER_REG |= (uint32_t)(1 << 8);			// MODER - general purpose output mode
	GPIOA_OTYPER_REG &= ~(uint32_t)(1 << 4);		// OTYPER reset - output push-pull
	GPIOA_OSPEEDER_REG &= ~(uint32_t)(0x3 << 8);	// OSPEEDER reset - low speed
	GPIOA_PUPDR_REG &= ~(uint32_t)(0x3 << 8);		// PUPDR reset - no pull

	// Inicializacia premennych
	enum EDGE_TYPE edge;
	uint32_t prevState, state = BUTTON_GET_STATE, LED;
	LED_OFF;

	while (1) {
		// Nacitanie vstupov:
		edge = NONE;				// Reset typu hrany.
		prevState = state;			// Zapis predosleho stavu.
		state = BUTTON_GET_STATE;	// Zapis aktualneho stavu.
		LED = LED_GET_STATE;		// Zapis stavu LED.

		// Program:
		if (state != prevState) {
			edge = edgeDetect(state, 5);	// Pri zmene stavu spusti funkciu edgeDetect, ktora vyhodnoti typ hrany.
		}

		// Zapis vystupov:
		if (edge == FALL) {				// Funkcionalita LED na dobeznu hranu.
			LED ? LED_OFF : LED_ON;
		}
	}
}

/* USER CODE BEGIN 4 */

// Funkcia vyhodnoti typ hrany, pri stlaceni tlacidla.
enum EDGE_TYPE edgeDetect(uint8_t pin_state, uint8_t samples) {
	uint8_t prevState;	// Predosly stav.

	for (int i = 0; i < samples; i++) {
		prevState = (uint8_t)BUTTON_GET_STATE;

		if (prevState != pin_state) {
			return NONE;	// Pokial sa zmeni stav na tlacidle, pocas 5 cyklov, tak funkcia nezaregistruje hranu.
		}
	}

	return (pin_state ? FALL : RISE);	// Funkcia vrati typ hrany podla povodneho stavu pin-u.
}

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void) {
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(char *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
