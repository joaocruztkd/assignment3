
/* auto-generated by gen_syscalls.py, don't edit */
#ifndef Z_INCLUDE_SYSCALLS_FLASH_H
#define Z_INCLUDE_SYSCALLS_FLASH_H


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

extern int z_impl_flash_read(const struct device * dev, off_t offset, void * data, size_t len);

__pinned_func
static inline int flash_read(const struct device * dev, off_t offset, void * data, size_t len)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke4(*(uintptr_t *)&dev, *(uintptr_t *)&offset, *(uintptr_t *)&data, *(uintptr_t *)&len, K_SYSCALL_FLASH_READ);
	}
#endif
	compiler_barrier();
	return z_impl_flash_read(dev, offset, data, len);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define flash_read(dev, offset, data, len) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_FLASH_READ, flash_read, dev, offset, data, len); 	retval = flash_read(dev, offset, data, len); 	sys_port_trace_syscall_exit(K_SYSCALL_FLASH_READ, flash_read, dev, offset, data, len, retval); 	retval; })
#endif
#endif


extern int z_impl_flash_write(const struct device * dev, off_t offset, const void * data, size_t len);

__pinned_func
static inline int flash_write(const struct device * dev, off_t offset, const void * data, size_t len)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke4(*(uintptr_t *)&dev, *(uintptr_t *)&offset, *(uintptr_t *)&data, *(uintptr_t *)&len, K_SYSCALL_FLASH_WRITE);
	}
#endif
	compiler_barrier();
	return z_impl_flash_write(dev, offset, data, len);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define flash_write(dev, offset, data, len) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_FLASH_WRITE, flash_write, dev, offset, data, len); 	retval = flash_write(dev, offset, data, len); 	sys_port_trace_syscall_exit(K_SYSCALL_FLASH_WRITE, flash_write, dev, offset, data, len, retval); 	retval; })
#endif
#endif


extern int z_impl_flash_erase(const struct device * dev, off_t offset, size_t size);

__pinned_func
static inline int flash_erase(const struct device * dev, off_t offset, size_t size)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke3(*(uintptr_t *)&dev, *(uintptr_t *)&offset, *(uintptr_t *)&size, K_SYSCALL_FLASH_ERASE);
	}
#endif
	compiler_barrier();
	return z_impl_flash_erase(dev, offset, size);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define flash_erase(dev, offset, size) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_FLASH_ERASE, flash_erase, dev, offset, size); 	retval = flash_erase(dev, offset, size); 	sys_port_trace_syscall_exit(K_SYSCALL_FLASH_ERASE, flash_erase, dev, offset, size, retval); 	retval; })
#endif
#endif


extern int z_impl_flash_write_protection_set(const struct device * dev, bool enable);

__pinned_func
static inline int flash_write_protection_set(const struct device * dev, bool enable)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&enable, K_SYSCALL_FLASH_WRITE_PROTECTION_SET);
	}
#endif
	compiler_barrier();
	return z_impl_flash_write_protection_set(dev, enable);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define flash_write_protection_set(dev, enable) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_FLASH_WRITE_PROTECTION_SET, flash_write_protection_set, dev, enable); 	retval = flash_write_protection_set(dev, enable); 	sys_port_trace_syscall_exit(K_SYSCALL_FLASH_WRITE_PROTECTION_SET, flash_write_protection_set, dev, enable, retval); 	retval; })
#endif
#endif


extern int z_impl_flash_get_page_info_by_offs(const struct device * dev, off_t offset, struct flash_pages_info * info);

__pinned_func
static inline int flash_get_page_info_by_offs(const struct device * dev, off_t offset, struct flash_pages_info * info)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke3(*(uintptr_t *)&dev, *(uintptr_t *)&offset, *(uintptr_t *)&info, K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS);
	}
#endif
	compiler_barrier();
	return z_impl_flash_get_page_info_by_offs(dev, offset, info);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define flash_get_page_info_by_offs(dev, offset, info) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS, flash_get_page_info_by_offs, dev, offset, info); 	retval = flash_get_page_info_by_offs(dev, offset, info); 	sys_port_trace_syscall_exit(K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS, flash_get_page_info_by_offs, dev, offset, info, retval); 	retval; })
#endif
#endif


extern int z_impl_flash_get_page_info_by_idx(const struct device * dev, uint32_t page_index, struct flash_pages_info * info);

__pinned_func
static inline int flash_get_page_info_by_idx(const struct device * dev, uint32_t page_index, struct flash_pages_info * info)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke3(*(uintptr_t *)&dev, *(uintptr_t *)&page_index, *(uintptr_t *)&info, K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX);
	}
