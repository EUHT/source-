/*
 * File      : cpu.c
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2009, RT-Thread Development Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rt-thread.org/license/LICENSE
 *
 * Change Logs:
 * Date           Author       Notes
 * 2009-01-05     Bernard      first version
 * 2010-02-04     Magicoe      Edit for LPC17xx Series
 * 2011-08-06     Magicoe      Manded for PK40X256VLQ100
 */

#include <rtthread.h>

/**
 * @addtogroup PK40X256VLQ100
 */
/*@{*/

/**
 * reset cpu by dog's time-out
 *
 */
void rt_hw_cpu_reset()
{
	/*NOTREACHED*/
}

/**
 *  shutdown CPU
 *
 */
void rt_hw_cpu_shutdown()
{
	rt_kprintf("shutdown...\n");

	RT_ASSERT(0);
}

/*@}*/
