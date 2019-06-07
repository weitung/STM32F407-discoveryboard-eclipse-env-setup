/*
 * @main.c
 */
#include <stdlib.h>
#include <stdio.h>

extern void initialise_monitor_handles(void);

void main(void){
	/* Initialize system */
	SystemInit();

	initialise_monitor_handles();

	while(1){
		printf("YEAH\n");
	}
}
