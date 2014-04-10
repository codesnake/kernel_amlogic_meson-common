##########################################
########## Amlogic Drivers ###############
##########################################

##########################################
## The order of directories matter.
## Do not change.
##########################################


obj-y +=early_init/
###For Display, this is for quick logo show##
obj-$(CONFIG_AM_DISPLAY_MODULE) += display/

obj-$(CONFIG_POST_PROCESS_MANAGER) += ppmgr/

obj-$(CONFIG_V4L_AMLOGIC_VIDEO) += video_dev/
obj-$(CONFIG_V4L_AMLOGIC_VIDEO2) += video_dev/
obj-$(CONFIG_AMLOGIC_IONVIDEO) += ionvideo/

obj-$(CONFIG_DEINTERLACE) += deinterlace/

##### Basic drivers#####

obj-y += secure/
obj-y += securitykeys/
obj-y += keymanage/

obj-y += uart/
obj-y += of/
obj-y += usb/
obj-y += cpufreq/
obj-$(CONFIG_GPIO_AMLOGIC) += gpio/
obj-y += pinctrl/

#ifeq ($(CONFIG_AML_NEXT_GEN_NAND),y)
ifeq  ($(CONFIG_ARCH_MESON8),y)
obj-$(CONFIG_AML_NEXT_GEN_NAND) += amlnf/
else
obj-$(CONFIG_AM_NAND) += nand/
endif

obj-y += ethernet/

obj-$(CONFIG_AM_CANVAS) += canvas/

obj-y += amports/

# ve&cm
#obj-y += amvecm/

obj-$(CONFIG_I2C) += i2c/

#obj-y += extern_io/

obj-$(CONFIG_EFUSE)+=efuse/
obj-y += input/

obj-$(CONFIG_AMLOGIC_SPI_NOR) += spi_nor/

#obj-$(CONFIG_CARDREADER) += cardreader/
obj-$(CONFIG_MMC_AML) +=mmc/

obj-y += vfm/

obj-$(CONFIG_AML_AUDIO_DSP) += audiodsp/

obj-$(CONFIG_AML_RTC)+= rtc/

#obj-$(CONFIG_GPS_POWERCTRL) += gps/

obj-y += power/

#obj-$(CONFIG_AM_GPIO) +=gpio/

obj-y += tvin_v4l2/
obj-$(CONFIG_TVIN) += ../../../hardware/tvin/

obj-y += thermal/


obj-$(CONFIG_BOOT_MONITOR) += boot_monitor/

#obj-$(CONFIG_AML_WATCHDOG) += aml_watchdog/
#####Sound system is later init in kernel default..######################
obj-$(CONFIG_AMAUDIO) += amaudio/
obj-y += mhl/
obj-y += hdmi/

ifeq ($(CONFIG_AM_NEW_TV_ARCH),y)
#obj-$(CONFIG_AM_DVB) += dvb_tv/
else
#obj-$(CONFIG_AM_DVB) += dvb/
endif

#obj-$(CONFIG_AM_SMARTCARD) += smartcard/

ifneq ($(CONFIG_AM_NEW_TV_ARCH),y)
#obj-y += demod/
endif

obj-$(CONFIG_AM_WIFI) += wifi/
obj-$(CONFIG_SDIO_DHD_CDC_WIFI_40181_MODULE) += ../../../hardware/wifi/broadcom/drivers/ap6xxx/broadcm_40181/
obj-$(CONFIG_RTL8188EU) += ../../../hardware/wifi/realtek/drivers/8188eu/rtl8xxx_EU/
obj-$(CONFIG_RTL8188EU_MP) += ../../../hardware/wifi/realtek/drivers/8188eu/rtl8xxx_EU_MP/
obj-$(CONFIG_RTL8192CU) += ../../../hardware/wifi/realtek/drivers/8192cu/rtl8xxx_CU/
obj-$(CONFIG_RTL8192DU) += ../../../hardware/wifi/realtek/drivers/8192du/rtl8xxx_DU/
obj-$(CONFIG_RTL8192EU) += ../../../hardware/wifi/realtek/drivers/8192eu/rtl8192EU/
obj-y += bluetooth/
obj-$(CONFIG_MESON_NFC) += nfc/
#obj-y += camera/
#obj-$(CONFIG_AMLOGIC_MODEM) += modem/
#obj-$(CONFIG_AM_DEBUG) += debug/

obj-$(CONFIG_VIDEO_AMLOGIC_CAPTURE)	+= camera/

#obj-$(CONFIG_AM_SENSORS) += sensors/

obj-$(CONFIG_AMLOGIC_MIPI) += mipi/

#obj-$(CONFIG_FREE_SCALE) += freescale/

#obj-$(CONFIG_D2D3_PROCESS) += d2d3/

#obj-$(CONFIG_AML_REG_DEBUG) += regd/
#obj-$(CONFIG_AMLOGIC_SPI_HW_MASTER) += spi/

#obj-$(CONFIG_DEFERRED_DRIVERINIT) +=  load_deferred_module/

obj-$(CONFIG_UMP) += ../../../hardware/arm/gpu/ump/
obj-$(CONFIG_MALI400) += ../../../hardware/arm/gpu/mali/

obj-$(CONFIG_AMLOGIC_ION) += ion_dev/

obj-y += crypto/
