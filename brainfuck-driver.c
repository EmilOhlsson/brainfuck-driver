#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init brainfuck_init(void)
{
	printk(KERN_INFO "Hello, world\n");
	return 0;
}

static void __exit brainfuck_exit(void)
{
	printk(KERN_INFO "Goodbye\n");
}

module_init(brainfuck_init);
module_exit(brainfuck_exit);
