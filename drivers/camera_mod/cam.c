#include <linux/init.h>
#include <linux/module.h>

void call_module(void)
{
	printk("added the module");
}
EXPORT_SYMBOL(call_module);

static int hello_init(void)
{
	printk("Hello Kernel World....\n");

	return 0;
}
static void hello_exit(void)
{
	printk("Goodbye Kernel World\n");
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Saeed Mirzamohammadi, 2019");
MODULE_DESCRIPTION("Camera AOSP functions for Tabellion");

module_init(hello_init);
module_exit(hello_exit);

