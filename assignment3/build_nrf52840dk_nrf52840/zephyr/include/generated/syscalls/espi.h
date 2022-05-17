
/* auto-generated by gen_syscalls.py, don't edit */
#ifndef Z_INCLUDE_SYSCALLS_ESPI_H
#define Z_INCLUDE_SYSCALLS_ESPI_H


#include <tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall.h>

#include <linker/sections.h>


#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic push
#endif

#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#if !defined(__XCC__)
#pragma GCC diagnostic ignored "-Warray-bounds"
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_espi_config(const struct device * dev, struct espi_cfg * cfg);

__pinned_func
static inline int espi_config(const struct device * dev, struct espi_cfg * cfg)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&cfg, K_SYSCALL_ESPI_CONFIG);
	}
#endif
	compiler_barrier();
	return z_impl_espi_config(dev, cfg);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define espi_config(dev, cfg) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ESPI_CONFIG, espi_config, dev, cfg); 	retval = espi_config(dev, cfg); 	sys_port_trace_syscall_exit(K_SYSCALL_ESPI_CONFIG, espi_config, dev, cfg, retval); 	retval; })
#endif
#endif


extern bool z_impl_espi_get_channel_status(const struct device * dev, enum espi_channel ch);

__pinned_func
static inline bool espi_get_channel_status(const struct device * dev, enum espi_channel ch)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (bool) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&ch, K_SYSCALL_ESPI_GET_CHANNEL_STATUS);
	}
#endif
	compiler_barrier();
	return z_impl_espi_get_channel_status(dev, ch);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define espi_get_channel_status(dev, ch) ({ 	bool retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ESPI_GET_CHANNEL_STATUS, espi_get_channel_status, dev, ch); 	retval = espi_get_channel_status(dev, ch); 	sys_port_trace_syscall_exit(K_SYSCALL_ESPI_GET_CHANNEL_STATUS, espi_get_channel_status, dev, ch, retval); 	retval; })
#endif
#endif


extern int z_impl_espi_read_request(const struct device * dev, struct espi_request_packet * req);

__pinned_func
static inline int espi_read_request(const struct device * dev, struct espi_request_packet * req)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&req, K_SYSCALL_ESPI_READ_REQUEST);
	}
#endif
	compiler_barrier();
	return z_impl_espi_read_request(dev, req);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define espi_read_request(dev, req) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ESPI_READ_REQUEST, espi_read_request, dev, req); 	retval = espi_read_request(dev, req); 	sys_port_trace_syscall_exit(K_SYSCALL_ESPI_READ_REQUEST, espi_read_request, dev, req, retval); 	retval; })
#endif
#endif


extern int z_impl_espi_write_request(const struct device * dev, struct espi_request_packet * req);

__pinned_func
static inline int espi_write_request(const struct device * dev, struct espi_request_packet * req)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&req, K_SYSCALL_ESPI_WRITE_REQUEST);
	}
#endif
	compiler_barrier();
	return z_impl_espi_write_request(dev, req);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define espi_write_request(dev, req) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ESPI_WRITE_REQUEST, espi_write_request, dev, req); 	retval = espi_write_request(dev, req); 	sys_port_trace_syscall_exit(K_SYSCALL_ESPI_WRITE_REQUEST, espi_write_request, dev, req, retval); 	retval; })
#endif
#endif


extern int z_impl_espi_read_lpc_request(const struct device * dev, enum lpc_peripheral_opcode op, uint32_t * data);

__pinned_func
static inline int espi_read_lpc_request(const struct device * dev, enum lpc_peripheral_opcode op, uint32_t * data)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke3(*(uintptr_t *)&dev, *(uintptr_t *)&op, *(uintptr_t *)&data, K_SYSCALL_ESPI_READ_LPC_REQUEST);
	}
#endif
	compiler_barrier();
	return z_impl_espi_read_lpc_request(dev, op, data);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define espi_read_lpc_request(dev, op, data) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ESPI_READ_LPC_REQUEST, espi_read_lpc_request, dev, op, data); 	retval = espi_read_lpc_request(dev, op, data); 	sys_port_trace_syscall_exit(K_SYSCALL_ESPI_READ_LPC_REQUEST, espi_read_lpc_request, dev, op, data, retval); 	retval; })
#endif
#endif


extern int z_impl_espi_write_lpc_request(const struct device * dev, enum lpc_peripheral_opcode op, uint32_t * data);

__pinned_func
static inline int espi_write_lpc_request(const struct device * dev, enum lpc_peripheral_opcode op, uint32_t * data)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke3(*(uintptr_t *)&dev, *(uintptr_t *)&op, *(uintptr_t *)&data, K_SYSCALL_ESPI_WRITE_LPC_REQUEST);
	}
#endif
	compiler_barrier();
	return z_impl_espi_write_lpc_request(dev, op, data);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define espi_write_lpc_request(dev, op, data) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ESPI_WRITE_LPC_REQUEST, espi_write_lpc_request, dev, op, data); 	retval = espi_write_lpc_request(dev, op, data); 	sys_port_trace_syscall_exit(K_SYSCALL_ESPI_WRITE_LPC_REQUEST, espi_write_lpc_request, dev, op, data, retval); 	retval; })
#endif
#endif


extern int z_impl_espi_send_vwire(const struct device * dev, enum espi_vwire_signal signal, uint8_t level);

