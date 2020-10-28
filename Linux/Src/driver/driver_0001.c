/*************************************************************************
    > File Name: driver_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

static int __init HelloWorld_init(void)
{
	printk("init module\n");
	printk("Hello World!\n");
	return 0;	
}

static void __exit HelloWorld_exit(void)
{
	printk("exit module!\n");
}

module_init(HelloWorld_init);
module_exit(HelloWorld_exit);
