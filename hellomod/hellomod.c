#include <linux/kernel.h> 
#include <linux/init.h>
#include <linux/module.h> 
#include <linux/version.h>
 
MODULE_DESCRIPTION("Hello Module");
MODULE_AUTHOR("Greatcat");
MODULE_LICENSE("GPL");
 
static int __init hello_init(void)
{
    printk("Hello, world\n");
    return 0;
}
 
static void __exit hello_exit(void)
{
    printk(KERN_INFO "Goodbye\n");
}
 
module_init(hello_init);
module_exit(hello_exit);
