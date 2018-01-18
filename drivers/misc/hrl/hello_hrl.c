#include <linux/module.h> /*required by all modules*/
#include <linux/kernel.h> /*required for KERN_INFO*/
#include <linux/init.h>   /*Required for macros*/

// License type affects runtime behaviour 
MODULE_LICENSE("DUAL BSD/GPL");
MODULE_AUTHOR("Hong Kim");
MODULE_DESCRIPTION("HRL Hello World Driver");
MODULE_VERSION("0.0");


static int __init hello_hrl_module_init(void) 
{
	printk("Hello HRL user, sample module is installed! n"); 
	return 0; 
}

static void __exit hello_hrl_module_cleaup(void) 
{
	printk("Good-bye HRL user, sample module was removed!n"); 
}

module_init(hello_hrl_module_init);
module_exit(hello_hrl_module_cleaup);

