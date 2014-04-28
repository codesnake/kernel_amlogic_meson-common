
#ifndef AML_MACH_UART
#define AML_MACH_UART

#include <plat/platform_data.h>
#include <mach/io.h>
#include <mach/uart.h>

struct aml_uart_platform{
		plat_data_public_t  public;
		const char * port_name[MESON_UART_PORT_NUM];
		int line[MESON_UART_PORT_NUM];
		void * regaddr[MESON_UART_PORT_NUM];
		int irq_no[MESON_UART_PORT_NUM];
		int fifo_level[MESON_UART_PORT_NUM];
		void * pinmux_uart[MESON_UART_PORT_NUM];
};

#endif