#endif
	compiler_barrier();
	return z_impl_flash_get_page_info_by_idx(dev, page_index, info);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define flash_get_page_info_by_idx(dev, page_index, info) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX, flash_get_page_info_by_idx, dev, page_index, info); 	retval = flash_get_page_info_by_idx(dev, page_index, info); 	sys_port_trace_syscall_exit(K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX, flash_get_page_info_by_idx, dev, page_index, info, retval); 	retval; })
#endif
#endif


extern size_t z_impl_flash_get_page_count(const struct device * dev);

__pinned_func
static inline size_t flash_get_page_count(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (size_t) arch_syscall_invoke1(*(uintptr_t *)&dev, K_SYSCALL_FLASH_GET_PAGE_COUNT);
	}
#endif
	compiler_barrier();
	return z_impl_flash_get_page_count(dev);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define flash_get_page_count(dev) ({ 	size_t retval; 	sys_port_trace_syscall_enter(K_SYSCALL_FLASH_GET_PAGE_COUNT, flash_get_page_count, dev); 	retval = flash_get_page_count(dev); 	sys_port_trace_syscall_exit(K_SYSCALL_FLASH_GET_PAGE_COUNT, flash_get_page_count, dev, retval); 	retval; })
#endif
#endif


extern int z_impl_flash_sfdp_read(const struct device * dev, off_t offset, void * data, size_t len);

__pinned_func
static inline int flash_sfdp_read(const struct device * dev, off_t offset, void * data, size_t len)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke4(*(uintptr_t *)&dev, *(uintptr_t *)&offset, *(uintptr_t *)&data, *(uintptr_t *)&len, K_SYSCALL_FLASH_SFDP_READ);
	}
#endif
	compiler_barrier();
	return z_impl_flash_sfdp_read(dev, offset, data, len);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define flash_sfdp_read(dev, offset, data, len) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_FLASH_SFDP_READ, flash_sfdp_read, dev, offset, data, len); 	retval = flash_sfdp_read(dev, offset, data, len); 	sys_port_trace_syscall_exit(K_SYSCALL_FLASH_SFDP_READ, flash_sfdp_read, dev, offset, data, len, retval); 	retval; })
#endif
#endif


extern int z_impl_flash_read_jedec_id(const struct device * dev, uint8_t * id);

__pinned_func
static inline int flash_read_jedec_id(const struct device * dev, uint8_t * id)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&id, K_SYSCALL_FLASH_READ_JEDEC_ID);
	}
#endif
	compiler_barrier();
	return z_impl_flash_read_jedec_id(dev, id);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define flash_read_jedec_id(dev, id) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_FLASH_READ_JEDEC_ID, flash_read_jedec_id, dev, id); 	retval = flash_read_jedec_id(dev, id); 	sys_port_trace_syscall_exit(K_SYSCALL_FLASH_READ_JEDEC_ID, flash_read_jedec_id, dev, id, retval); 	retval; })
#endif
#endif


extern size_t z_impl_flash_get_write_block_size(const struct device * dev);

__pinned_func
static inline size_t flash_get_write_block_size(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (size_t) arch_syscall_invoke1(*(uintptr_t *)&dev, K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE);
	}
#endif
	compiler_barrier();
	return z_impl_flash_get_write_block_size(dev);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define flash_get_write_block_size(dev) ({ 	size_t retval; 	sys_port_trace_syscall_enter(K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE, flash_get_write_block_size, dev); 	retval = flash_get_write_block_size(dev); 	sys_port_trace_syscall_exit(K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE, flash_get_write_block_size, dev, retval); 	retval; })
#endif
#endif


extern const struct flash_parameters * z_impl_flash_get_parameters(const struct device * dev);

__pinned_func
static inline const struct flash_parameters * flash_get_parameters(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (const struct flash_parameters *) arch_syscall_invoke1(*(uintptr_t *)&dev, K_SYSCALL_FLASH_GET_PARAMETERS);
	}
#endif
	compiler_barrier();
	return z_impl_flash_get_parameters(dev);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define flash_get_parameters(dev) ({ 	const struct flash_parameters * retval; 	sys_port_trace_syscall_enter(K_SYSCALL_FLASH_GET_PARAMETERS, flash_get_parameters, dev); 	retval = flash_get_parameters(dev); 	sys_port_trace_syscall_exit(K_SYSCALL_FLASH_GET_PARAMETERS, flash_get_parameters, dev, retval); 	retval; })
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
