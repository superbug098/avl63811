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
	{ 0x8eae7d02, "mutex_lock_interruptible" },
	{ 0x7a237c6a, "dvb_usbv2_resume" },
	{ 0x200ae119, "dvb_usbv2_suspend" },
	{ 0xeee13dc6, "dvb_usbv2_disconnect" },
	{ 0x475fc825, "dvb_usbv2_probe" },
	{ 0x21e71480, "param_array_ops" },
	{ 0xdb71d77d, "param_ops_short" },
	{ 0xd6f0d2e1, "param_ops_int" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe9e7ce6d, "usb_set_interface" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0xff0fcaad, "i2c_transfer" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x9c5a3cca, "media_device_register_entity" },
	{ 0x5bd599d1, "media_entity_pads_init" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x3f714330, "__mutex_init" },
	{ 0x709a90c5, "usb_deregister" },
	{ 0xb23dd6b6, "usb_register_driver" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x92997ed8, "_printk" },
	{ 0x781f8de3, "mutex_unlock" },
	{ 0xc9be9272, "dvb_usbv2_generic_rw" },
	{ 0x488635b0, "dvb_usbv2_generic_write" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x52b9d5be, "mutex_lock" },
};

MODULE_INFO(depends, "dvb_usb_v2,tveeprom");

MODULE_ALIAS("usb:v2040pC600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC603d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC604d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC609d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC60Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC60Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC60Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC653d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC65Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB703d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB753d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB763d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB764d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD853d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD854d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD863d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD864d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8D4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8E3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8E4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC61Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC61Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB757d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB767d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5305457904F8455EB138F6C");
