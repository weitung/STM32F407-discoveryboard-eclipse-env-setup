/**
 *  Defines for your entire project at one place
 * 
 *	@author 	Tilen Majerle
 *	@email		tilen@majerle.eu
 *	@website	http://stm32f4-discovery.com
 *	@version 	v1.0
 *	@ide		Keil uVision 5
 *	@license	GNU GPL v3
 *	
 * |----------------------------------------------------------------------
 * | Copyright (C) Tilen Majerle, 2014
 * | 
 * | This program is free software: you can redistribute it and/or modify
 * | it under the terms of the GNU General Public License as published by
 * | the Free Software Foundation, either version 3 of the License, or
 * | any later version.
 * |  
 * | This program is distributed in the hope that it will be useful,
 * | but WITHOUT ANY WARRANTY; without even the implied warranty of
 * | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * | GNU General Public License for more details.
 * | 
 * | You should have received a copy of the GNU General Public License
 * | along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * |----------------------------------------------------------------------
 */
#ifndef TM_DEFINES_H
#define TM_DEFINES_H

/* Put your global defines for all libraries here used in your project */
//By default library support only 7bit long address
#define TM_I2C1_ACKNOWLEDGED_ADDRESS   I2C_AcknowledgedAddress_7bit
//Library supports I2C mode
#define TM_I2C1_MODE                   I2C_Mode_I2C
//Own address, if slave mode
#define TM_I2C1_OWN_ADDRESS            0x00
//By default, disable ack
#define TM_I2C1_ACK                    I2C_Ack_Disable
//Duty cycle 2, 50%
#define TM_I2C1_DUTY_CYCLE             I2C_DutyCycle_2


#endif
