/* Automatically generated by kernel/timeconst.pl */
/* Conversion constants for HZ == 128 */

#ifndef KERNEL_TIMECONST_H
#define KERNEL_TIMECONST_H

#include <linux/param.h>
#include <linux/types.h>

#if HZ != 128
#error "kernel/timeconst.h has the wrong HZ value!"
#endif

#define HZ_TO_MSEC_MUL32        U64_C(0xfa000000)
#define HZ_TO_MSEC_ADJ32        U64_C(0x1e000000)
#define HZ_TO_MSEC_SHR32        29
#define HZ_TO_MSEC_NUM          U64_C(125)
#define HZ_TO_MSEC_DEN          U64_C(16)
#define MSEC_TO_HZ_MUL32        U64_C(0x83126e98)
#define MSEC_TO_HZ_ADJ32        U64_C(0x3f7ced916)
#define MSEC_TO_HZ_SHR32        34
#define MSEC_TO_HZ_NUM          U64_C(16)
#define MSEC_TO_HZ_DEN          U64_C(125)
#define HZ_TO_USEC_MUL32        U64_C(0xf4240000)
#define HZ_TO_USEC_ADJ32        U64_C(0x40000)
#define HZ_TO_USEC_SHR32        19
#define HZ_TO_USEC_NUM          U64_C(15625)
#define HZ_TO_USEC_DEN          U64_C(2)
#define USEC_TO_HZ_MUL32        U64_C(0x8637bd06)
#define USEC_TO_HZ_ADJ32        U64_C(0xfffbce4217d)
#define USEC_TO_HZ_SHR32        44
#define USEC_TO_HZ_NUM          U64_C(2)
#define USEC_TO_HZ_DEN          U64_C(15625)

#endif /* KERNEL_TIMECONST_H */