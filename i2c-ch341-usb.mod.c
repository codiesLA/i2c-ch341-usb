#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6ad771c3, "module_layout" },
	{ 0xf757d730, "param_ops_uint" },
	{ 0x458f49d8, "usb_deregister" },
	{ 0xb0a1b0c0, "usb_register_driver" },
	{ 0xd10a0a5f, "kthread_create_on_node" },
	{ 0x4ef36301, "gpiod_export" },
	{ 0x4ac2318d, "gpio_to_desc" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x99073b5a, "irq_set_chip" },
	{ 0x43f941d5, "irq_get_irq_data" },
	{ 0xf1effff1, "gpiochip_add_data_with_key" },
	{ 0x463d8290, "__irq_alloc_descs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa6490b0d, "i2c_add_adapter" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1f861c5f, "usb_alloc_urb" },
	{ 0x4f00afd3, "kmem_cache_alloc_trace" },
	{ 0xd69e5a4f, "kmalloc_caches" },
	{ 0xce0dc0cc, "usb_get_dev" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa22a96f7, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1c5b1f28, "irq_free_descs" },
	{ 0x79d69dc5, "i2c_del_adapter" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5ab5b23, "usb_put_dev" },
	{ 0x88bce085, "usb_free_urb" },
	{ 0x70220879, "gpiochip_remove" },
	{ 0xfe990052, "gpio_free" },
	{ 0x3d37116f, "wake_up_process" },
	{ 0x8a23e3a5, "kthread_stop" },
	{ 0xbd70750d, "usb_submit_urb" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb53926fe, "handle_simple_irq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8b0365e4, "__dynamic_dev_dbg" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbf7219a9, "gpiochip_get_data" },
	{ 0xac7ab837, "_dev_err" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x42a30b71, "usb_bulk_msg" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xe740fbad, "_dev_info" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1A86p5512d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3C373C3C95A560D888222BA");