__pinned_func
static inline int espi_send_vwire(const struct device * dev, enum espi_vwire_signal signal, uint8_t level)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke3(*(uintptr_t *)&dev, *(uintptr_t *)&signal, *(uintptr_t *)&level, K_SYSCALL_ESPI_SEND_VWIRE);
	}
#endif
	compiler_barrier();
	return z_impl_espi_send_vwire(dev, signal, level);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define espi_send_vwire(dev, signal, level) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ESPI_SEND_VWIRE, espi_send_vwire, dev, signal, level); 	retval = espi_send_vwire(dev, signal, level); 	sys_port_trace_syscall_exit(K_SYSCALL_ESPI_SEND_VWIRE, espi_send_vwire, dev, signal, level, retval); 	retval; })
#endif
#endif


extern int z_impl_espi_receive_vwire(const struct device * dev, enum espi_vwire_signal signal, uint8_t * level);

__pinned_func
static inline int espi_receive_vwire(const struct device * dev, enum espi_vwire_signal signal, uint8_t * level)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke3(*(uintptr_t *)&dev, *(uintptr_t *)&signal, *(uintptr_t *)&level, K_SYSCALL_ESPI_RECEIVE_VWIRE);
	}
#endif
	compiler_barrier();
	return z_impl_espi_receive_vwire(dev, signal, level);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define espi_receive_vwire(dev, signal, level) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ESPI_RECEIVE_VWIRE, espi_receive_vwire, dev, signal, level); 	retval = espi_receive_vwire(dev, signal, level); 	sys_port_trace_syscall_exit(K_SYSCALL_ESPI_RECEIVE_VWIRE, espi_receive_vwire, dev, signal, level, retval); 	retval; })
#endif
#endif


extern int z_impl_espi_send_oob(const struct device * dev, struct espi_oob_packet * pckt);

__pinned_func
static inline int espi_send_oob(const struct device * dev, struct espi_oob_packet * pckt)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&pckt, K_SYSCALL_ESPI_SEND_OOB);
	}
#endif
	compiler_barrier();
	return z_impl_espi_send_oob(dev, pckt);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define espi_send_oob(dev, pckt) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ESPI_SEND_OOB, espi_send_oob, dev, pckt); 	retval = espi_send_oob(dev, pckt); 	sys_port_trace_syscall_exit(K_SYSCALL_ESPI_SEND_OOB, espi_send_oob, dev, pckt, retval); 	retval; })
#endif
#endif


extern int z_impl_espi_receive_oob(const struct device * dev, struct espi_oob_packet * pckt);

__pinned_func
static inline int espi_receive_oob(const struct device * dev, struct espi_oob_packet * pckt)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&pckt, K_SYSCALL_ESPI_RECEIVE_OOB);
	}
#endif
	compiler_barrier();
	return z_impl_espi_receive_oob(dev, pckt);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define espi_receive_oob(dev, pckt) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ESPI_RECEIVE_OOB, espi_receive_oob, dev, pckt); 	retval = espi_receive_oob(dev, pckt); 	sys_port_trace_syscall_exit(K_SYSCALL_ESPI_RECEIVE_OOB, espi_receive_oob, dev, pckt, retval); 	retval; })
#endif
#endif


extern int z_impl_espi_read_flash(const struct device * dev, struct espi_flash_packet * pckt);

__pinned_func
static inline int espi_read_flash(const struct device * dev, struct espi_flash_packet * pckt)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&pckt, K_SYSCALL_ESPI_READ_FLASH);
	}
#endif
	compiler_barrier();
	return z_impl_espi_read_flash(dev, pckt);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define espi_read_flash(dev, pckt) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ESPI_READ_FLASH, espi_read_flash, dev, pckt); 	retval = espi_read_flash(dev, pckt); 	sys_port_trace_syscall_exit(K_SYSCALL_ESPI_READ_FLASH, espi_read_flash, dev, pckt, retval); 	retval; })
#endif
#endif


extern int z_impl_espi_write_flash(const struct device * dev, struct espi_flash_packet * pckt);

__pinned_func
static inline int espi_write_flash(const struct device * dev, struct espi_flash_packet * pckt)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&pckt, K_SYSCALL_ESPI_WRITE_FLASH);
	}
#endif
	compiler_barrier();
	return z_impl_espi_write_flash(dev, pckt);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define espi_write_flash(dev, pckt) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ESPI_WRITE_FLASH, espi_write_flash, dev, pckt); 	retval = espi_write_flash(dev, pckt); 	sys_port_trace_syscall_exit(K_SYSCALL_ESPI_WRITE_FLASH, espi_write_flash, dev, pckt, retval); 	retval; })
#endif
#endif


extern int z_impl_espi_flash_erase(const struct device * dev, struct espi_flash_packet * pckt);

__pinned_func
static inline int espi_flash_erase(const struct device * dev, struct espi_flash_packet * pckt)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&pckt, K_SYSCALL_ESPI_FLASH_ERASE);
	}
#endif
	compiler_barrier();
	return z_impl_espi_flash_erase(dev, pckt);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define espi_flash_erase(dev, pckt) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ESPI_FLASH_ERASE, espi_flash_erase, dev, pckt); 	retval = espi_flash_erase(dev, pckt); 	sys_port_trace_syscall_exit(K_SYSCALL_ESPI_FLASH_ERASE, espi_flash_erase, dev, pckt, retval); 	retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic pop
#endif

#endif
#endif /* include guard */
