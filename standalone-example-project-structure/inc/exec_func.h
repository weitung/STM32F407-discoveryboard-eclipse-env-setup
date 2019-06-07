#include "stm32f4xx.h"

// gps.h
extern void init_gps(uint32_t baudrate);
extern void test_gps();
extern int  read_gps(float *Latitude, float *Longitude, char *Time);
extern void polling_gps();

// i2c.h
extern void init_i2c();
extern void send_single_i2c(uint8_t data);

// lcd.h
extern void init_lcd();
extern void show_lcd(uint8_t row, uint8_t col, char *data);

// nrf.h
extern void init_NRF24L01_TX(void);
extern void init_NRF24L01_RX(void);
extern void send_data(float para1, float para2, char *para3, uint8_t id);
extern int  recv_data(float *para1, float *para2, char *para3, uint8_t *id, uint16_t waittime);
extern void send_messages(uint8_t *dat);
extern int  recv_messages(uint8_t *dat, uint16_t waittime);

// util.c
extern void init_delay(void);
extern void delay_us(uint32_t t);
extern void delay_ms(uint32_t t);
