/*****************************************************
 * PS5 SDK - 1.02 Kernel Offsets
 * Contains offsets for 1.02.
 ****************************************************/

#ifndef PS5SDK_KERNEL_OFFSETS_102_H
#define PS5SDK_KERNEL_OFFSETS_102_H

// Proc field offsets
#define OFFSET_KERNEL_PROC_P_UCRED          0x40
#define OFFSET_KERNEL_PROC_P_PID            0xBC

// Ucred field offsets
#define OFFSET_KERNEL_UCRED_CR_UID          0x04
#define OFFSET_KERNEL_UCRED_CR_RUID         0x08
#define OFFSET_KERNEL_UCRED_CR_SVUID        0x0C
#define OFFSET_KERNEL_UCRED_CR_RGID         0x14
#define OFFSET_KERNEL_UCRED_CR_SVGID        0x18

// Offsets from kernel .data base
#define OFFSET_KERNEL_DATA_BASE_ALLPROC     0x26D1Bf8
#define OFFSET_KERNEL_DATA_BASE_QA_FLAGS    0x6241098

#endif // PS5SDK_KERNEL_OFFSETS_102_H