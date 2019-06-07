#include "stm32f4xx.h"

//#define SECOND
//#define PRINT_UART
//#define LCD_ENABLE
#define NRF_ENABLE
#define UART
//#define UART_ENABLE
#define three_axis
#define ADC16
//#define ADC_STM

#define NUM_POINTS	1000
#define OFFSET_A		0

extern uint16_t ADC1Value[NUM_POINTS];
extern uint16_t ADC2Value[NUM_POINTS];
extern uint16_t ADC3Value[NUM_POINTS];

extern int sampleCounter;


