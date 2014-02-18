/*
 * Meson secure APIs file.
 *
 *  Copyright (C) 2002 ARM Ltd.
 *  All Rights Reserved
 *  Copyright (c) 2010, Code Aurora Forum. All rights reserved.
 *
 * This program is free software,you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <plat/io.h>
#include <plat/regops.h>
#include <linux/printk.h>
#include <linux/string.h>
#include <asm/cacheflush.h>
#include <asm/hardware/cache-l2x0.h>
#include <linux/dma-mapping.h>
#ifdef  CONFIG_MESON_TRUSTZONE
#include <mach/meson-secure.h>
#endif
/*
int meson_secure_memblock(unsigned startaddr, unsigned endaddr, struct secure_memblock_ctrl* pctrl)
{
	int ret;
	struct secure_memblock_info memblock_info;
	
	if(!pctrl)
		return -1;	
	if(((startaddr & 0xffff) != 0) || ((endaddr&0xffff)!=0xffff)){
		printk("secure memory block must be 16 bits align!\n");
		return -1;
	}
	
	memblock_info.startaddr = startaddr;
	memblock_info.endaddr = endaddr;
	memcpy(&(memblock_info.memblock_ctrl), pctrl, sizeof(memblock_info.memblock_ctrl));	
	__cpuc_flush_dcache_area((void*)&memblock_info, sizeof(memblock_info));
	outer_clean_range(__pa(&memblock_info), __pa(&memblock_info+1));
	
	ret = meson_smc_internal_api(INTERNAL_API_MEMBLOCK_CONFIG, __pa(&memblock_info));	
	return ret;	
}
*/

int meson_trustzone_efuse(struct efuse_hal_api_arg* arg)
{
	int ret;
	if(!arg)
		return -1;
	
	__cpuc_flush_dcache_area(__va(arg->buffer_phy), arg->size);
	outer_clean_range((arg->buffer_phy), (arg->buffer_phy+arg->size));
	
	__cpuc_flush_dcache_area(__va(arg->retcnt_phy), sizeof(unsigned int));
	outer_clean_range(arg->retcnt_phy, (arg->retcnt_phy+sizeof(unsigned int)));
	
	__cpuc_flush_dcache_area((void*)arg, sizeof(struct efuse_hal_api_arg));
	outer_clean_range(__pa(arg), __pa(arg+1));
	
	ret=meson_smc_hal_api(TRUSTZONE_HAL_API_EFUSE, __pa(arg));
/*
	if(arg->cmd == EFUSE_HAL_API_READ){
		dmac_unmap_area(__va(arg->buffer_phy), arg->size, DMA_FROM_DEVICE);
		outer_inv_range((arg->buffer_phy), (arg->buffer_phy+arg->size));		
	}
	dmac_unmap_area(__va(arg->buffer_phy), arg->size, DMA_FROM_DEVICE);
	outer_inv_range((arg->retcnt_phy),(arg->retcnt_phy+sizeof(unsigned int)));
*/		
	return ret;	
}
