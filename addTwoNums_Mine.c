/*
SO HERES THE DEAL - 
Im trying to get this situation up & running on my Nucleo STM446 board.  
Tried several different versions of Serial Moniters, nothing coming back over the UART lines.

Ive testec the same code (minus all the boilerplate bullshit) on Mbed's compiler and it works fine.  
adds up them shitz. 

****************HERES WHAT I THINK IS WRONG**********************

the 'cookbook' code examples are written for a different board,  the $350 Keil board.  
Its still a STM32F4xx so most of the drivers work, but i think


THE CLOCK SPEED IS JACKED.   which will fuck up UART transmission. 

Please adjust PLL setup and Systemclock to the f446 board accordingly!   
Or get a Nucleo or Disco board tht matches the processor inside the 
MCBSTM32F400   eval board
 
 
 
 
 /***************************************************
 * Recipe:   addTwoNums_c3v0
 * File:     addTwoNums.c 
 * Purpose:  Adds numbers using terminal I/O                        
 ****************************************************
 *										  			                                
 * Modification History										                    
 * 26.02.14 Created
 * 15.12.15 Updated uVision5.17 & DFP2.6.0   
 * 																							              
 * Dr. Mark Fisher, CMP, UEA, Norwich, UK.                                                         
 ****************************************************/

#include "stm32F4xx_hal.h"
#include <stdio.h>
#include "Serial.h" 
#include "cmsis_os.h"

#ifdef __RTX
extern uint32_t os_time;

uint32_t HAL_GetTick(void) {
  return os_time; 
}
#endif

/*--------------------------------------------------
  System Clock Configuration
 *--------------------------------------------------*/
void SystemClock_Config(void) {
  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;

  /* Enable Power Control clock */
  __HAL_RCC_PWR_CLK_ENABLE();

  /* The voltage scaling allows optimizing the power consumption when the
     device is clocked below the maximum system frequency (see datasheet). */
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /* Enable HSE Oscillator and activate PLL with HSE as source */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 25;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  HAL_RCC_OscConfig(&RCC_OscInitStruct);

  /* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
     clocks dividers */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1 |
                                RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
  HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5);
}

/*
 * main
 *******/
int main (void) {
	
	int input;
//	//uint8_t num1, num2, res;	
	int num1, num2, res;

  HAL_Init ();   /* Init Hardware Abstraction Layer */
  SystemClock_Config ();           /* Config Clocks */

  SER_Init();
  
  for (;;) {                        /* Loop forever */  
		printf("Enter First Number: ");
	  scanf("%d", &input);
		num1 = (int) input;
		printf("Enter Second Number: ");
	  scanf("%d", &input);
		num2 = (int) input;
  	res = num1 + num2;
		printf("Result = %d \n", res);
  }
}
