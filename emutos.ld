/*
 * emutos.ld - Custom linker script for EmuTOS ROM
 *
 * Copyright (C) 2016-2017 The EmuTOS development team
 *
 * Authors:
 *  VRI   Vincent Rivière
 *
 * This file is distributed under the GPL, version 2 or at your
 * option any later version.  See doc/license.txt for details.
 */

/* Note: this linker script is preprocessed,
 * to allow #include, #define, #if, etc. */
#include "include/config.h"

#if !defined(MACHINE_RPI)
/* Create a plain binary file, without any header (not possible on ARM) */
OUTPUT_FORMAT(binary)
#endif

/* The ROM address depends on the target */
#if defined (MACHINE_AMIGA)
# define ROM_ORIGIN 0x00fc0000
#elif defined (MACHINE_RPI)
# define ROM_ORIGIN 0x00008000
#elif defined (TARGET_CART)
# define ROM_ORIGIN 0x00fa0000
#elif defined (TARGET_192)
# define ROM_ORIGIN 0x00fc0000
#else
# define ROM_ORIGIN 0x00e00000
#endif

/* Always assume there is a lot of ROM space, so the link will always succeed.
 * Then our padding tool will eventually report an overflow, with a better
 * diagnostic message than the linker.
 */
#define ROM_LENGTH 1M /* Maximum size before I/O area */

/* Memory regions of a typical Atari computer.
 * Only start addresses matter. Lengths just need to be large enough.
 */
MEMORY
{
    stram : ORIGIN = 0x00000000, LENGTH = 14M
    rom : ORIGIN = ROM_ORIGIN, LENGTH = ROM_LENGTH
#ifdef STATIC_ALT_RAM_ADDRESS
    altram : ORIGIN = STATIC_ALT_RAM_ADDRESS, LENGTH = 1M
#endif
}

/* Region used as read/write memory */
#if CONF_WITH_STATIC_ALT_RAM
# define REGION_RAM altram
#else
# define REGION_RAM stram
#endif

/* Regions used by EmuTOS sections */
#if EMUTOS_LIVES_IN_RAM
# define REGION_READ_ONLY   REGION_RAM
# define REGION_READ_WRITE  REGION_RAM
#else
# define REGION_READ_ONLY   rom
# define REGION_READ_WRITE  REGION_RAM
#endif

SECTIONS
{
    /* First section in ST-RAM */
    .first_stram :
    {
        /* System variables are located at fixed addresses */
#include "tosvars.ld"
        . = 0x800; /* Extend sysvars area upto end of supervisor-only RAM */
        _sysvars_end = .;
    } >stram

#if CONF_WITH_STATIC_ALT_RAM
    /* First section in static Alt-RAM */
    .first_altram :
    {
        __static_altram_start = .;
    } >altram
#endif

#if !defined (MACHINE_RPI)
    /* This section is the internal BIOS stack.
     * It will *not* be cleared on startup or reset.
     */
    .stack :
    {
        _stkbot = .;
        . += 2K;
        _stktop = .;
    } >REGION_READ_WRITE
#endif
    /* This section is located as low as possible in ST-RAM,
     * but after evental BIOS stack.
     * Variables requiring very low addresses, while being accessible
     * from user mode, can be put here.
     * Warning: this area is not cleared at startup.
     */
    .low_stram :
    {
        __low_stram_start = .;
        obj/lowstram.o(.bss COMMON)
        __low_stram_end = .;
        ASSERT(ABSOLUTE(_shifty) < 0x8000, "error: bad _shifty address");
        ASSERT((ABSOLUTE(_dskbuf) & 3) == 0, "error: bad _dskbuf alignment");
    } >stram

    /* The TEXT segment contains EmuTOS executable code and read-only data.
     * It is always read-only, so it can safely live in ROM.
     */
#if defined (MACHINE_RPI)
     .text ROM_ORIGIN :
#else
     .text :
#endif
    {
        CREATE_OBJECT_SYMBOLS
        __text = .;
        *(.text)
        *(.rodata .rodata.*) /* Only present in ELF objects */
        __etext = .;
    } >REGION_READ_ONLY

    /* FIXME: Our DATA segment is currently read-only.
     * It currently lives in the ROM, just after the TEXT segment.
     * This means that initialized global variables can't be modified.
     * Since a read-only DATA segment is useless, we try to keep it empty by
     * making all initialized variables const, so they go to the TEXT segment.
     */
    .data :
    {
        __data = .;
        *(.data)
        __edata = .;
    } >REGION_READ_ONLY

    /* The BSS segment contains uninitialized global variables.
     * It will be cleared by the startup code.
     */
    .bss :
    {
        __bss = .;
        *(.bss COMMON)
        __ebss = .;
    } >REGION_READ_WRITE

#if defined (MACHINE_RPI)
    /* On the RPI we put the BIOS stack /after/ the rom data.
     * We have more RAM, so make it a little bigger than in the ST case
     */
    .stack :
    {
        _stkbot = .;
        . += 32K;
        _stktop = .;
    } >REGION_READ_WRITE
#endif

    /* This section is always the last one stored in ST-RAM.
     * It is usually empty, just used to calculate the last address
     * of ST-RAM statically used by EmuTOS.
     */
    .laststram :
    {
        __end_os_stram = .;
    } >stram

#if CONF_WITH_STATIC_ALT_RAM
    /* Last section in static Alt-RAM */
    .last_altram :
    {
        __static_altram_end = .;
    } >altram
#endif

    /* Discard the following ELF sections.
     * Some of them may be present in ELF libgcc.a.
     */
    /DISCARD/ :
    {
        *(.comment)
#if 0
        *(.debug*)
#endif
    }
}

#ifdef ELF_TOOLCHAIN
/* Our code is compiled with -fleading-underscore, so the references to external
 * libraries will include a leading underscore. However, libgcc was not compiled
 * with that option, so its symbols do not start with a leading underscore. So
 * we need to define leading-underscore aliases to the no-leading-underscore
 * functions in libgcc.
 */
#define DEFINE_SYMBOL_ALIAS(alias, impl) EXTERN(impl) PROVIDE(alias = impl);
#define ELF_LIB_REF(symbol) DEFINE_SYMBOL_ALIAS(_##symbol, symbol)
#if !defined (MACHINE_RPI)
ELF_LIB_REF(__mulsi3)
ELF_LIB_REF(__divsi3)
ELF_LIB_REF(__modsi3)
ELF_LIB_REF(__udivsi3)
ELF_LIB_REF(__umodsi3)
ELF_LIB_REF(__aeabi_udiv)
ELF_LIB_REF(__aeabi_udivmod)
#endif
ELF_LIB_REF(__aeabi_idiv)
ELF_LIB_REF(__aeabi_idivmod)
ELF_LIB_REF(__aeabi_uidiv)
ELF_LIB_REF(__aeabi_uidivmod)
#endif
