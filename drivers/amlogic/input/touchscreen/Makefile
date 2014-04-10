#
# Makefile for the touchscreen drivers.
#

# Each configuration option enables a list of files.
obj-$(CONFIG_MESON_INPUT_TOUCHSCREEN) += common.o
obj-$(CONFIG_FOCALTECH_CAPACITIVE_TOUCHSCREEN)		+=focaltech_5x06.o
obj-$(CONFIG_GOODIX_GT81XX_CAPACITIVE_TOUCHSCREEN)	+= goodix_gt81xx.o
obj-$(CONFIG_GSLX680_CAPACITIVE_TOUCHSCREEN)	+= gslx680.o
obj-$(CONFIG_GSLX680B_CAPACITIVE_TOUCHSCREEN)	+= gslx680B.o
obj-$(CONFIG_NOVATEK_CAPACITIVE_TOUCHSCREEN)  += novatek.o
obj-y += gt9xx/
obj-y += ct36x_ts/
obj-y += ft5x02/

ifneq ($(KBUILD_SRC),)
TOP_KBUILD_SRC := $(KBUILD_SRC)/
endif

$(obj)/gsl_point_id.o:
	@cp $(TOP_KBUILD_SRC)drivers/amlogic/input/touchscreen/gsl_point_id.z \
		drivers/amlogic/input/touchscreen/gsl_point_id.o
	
obj-y += gsl_point_id.o

