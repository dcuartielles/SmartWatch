# Standard things
sp              := $(sp).x
dirstack_$(sp)  := $(d)
d               := $(dir)
BUILDDIRS       += $(BUILD_PATH)/$(d)
ifneq ($(MCU_FAMILY), STM32F2)
BUILDDIRS       += $(BUILD_PATH)/$(d)/usb
BUILDDIRS       += $(BUILD_PATH)/$(d)/usb/usb_lib
LIBMAPLE_INCLUDES := -I$(LIBMAPLE_PATH) -I$(LIBMAPLE_PATH)/usb -I$(LIBMAPLE_PATH)/usb/usb_lib
else
BUILDDIRS       += $(BUILD_PATH)/$(d)/usbF4/STM32_USB_Device_Library/Core/src
BUILDDIRS       += $(BUILD_PATH)/$(d)/usbF4/STM32_USB_Device_Library/Class/cdc/src
BUILDDIRS       += $(BUILD_PATH)/$(d)/usbF4/STM32_USB_OTG_Driver/src
BUILDDIRS       += $(BUILD_PATH)/$(d)/usbF4/VCP
LIBMAPLE_INCLUDES := -I$(LIBMAPLE_PATH) -I$(LIBMAPLE_PATH)/usbF4
endif


# Local flags
CFLAGS_$(d) = -I$(d) $(LIBMAPLE_INCLUDES) -Wall 

# Local rules and targets
#              bkp.c                    

cSRCS_$(d) := stm32f2xx_adc.c          \
              stm32f2xx_can.c          \
              stm32f2xx_crc.c          \
              stm32f2xx_cryp.c         \
              stm32f2xx_cryp_aes.c     \
              stm32f2xx_cryp_des.c     \
              stm32f2xx_cryp_tdes.c    \
              stm32f2xx_dac.c          \
              stm32f2xx_dbgmcu.c       \
              stm32f2xx_dcmi.c         \
              stm32f2xx_dma.c          \
              stm32f2xx_exti.c         \
              stm32f2xx_flash.c        \
              stm32f2xx_fsmc.c         \
              stm32f2xx_gpio.c         \
              stm32f2xx_hash.c         \
              stm32f2xx_hash_md5.c     \
              stm32f2xx_hash_sha1.c    \
              stm32f2xx_i2c.c          \
              stm32f2xx_iwdg.c         \
              stm32f2xx_misc.c         \
              stm32f2xx_pwr.c          \
              stm32f2xx_rcc.c          \
              stm32f2xx_rng.c          \
              stm32f2xx_rtc.c          \
              stm32f2xx_sdio.c         \
              stm32f2xx_spi.c          \
              stm32f2xx_syscfg.c       \
              stm32f2xx_tim.c          \
              stm32f2xx_usart.c        \
              stm32f2xx_wwdg.c         \
              syscalls.c


ifneq ($(MCU_FAMILY), STM32F2)
	cSRCS_$(d) += bkp.c
endif

sSRCS_$(d) := exc.S

cFILES_$(d) := $(cSRCS_$(d):%=$(d)/%)
sFILES_$(d) := $(sSRCS_$(d):%=$(d)/%)

OBJS_$(d) := $(cFILES_$(d):%.c=$(BUILD_PATH)/%.o) $(sFILES_$(d):%.S=$(BUILD_PATH)/%.o)

$(OBJS_$(d)): TGT_CFLAGS := $(CFLAGS_$(d))
$(OBJS_$(d)): TGT_ASFLAGS :=

TGT_BIN += $(OBJS_$(d))

# Standard things
d               := $(dirstack_$(sp))
sp              := $(basename $(sp))
