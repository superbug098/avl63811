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
	{ 0x2ba140ea, "ir_raw_event_handle" },
	{ 0x943b88da, "ir_raw_event_store_with_filter" },
	{ 0x43927b25, "rc_keydown" },
	{ 0x14a905e1, "i2c_adapter_type" },
	{ 0x8eae7d02, "mutex_lock_interruptible" },
	{ 0x781f8de3, "mutex_unlock" },
	{ 0x345b6057, "usb_control_msg" },
	{ 0x52b9d5be, "mutex_lock" },
	{ 0x1b7d9cf4, "platform_device_unregister" },
	{ 0xf6abec46, "platform_device_register_full" },
	{ 0x4829a47e, "memcpy" },
	{ 0x16c46dbe, "module_put" },
	{ 0x92997ed8, "_printk" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xf35fe64f, "i2c_unregister_device" },
	{ 0x19de96bd, "try_module_get" },
	{ 0x29794cf0, "i2c_new_client_device" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdd64e639, "strscpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1c14d019, "usb_clear_halt" },
	{ 0x5855b91f, "__dynamic_dev_dbg" },
	{ 0xe0bb7856, "_dev_err" },
	{ 0x709a90c5, "usb_deregister" },
	{ 0xb23dd6b6, "usb_register_driver" },
};

MODULE_INFO(depends, "dvb_usb_v2");

MODULE_ALIAS("usb:v0BDAp2831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0161d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp2832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp2838d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4DpB803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00E0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4DpC803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D19p1101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6680d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6F0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6F12d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D19p1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00D7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3A8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD393d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D19p1104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp0620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp0650d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD394d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6A03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4DpA803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p707Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD395d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD39Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3AFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4DpD803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5654pCA42d*dc*dsc*dp*ic*isc*ip*in*");
