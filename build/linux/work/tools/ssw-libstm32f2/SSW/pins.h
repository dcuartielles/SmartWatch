#ifndef _PINS_H_
#define _PINS_H_
#include "stm32f2xx_gpio.h"

#define HIGH 1
#define LOW 0

typedef struct {
  GPIO_InitTypeDef def;
  uint8_t source;
  GPIO_TypeDef *port;
  uint32_t clock;
  int init;
  uint8_t af;
} PinDef_t;

extern const PinDef_t PIN_PA0 ;
extern const PinDef_t PIN_PA1 ;
extern const PinDef_t PIN_PA2 ;
extern const PinDef_t PIN_PA4 ;
extern const PinDef_t PIN_PA5 ;
extern const PinDef_t PIN_PA7 ;
extern const PinDef_t PIN_PA8 ;
extern const PinDef_t PIN_PA9 ;
extern const PinDef_t PIN_PA11;
extern const PinDef_t PIN_PA12;
extern const PinDef_t PIN_PA15;
extern const PinDef_t PIN_PB0 ;
extern const PinDef_t PIN_PB1 ;
extern const PinDef_t PIN_PB2 ;
extern const PinDef_t PIN_PB3 ;
extern const PinDef_t PIN_PB4 ;
extern const PinDef_t PIN_PB5 ;
extern const PinDef_t PIN_PB6 ;
extern const PinDef_t PIN_PB7 ;
extern const PinDef_t PIN_PB8 ;
extern const PinDef_t PIN_PB9 ;
extern const PinDef_t PIN_PB10;
extern const PinDef_t PIN_PB11;
extern const PinDef_t PIN_PB12;
extern const PinDef_t PIN_PB13;
extern const PinDef_t PIN_PB14;
extern const PinDef_t PIN_PB15; 
extern const PinDef_t PIN_PC0 ;
extern const PinDef_t PIN_PC1 ;
extern const PinDef_t PIN_PC3 ;
extern const PinDef_t PIN_PC4 ;
extern const PinDef_t PIN_PC6 ;
extern const PinDef_t PIN_PC7 ;
extern const PinDef_t PIN_PC9 ;
extern const PinDef_t PIN_PC10;
extern const PinDef_t PIN_PC11;
extern const PinDef_t PIN_PC12; 
extern const PinDef_t PIN_PC13;

void pinsInit();
void pinInit(const PinDef_t *pin);
void digitalWrite(const PinDef_t *pin, uint8_t value);
uint8_t digitalRead(const PinDef_t *pin);

void delay(uint32_t);
#endif