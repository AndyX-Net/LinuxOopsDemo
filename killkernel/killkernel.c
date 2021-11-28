/*  
 *  kill-kernel.c - The simplest kernel module to crash kernel.
 *  Refer: https://www.dedoimedo.com/computers/crash-analyze.html
 */

#include <linux/module.h>    /* Needed by all modules */
#include <linux/kernel.h>    /* Needed for KERN_INFO */

int init_module(void)
{
    printk(KERN_INFO "Hello world. Now we crash.\n");
    panic("Down we go, panic called!");

    return 0;
}

void cleanup_module(void)
{
    printk(KERN_INFO "Goodbye world.\n");
}
