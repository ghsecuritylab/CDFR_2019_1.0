/**
  ******************************************************************************
  * File Name          : gpio.h
  * Description        : This file contains all the functions prototypes for 
  *                      the gpio  
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __gpio_H
#define __gpio_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */
#define LED_Red		GPIO_ODR_ODR_14
#define LED_Blue 	GPIO_ODR_ODR_7
#define LED_Green	GPIO_ODR_ODR_0
#define BP_NUCLEO	GPIO_ODR_ODR_13
/* USER CODE END Private defines */

void MX_GPIO_Init(void);

/* USER CODE BEGIN Prototypes */
void F_GPIO_SetLedRed(int state);
void F_GPIO_SetLedBlue(int state);
void F_GPIO_SetLedGreen(int state);
void F_GPIO_ToogleLedRed(void);
int  F_GPIO_GetBtn(void);
int  F_GPIO_GetTirette(void);

void F_GPIO_SetMotorDroitDir(int dir);
void F_GPIO_SetMotorGaucheDir(int dir);
void F_GPIO_SetEnableMotors(int state);

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ pinoutConfig_H */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
