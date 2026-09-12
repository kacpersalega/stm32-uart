#include <stdint.h>
#include "cmsis/stm32l476xx.h"
#include "drivers/gpio.h"

int main(void)
{
	// Clock Configuration for GPIOA
	RCC->AHB2ENR |= RCC_AHB2ENR_GPIOAEN;

	// GPIOA5
	GPIO_Init(GPIOA, PIN_5, OUTPUT, PUSH_PULL, LOW, PULL_NONE);
	GPIO_Write(GPIOA, PIN_5, SET);

	while (1)
	{

	}
}
