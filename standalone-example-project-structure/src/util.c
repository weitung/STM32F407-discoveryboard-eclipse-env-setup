#include "string.h"
#include "stm32f4xx.h"
#include "stm32f4xx_usart.h"
#include "tm_stm32f4_delay.h"
#include "tm_stm32f4_nrf24l01.h"
#include "tm_stm32f4_spi.h"
#include "tm_stm32f4_exti.h"
#include "tm_stm32f4_i2c.h"
#include "tm_stm32f4_usart.h"
#include "main.h"

void init_delay(void);
void delay_us(uint32_t t);
void delay_ms(uint32_t t);

void init_delay(void)
{
	TM_DELAY_Init();
}

void delay_us(uint32_t t)
{
	Delay(t);
}

void delay_ms(uint32_t t)
{
	Delayms(t);
}
 
