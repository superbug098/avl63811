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

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdefd6a4a, "module_layout" },
	{ 0xeee13dc6, "dvb_usbv2_disconnect" },
	{ 0x475fc825, "dvb_usbv2_probe" },
	{ 0x21e71480, "param_array_ops" },
	{ 0xdb71d77d, "param_ops_short" },
	{ 0xd6f0d2e1, "param_ops_int" },
	{ 0x43927b25, "rc_keydown" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x1f94b0ee, "request_firmware" },
	{ 0x46be5a1e, "usb_kill_urb" },
	{ 0x37215b19, "usb_free_urb" },
	{ 0x73c906b1, "usb_submit_urb" },
	{ 0x54e506dd, "usb_alloc_urb" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdd64e639, "strscpy" },
	{ 0xf46c783a, "dvb_frontend_detach" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x52b9d5be, "mutex_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x781f8de3, "mutex_unlock" },
	{ 0x73b71613, "dvb_usbv2_generic_rw_locked" },
	{ 0x8eae7d02, "mutex_lock_interruptible" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0x345b6057, "usb_control_msg" },
	{ 0x5815c92a, "kmem_cache_alloc_trace" },
	{ 0x95f110b3, "kmalloc_caches" },
	{ 0xe9e7ce6d, "usb_set_interface" },
	{ 0xdecd0ba5, "usb_reset_configuration" },
	{ 0x709a90c5, "usb_deregister" },
	{ 0xb23dd6b6, "usb_register_driver" },
};

MODULE_INFO(depends, "dvb_usb_v2");

MODULE_ALIAS("usb:v3344p1122d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3344p1120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3344p22F0d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2AA6D3A8B78B6A372A89BC6");
