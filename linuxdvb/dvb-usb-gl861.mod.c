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
	{ 0x37a0cba, "kfree" },
	{ 0xff0fcaad, "i2c_transfer" },
	{ 0x5815c92a, "kmem_cache_alloc_trace" },
	{ 0x95f110b3, "kmalloc_caches" },
	{ 0xa95da329, "i2c_transfer_buffer_flags" },
	{ 0xf9a482f9, "msleep" },
	{ 0x86333ee1, "dvb_module_release" },
	{ 0x584693b2, "dvb_module_probe" },
	{ 0x781f8de3, "mutex_unlock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x345b6057, "usb_control_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0x52b9d5be, "mutex_lock" },
	{ 0x5855b91f, "__dynamic_dev_dbg" },
	{ 0xe9e7ce6d, "usb_set_interface" },
	{ 0x92997ed8, "_printk" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x709a90c5, "usb_deregister" },
	{ 0xb23dd6b6, "usb_register_driver" },
};

MODULE_INFO(depends, "dvb_usb_v2");

MODULE_ALIAS("usb:v0DB0p5581d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E3pF170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7A69p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5A12607C3E23931C8B713AC");
