#ifndef __GPIO_H
#define __GPIO_H 

#include <stdint.h>


#define GPIOD                   (uint32_t*)0x40020c00


#define PIN12                   12u

#define PIN13                   13u
#define PIN14                   14u
#define PIN15                   15u
#define INPUT                   0x0u
#define OUTPUT                  0x1u
#define ALTERNATE               0x2u
#define ANALOG_INPUT            0x3u

#define OUTPUT_PUSH_PULL        0x0u
#define OUTPUT_OPEN_DRAIN       0x1u

#define LOW_SPEED               0x0u
#define MEDIUM_Speed            0x1u
#define HIGH_SPEED              0x2u
#define VERY_HIGH_SPEED         0x3u

#define SET                     1u
#define RESET                   0u

void GPIO_Clock_Enable(uint32_t *GPIOx);
void GPIO_Config(uint32_t *GPIOx, uint8_t Pin, uint8_t Mode, uint8_t Type, uint8_t Speed);
void GPIO_Write_Port(uint32_t *GPIOx, uint16_t PortValue);
void GPIO_Write_Pin(uint32_t *GPIOx, uint8_t Pin, uint8_t PinValue);
uint16_t GPIO_Read_Port(uint32_t *GPIOx);
uint8_t GPIO_Read_Pin(uint32_t *GPIOx, uint8_t Pin);

#endif