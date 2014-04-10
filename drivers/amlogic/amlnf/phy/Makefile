#
# aml_nftl
#

ifneq ($(KBUILD_SRC),)
TOP_KBUILD_SRC := $(KBUILD_SRC)/
endif

$(obj)/amlnf_phy.o:
	@cp $(TOP_KBUILD_SRC)drivers/amlogic/amlnf/phy/amlnf_phy_140123.z \
        drivers/amlogic/amlnf/phy/amlnf_phy.o

$(obj)/amlnf_phy.o:  FORCE

obj-$(CONFIG_AML_NEXT_GEN_NAND)	+= amlnf_phy.o
