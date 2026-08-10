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
	{ 0xdff7feb5, "dvb_usbv2_reset_resume" },
	{ 0x7a237c6a, "dvb_usbv2_resume" },
	{ 0x200ae119, "dvb_usbv2_suspend" },
	{ 0xeee13dc6, "dvb_usbv2_disconnect" },
	{ 0x475fc825, "dvb_usbv2_probe" },
	{ 0x21e71480, "param_array_ops" },
	{ 0xdb71d77d, "param_ops_short" },
	{ 0xd6f0d2e1, "param_ops_int" },
	{ 0x43927b25, "rc_keydown" },
	{ 0x6dd42ce, "_dev_warn" },
	{ 0xe6cef732, "rc_repeat" },
	{ 0x712285c9, "regmap_bulk_read" },
	{ 0x8eae7d02, "mutex_lock_interruptible" },
	{ 0x73b71613, "dvb_usbv2_generic_rw_locked" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3f714330, "__mutex_init" },
	{ 0x899589b, "regmap_bulk_write" },
	{ 0x318b1b15, "regmap_update_bits_base" },
	{ 0x92997ed8, "_printk" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x86333ee1, "dvb_module_release" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x584693b2, "dvb_module_probe" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x23aa1c5d, "regmap_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0x781f8de3, "mutex_unlock" },
	{ 0x52b9d5be, "mutex_lock" },
	{ 0xe0bb7856, "_dev_err" },
	{ 0x1dd14970, "regmap_exit" },
	{ 0x5855b91f, "__dynamic_dev_dbg" },
	{ 0xca9dd256, "__regmap_init" },
	{ 0xfa506419, "usb_string" },
	{ 0x709a90c5, "usb_deregister" },
	{ 0xb23dd6b6, "usb_register_driver" },
};

MODULE_INFO(depends, "dvb_usb_v2");

MODULE_ALIAS("usb:v15A4p9015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A4p9016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p022Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE399d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0069d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pC160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AE7p0381d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1462p8801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B9p8000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1462p8807d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE396d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE39Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE395d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A4p901Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp850Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA805d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE397d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pC810d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p4012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pC161d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE39Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6A04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE383d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE39Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp815Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0099d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp850Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp9016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE401d*dc*dsc*dp*ic*isc*ip*in*");
