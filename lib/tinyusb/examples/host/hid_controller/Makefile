include ../../../tools/top.mk
include ../../make.mk

INC += \
	src \
	$(TOP)/hw \

# Example source
EXAMPLE_SOURCE += \
	src/hid_app.c \
	src/main.c
	
SRC_C += $(addprefix $(CURRENT_PATH)/, $(EXAMPLE_SOURCE))

# TODO: suppress warning caused by host stack
CFLAGS += -Wno-error=cast-align -Wno-error=null-dereference

# TinyUSB Host Stack source
SRC_C += \
	src/class/cdc/cdc_host.c \
	src/class/hid/hid_host.c \
	src/class/msc/msc_host.c \
	src/host/hub.c \
	src/host/usbh.c \
	src/host/usbh_control.c \
	src/portable/ehci/ehci.c \
	src/portable/ohci/ohci.c \
	src/portable/nxp/transdimension/hcd_transdimension.c \
	src/portable/nxp/lpc17_40/hcd_lpc17_40.c

include ../../rules.mk
