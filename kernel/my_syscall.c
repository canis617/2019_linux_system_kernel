#include <linux/kernel.h>

asmlinkage long sys_mycall(void) {
	printk("System Call Example!\n");
	
	return 0;
}

