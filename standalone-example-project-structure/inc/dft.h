#include "stm32f4xx.h"
#include "class.h"

#define pi (float)3.14159265

#define DELTA_F				 (float)(SAMPLE_FREQ*1.0/SAMPLE_POINTS)
#define SAMPLE_FREQ			 5000

#define ADC_CNT					(int)((84000000/ADC_PRESCALE)/SAMPLE_FREQ) //84M/prescale
#define ADC_PRESCALE	        1
#define PULSE_CNT				3024

#define OFFSET					0
#define CAPTURE_POINTS			1000
#define SAMPLE_POINTS			1000

#define KM_SLAVE				(float) 4495857.0 // 2 axis not car 15783095.0 2axis car 4495857.0
	
extern uint16_t ADC1Value[CAPTURE_POINTS];
extern uint16_t ADC2Value[CAPTURE_POINTS];
extern uint16_t ADC3Value[CAPTURE_POINTS];
extern float		w[CAPTURE_POINTS];
extern float		d[CAPTURE_POINTS];
extern float    amp, freq, phase;

extern complex Xk[CAPTURE_POINTS];

extern "C" void estimate_signal_1pt(int k, int N, int b);
