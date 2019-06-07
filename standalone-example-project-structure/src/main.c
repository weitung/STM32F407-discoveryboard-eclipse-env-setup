/*
 * @main.c
 */
#include "declaration.h"
#include "main.h"

extern void initialise_monitor_handles(void);

void main(void){
	/* Initialize system */
	SystemInit();

	init_delay();
	initialise_monitor_handles();

	while(1){
		printf("YEAH\n");
		delay_ms(1000);
	}
}
