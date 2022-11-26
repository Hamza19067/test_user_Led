/**
  ******************************************************************************
  * @file    main.c
  * @author  Hamza maamri
  * @brief   GPIO Driver
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"
/* Private define ------------------------------------------------------------*/

int main()
{
  GPIO_Clock_Enable(GPIOD);
  GPIO_Config(GPIOD,PIN12,OUTPUT,OUTPUT_OPEN_DRAIN,LOW_SPEED);
  GPIO_Write_Pin(GPIOD,PIN12,SET);
  GPIO_Write_Pin(GPIOD,PIN12,RESET);
  GPIO_Config(GPIOD,PIN13,OUTPUT,OUTPUT_OPEN_DRAIN,LOW_SPEED);
  GPIO_Write_Pin(GPIOD,PIN13,SET);
  GPIO_Write_Pin(GPIOD,PIN13,RESET);
    GPIO_Config(GPIOD,PIN14,OUTPUT,OUTPUT_OPEN_DRAIN,LOW_SPEED);
  GPIO_Write_Pin(GPIOD,PIN14,SET);
  GPIO_Write_Pin(GPIOD,PIN14,RESET);
  GPIO_Config(GPIOD,PIN17,INPUT,INPUT_OPEN_DRAIN,LOW_SPEED);
  GPIO_Write_Pin(GPIOD,PIN17,SET);
  GPIO_Write_Pin(GPIOD,PIN17,RESET);
  uint8_t MyKey =PIN17;
  uint8_t MyUserKeyState = 0;
 // uint16_t GPIO_Read_PinTest = GPIO_Read_Pin(GPIOD,PIN10);
  while(1)
  { 
    MyKey = Read_User_Button();
    if (MyKey==PRESSED_BUTTON_USER)
    { 
      MyUserKeyState++;
      if (MyUserKeyState>1)
        MyUserKeyState=1;
    
  }
  if(MyUserKeyState==0)
  {
     GPIO_Write_Pin(GPIOD,PIN14);
  
  }
  
  }
}