#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <inttypes.h>
#include "stm32f4xx.h"
#include "stm32f4xx_conf.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_tim.h"
#include "stm32f4xx_syscfg.h"
#include "stm32f4xx_usart.h"
#include "stm32f4xx_spi.h"
#include "stm32f4xx_i2c.h"
#include "tm_stm32f4_delay.h"
#include "tm_stm32f4_gps.h"
#include "tm_stm32f4_i2c.h"
#include "tm_stm32f4_spi.h"
#include "tm_stm32f4_nrf24l01.h"
#include "defines.h"
#include "misc.h"

#include "exec_func.h"
#include "exec_vars.h"