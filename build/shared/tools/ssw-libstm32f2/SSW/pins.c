#include "pins.h"

// WKUP_Pin
const PinDef_t PIN_PA0  = {{GPIO_Pin_0,GPIO_Mode_IN,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_NOPULL},GPIO_PinSource0,GPIOA,RCC_AHB1Periph_GPIOA,-1,0};
// BATT_V_ON_Pin
const PinDef_t PIN_PA1  = {{GPIO_Pin_1,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource1,GPIOA,RCC_AHB1Periph_GPIOA,0,0};
// BAT_V_Pin
const PinDef_t PIN_PA2  = {{GPIO_Pin_2,GPIO_Mode_AIN,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_NOPULL},GPIO_PinSource2,GPIOA,RCC_AHB1Periph_GPIOA,-1,0};
// SPI1_nSS_Pin
const PinDef_t PIN_PA4  = {{GPIO_Pin_4,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource4,GPIOA,RCC_AHB1Periph_GPIOA,1,0};
// SPI1_SCK_Pin
const PinDef_t PIN_PA5  = {{GPIO_Pin_5,GPIO_Mode_AF,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource5,GPIOA,RCC_AHB1Periph_GPIOA,0,GPIO_AF_SPI1};
//const PinDef_t PIN_PA5  = {{GPIO_Pin_5,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource5,GPIOA,RCC_AHB1Periph_GPIOA,0,0};
// SPI1_MOSI_Pin
const PinDef_t PIN_PA7  = {{GPIO_Pin_7,GPIO_Mode_AF,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource7,GPIOA,RCC_AHB1Periph_GPIOA,0,GPIO_AF_SPI1};
//const PinDef_t PIN_PA7  = {{GPIO_Pin_7,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource7,GPIOA,RCC_AHB1Periph_GPIOA,0,0};
// MCO1_Pin
const PinDef_t PIN_PA8  = {{GPIO_Pin_8,GPIO_Mode_AF,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource8,GPIOA,RCC_AHB1Periph_GPIOA,-1,0};
// USB5V_Detected_Pin
const PinDef_t PIN_PA9  = {{GPIO_Pin_9,GPIO_Mode_IN,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_DOWN},GPIO_PinSource9,GPIOA,RCC_AHB1Periph_GPIOA,-1,0};
// USB_DM_Pin
const PinDef_t PIN_PA11 = {{GPIO_Pin_11,GPIO_Mode_IN,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_NOPULL},GPIO_PinSource11,GPIOA,RCC_AHB1Periph_GPIOA,-1,0};
// USB_DP_Pin
const PinDef_t PIN_PA12 = {{GPIO_Pin_12,GPIO_Mode_IN,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_NOPULL},GPIO_PinSource12,GPIOA,RCC_AHB1Periph_GPIOA,-1,0};
// Reset_BT_Pin
const PinDef_t PIN_PA15 = {{GPIO_Pin_15,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_NOPULL},GPIO_PinSource15,GPIOA,RCC_AHB1Periph_GPIOA,0,0};
// Touch_Reset_Pin
const PinDef_t PIN_PB0  = {{GPIO_Pin_0,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource0,GPIOB,RCC_AHB1Periph_GPIOB,0,0};
// Connect_USB_Pin
const PinDef_t PIN_PB1  = {{GPIO_Pin_1,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_NOPULL},GPIO_PinSource1,GPIOB,RCC_AHB1Periph_GPIOB,0,0};
// POWER_3V3_ON_1V8_OFF_Pin
const PinDef_t PIN_PB2  = {{GPIO_Pin_2,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource2,GPIOB,RCC_AHB1Periph_GPIOB,0,0};

//#ifdef SWO_ON
//const PinDef_t PIN_PB10 = {{GPIO_Pin_10,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource2,GPIOB,RCC_AHB1Periph_GPIOB,0};
//#else
// ENABLE_2V8_Pin
const PinDef_t PIN_PB3  = {{GPIO_Pin_3,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource4,GPIOB,RCC_AHB1Periph_GPIOB,0,0};
//#endif

// ENABLE_LIGHT_SENSOR_Pin
const PinDef_t PIN_PB4  = {{GPIO_Pin_4,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource4,GPIOB,RCC_AHB1Periph_GPIOB,0,0};
// OLED_Reset_Pin
const PinDef_t PIN_PB5  = {{GPIO_Pin_5,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource5,GPIOB,RCC_AHB1Periph_GPIOB,0,0};
// I2C_SCL_Pin
const PinDef_t PIN_PB6  = {{GPIO_Pin_6,GPIO_Mode_IN,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_NOPULL},GPIO_PinSource6,GPIOB,RCC_AHB1Periph_GPIOB,-1,0};
// I2C_SDA_Pin
const PinDef_t PIN_PB7  = {{GPIO_Pin_7,GPIO_Mode_IN,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_NOPULL},GPIO_PinSource7,GPIOB,RCC_AHB1Periph_GPIOB,-1,0};
// BUZER_PWM_Pin
const PinDef_t PIN_PB8  = {{GPIO_Pin_8,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource8,GPIOB,RCC_AHB1Periph_GPIOB,0,0};
// ACCELEROMETER_INT_Pin
const PinDef_t PIN_PB9  = {{GPIO_Pin_9,GPIO_Mode_IN,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_DOWN},GPIO_PinSource9,GPIOB,RCC_AHB1Periph_GPIOB,-1,0};
// BT_CLK_REQ_Pin
const PinDef_t PIN_PB10 = {{GPIO_Pin_10,GPIO_Mode_IN,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_NOPULL},GPIO_PinSource10,GPIOB,RCC_AHB1Periph_GPIOB,-1,0};
// POWER_BTN_PRESS_Pin
const PinDef_t PIN_PB11 = {{GPIO_Pin_11,GPIO_Mode_IN,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_NOPULL},GPIO_PinSource11,GPIOB,RCC_AHB1Periph_GPIOB,-1,0};
// SPI2_nSS_Pin
const PinDef_t PIN_PB12 = {{GPIO_Pin_12,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource12,GPIOB,RCC_AHB1Periph_GPIOB,1,0};
// SPI2_SCK_Pin
const PinDef_t PIN_PB13 = {{GPIO_Pin_13,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource13,GPIOB,RCC_AHB1Periph_GPIOB,0,0};
// SPI2_MISO_Pin
const PinDef_t PIN_PB14 = {{GPIO_Pin_14,GPIO_Mode_IN,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_DOWN},GPIO_PinSource14,GPIOB,RCC_AHB1Periph_GPIOB,-1,0};
// SPI2_MOSI_Pin
const PinDef_t PIN_PB15 = {{GPIO_Pin_15,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource15,GPIOB,RCC_AHB1Periph_GPIOB,0,0};
// OLED_A0_Pin
const PinDef_t PIN_PC0  = {{GPIO_Pin_0,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource0,GPIOC,RCC_AHB1Periph_GPIOC,0,0};
// OLED_V_ENABLE_Pin
const PinDef_t PIN_PC1  = {{GPIO_Pin_1,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource1,GPIOC,RCC_AHB1Periph_GPIOC,0,0};
// HoldPower_Pin
const PinDef_t PIN_PC3  = {{GPIO_Pin_3,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_NOPULL},GPIO_PinSource3,GPIOC,RCC_AHB1Periph_GPIOC,1,0};
// LIGHT_SENSOR_ANALOG_OUT_Pin
const PinDef_t PIN_PC4  = {{GPIO_Pin_4,GPIO_Mode_AIN,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_NOPULL},GPIO_PinSource4,GPIOC,RCC_AHB1Periph_GPIOC,-1,0};
// TOUCH_WKUP_INT_Pin
const PinDef_t PIN_PC6  = {{GPIO_Pin_6,GPIO_Mode_IN,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_NOPULL},GPIO_PinSource6,GPIOC,RCC_AHB1Periph_GPIOC,-1,0};
// Enable_1V8_BT_Power_Pin
const PinDef_t PIN_PC7  = {{GPIO_Pin_7,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_NOPULL},GPIO_PinSource7,GPIOC,RCC_AHB1Periph_GPIOC,1,0};
// SPI3_nSS_Pin
const PinDef_t PIN_PC9  = {{GPIO_Pin_9,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource9,GPIOC,RCC_AHB1Periph_GPIOC,0,0};
// SPI3_SCK_Pin
const PinDef_t PIN_PC10 = {{GPIO_Pin_10,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource10,GPIOC,RCC_AHB1Periph_GPIOC,0,0};
// SPI3_MISO_Pin
const PinDef_t PIN_PC11 = {{GPIO_Pin_11,GPIO_Mode_IN,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_DOWN},GPIO_PinSource11,GPIOC,RCC_AHB1Periph_GPIOC,-1,0};
// SPI3_MOSI_Pin
const PinDef_t PIN_PC12 = {{GPIO_Pin_12,GPIO_Mode_OUT,GPIO_Speed_50MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL},GPIO_PinSource12,GPIOC,RCC_AHB1Periph_GPIOC,0,0};
// HOST_WAKE_UP_Pin
const PinDef_t PIN_PC13 = {{GPIO_Pin_13,GPIO_Mode_IN,GPIO_Speed_50MHz,GPIO_OType_OD,GPIO_PuPd_NOPULL},GPIO_PinSource13,GPIOC,RCC_AHB1Periph_GPIOC,-1,0};


#define BUZZER (&PIN_PB8)
#define BUTTON (&PIN_PB11)
#define POWER  (&PIN_PC3)

void pinInit(const PinDef_t *pin) {
  GPIO_InitTypeDef GPIO_InitStruct;
  GPIO_InitStruct.GPIO_Pin = pin->def.GPIO_Pin;
  GPIO_InitStruct.GPIO_Mode = pin->def.GPIO_Mode;
  GPIO_InitStruct.GPIO_Speed = pin->def.GPIO_Speed;
  GPIO_InitStruct.GPIO_OType = pin->def.GPIO_OType;
  GPIO_InitStruct.GPIO_PuPd = pin->def.GPIO_PuPd;
  GPIO_Init(pin->port, &GPIO_InitStruct);
  if(pin->def.GPIO_Mode == GPIO_Mode_AF) {
    GPIO_PinAFConfig(pin->port,  pin->source,  pin->af);
  } else if(pin->def.GPIO_Mode == GPIO_Mode_OUT) {
    GPIO_WriteBit(pin->port, pin->def.GPIO_Pin, pin->init ? Bit_SET : Bit_RESET);
  }
}

void pinsInit() {
  const PinDef_t * pins[38] = {
    &PIN_PA0, &PIN_PA1, &PIN_PA2, &PIN_PA4, &PIN_PA5, &PIN_PA7, &PIN_PA8, &PIN_PA9, 
    &PIN_PA11, &PIN_PA12, &PIN_PA15, &PIN_PB0, &PIN_PB1, &PIN_PB2, &PIN_PB3,
    &PIN_PB4, &PIN_PB5, &PIN_PB6, &PIN_PB7, &PIN_PB8, &PIN_PB9, &PIN_PB10,
    &PIN_PB11, &PIN_PB12, &PIN_PB13, &PIN_PB14, &PIN_PB15, &PIN_PC0,
    &PIN_PC1, &PIN_PC3, &PIN_PC4, &PIN_PC6, &PIN_PC7, &PIN_PC9,
    &PIN_PC10, &PIN_PC11, &PIN_PC12, &PIN_PC13
  };
  for(uint8_t n = 0; n < 38; n++) {
    pinInit(pins[n]);
  }
}

void digitalWrite(const PinDef_t *pin, uint8_t value) {
  GPIO_WriteBit(pin->port, pin->def.GPIO_Pin, value == HIGH ? Bit_SET : Bit_RESET);
}

uint8_t digitalRead(const PinDef_t *pin) {
  return GPIO_ReadInputDataBit(pin->port, pin->def.GPIO_Pin) ? HIGH : LOW;
}

void delay(uint32_t volatile us) {
  us *= 12000;
  while(us--);
}