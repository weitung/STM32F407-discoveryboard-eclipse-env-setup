#include <stdio.h>
#include "stm32f4xx.h"

struct __FILE {
    int dummy;
};
 
FILE __stdout;


int fputc(int c, FILE *stream)
{
   return(ITM_SendChar(c));
}
