define LIBSTM32F2_MODULE_template
dir := $(1)
LIBSTM32F2_INCLUDES += -I$$(dir)
include $$(dir)/rules.mk
endef

