/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_TIMEAWARE_GPIO_H
#define Z_INCLUDE_SYSCALLS_TIMEAWARE_GPIO_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <stdarg.h>

#include <syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_tgpio_port_get_time(const struct device * dev, uint64_t * current_time);

__pinned_func
static inline int tgpio_port_get_time(const struct device * dev, uint64_t * current_time)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint64_t * val; } parm1 = { .val = current_time };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_TGPIO_PORT_GET_TIME);
	}
#endif
	compiler_barrier();
	return z_impl_tgpio_port_get_time(dev, current_time);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define tgpio_port_get_time(dev, current_time) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_TGPIO_PORT_GET_TIME, tgpio_port_get_time, dev, current_time); 	syscall__retval = tgpio_port_get_time(dev, current_time); 	sys_port_trace_syscall_exit(K_SYSCALL_TGPIO_PORT_GET_TIME, tgpio_port_get_time, dev, current_time, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_tgpio_port_get_cycles_per_second(const struct device * dev, uint32_t * cycles);

__pinned_func
static inline int tgpio_port_get_cycles_per_second(const struct device * dev, uint32_t * cycles)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint32_t * val; } parm1 = { .val = cycles };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_TGPIO_PORT_GET_CYCLES_PER_SECOND);
	}
#endif
	compiler_barrier();
	return z_impl_tgpio_port_get_cycles_per_second(dev, cycles);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define tgpio_port_get_cycles_per_second(dev, cycles) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_TGPIO_PORT_GET_CYCLES_PER_SECOND, tgpio_port_get_cycles_per_second, dev, cycles); 	syscall__retval = tgpio_port_get_cycles_per_second(dev, cycles); 	sys_port_trace_syscall_exit(K_SYSCALL_TGPIO_PORT_GET_CYCLES_PER_SECOND, tgpio_port_get_cycles_per_second, dev, cycles, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_tgpio_pin_disable(const struct device * dev, uint32_t pin);

__pinned_func
static inline int tgpio_pin_disable(const struct device * dev, uint32_t pin)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint32_t val; } parm1 = { .val = pin };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_TGPIO_PIN_DISABLE);
	}
#endif
	compiler_barrier();
	return z_impl_tgpio_pin_disable(dev, pin);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define tgpio_pin_disable(dev, pin) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_TGPIO_PIN_DISABLE, tgpio_pin_disable, dev, pin); 	syscall__retval = tgpio_pin_disable(dev, pin); 	sys_port_trace_syscall_exit(K_SYSCALL_TGPIO_PIN_DISABLE, tgpio_pin_disable, dev, pin, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_tgpio_pin_config_ext_timestamp(const struct device * dev, uint32_t pin, uint32_t event_polarity);

__pinned_func
static inline int tgpio_pin_config_ext_timestamp(const struct device * dev, uint32_t pin, uint32_t event_polarity)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint32_t val; } parm1 = { .val = pin };
		union { uintptr_t x; uint32_t val; } parm2 = { .val = event_polarity };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_TGPIO_PIN_CONFIG_EXT_TIMESTAMP);
	}
#endif
	compiler_barrier();
	return z_impl_tgpio_pin_config_ext_timestamp(dev, pin, event_polarity);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define tgpio_pin_config_ext_timestamp(dev, pin, event_polarity) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_TGPIO_PIN_CONFIG_EXT_TIMESTAMP, tgpio_pin_config_ext_timestamp, dev, pin, event_polarity); 	syscall__retval = tgpio_pin_config_ext_timestamp(dev, pin, event_polarity); 	sys_port_trace_syscall_exit(K_SYSCALL_TGPIO_PIN_CONFIG_EXT_TIMESTAMP, tgpio_pin_config_ext_timestamp, dev, pin, event_polarity, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_tgpio_pin_periodic_output(const struct device * dev, uint32_t pin, uint64_t start_time, uint64_t repeat_interval, bool periodic_enable);

__pinned_func
static inline int tgpio_pin_periodic_output(const struct device * dev, uint32_t pin, uint64_t start_time, uint64_t repeat_interval, bool periodic_enable)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint32_t val; } parm1 = { .val = pin };
		union { uintptr_t x; uint64_t val; } parm2 = { .val = start_time };
		union { uintptr_t x; uint64_t val; } parm3 = { .val = repeat_interval };
		union { uintptr_t x; bool val; } parm4 = { .val = periodic_enable };
		return (int) arch_syscall_invoke5(parm0.x, parm1.x, parm2.x, parm3.x, parm4.x, K_SYSCALL_TGPIO_PIN_PERIODIC_OUTPUT);
	}
#endif
	compiler_barrier();
	return z_impl_tgpio_pin_periodic_output(dev, pin, start_time, repeat_interval, periodic_enable);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define tgpio_pin_periodic_output(dev, pin, start_time, repeat_interval, periodic_enable) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_TGPIO_PIN_PERIODIC_OUTPUT, tgpio_pin_periodic_output, dev, pin, start_time, repeat_interval, periodic_enable); 	syscall__retval = tgpio_pin_periodic_output(dev, pin, start_time, repeat_interval, periodic_enable); 	sys_port_trace_syscall_exit(K_SYSCALL_TGPIO_PIN_PERIODIC_OUTPUT, tgpio_pin_periodic_output, dev, pin, start_time, repeat_interval, periodic_enable, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_tgpio_pin_read_ts_ec(const struct device * dev, uint32_t pin, uint64_t * timestamp, uint64_t * event_count);

__pinned_func
static inline int tgpio_pin_read_ts_ec(const struct device * dev, uint32_t pin, uint64_t * timestamp, uint64_t * event_count)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint32_t val; } parm1 = { .val = pin };
		union { uintptr_t x; uint64_t * val; } parm2 = { .val = timestamp };
		union { uintptr_t x; uint64_t * val; } parm3 = { .val = event_count };
		return (int) arch_syscall_invoke4(parm0.x, parm1.x, parm2.x, parm3.x, K_SYSCALL_TGPIO_PIN_READ_TS_EC);
	}
#endif
	compiler_barrier();
	return z_impl_tgpio_pin_read_ts_ec(dev, pin, timestamp, event_count);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define tgpio_pin_read_ts_ec(dev, pin, timestamp, event_count) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_TGPIO_PIN_READ_TS_EC, tgpio_pin_read_ts_ec, dev, pin, timestamp, event_count); 	syscall__retval = tgpio_pin_read_ts_ec(dev, pin, timestamp, event_count); 	sys_port_trace_syscall_exit(K_SYSCALL_TGPIO_PIN_READ_TS_EC, tgpio_pin_read_ts_ec, dev, pin, timestamp, event_count, syscall__retval); 	syscall__retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */
