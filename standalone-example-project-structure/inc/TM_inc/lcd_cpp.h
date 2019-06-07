#include <string.h>
#include "stm32f4xx.h"
#include "lcd_drv.h"
#include "lcd_i2c.h"

#define LCD_NOBACKLIGHT 0x00
#define LCD_BACKLIGHT   0xFF
#define EN				6  // Enable bit
#define RW				5  // Read/Write bit
#define RS				4  // Register select bit
#define D4				0
#define D5				1
#define D6				2
#define D7				3

extern "C" void delay_us(uint32_t t);
extern "C" void delay_ms(uint32_t t);
extern "C" void init_I2C();
extern "C" void send_single_i2c(uint8_t data);
