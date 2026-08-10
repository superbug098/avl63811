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
	{ 0x475fc825, "dvb_usbv2_probe" },
	{ 0x21e71480, "param_array_ops" },
	{ 0xdb71d77d, "param_ops_short" },
	{ 0xd6f0d2e1, "param_ops_int" },
	{ 0x7a237c6a, "dvb_usbv2_resume" },
	{ 0x200ae119, "dvb_usbv2_suspend" },
	{ 0xeee13dc6, "dvb_usbv2_disconnect" },
	{ 0x91e966fc, "dvb_ca_en50221_release" },
	{ 0x43927b25, "rc_keydown" },
	{ 0x52b9d5be, "mutex_lock" },
	{ 0xa0451e5f, "dvb_ca_en50221_init" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x345b6057, "usb_control_msg" },
	{ 0x92997ed8, "_printk" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xf9a482f9, "msleep" },
	{ 0x781f8de3, "mutex_unlock" },
	{ 0x8eae7d02, "mutex_lock_interruptible" },
	{ 0x3f714330, "__mutex_init" },
	{ 0xf6c31c9f, "cypress_load_firmware" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0x5815c92a, "kmem_cache_alloc_trace" },
	{ 0x95f110b3, "kmalloc_caches" },
	{ 0x709a90c5, "usb_deregister" },
	{ 0xb23dd6b6, "usb_register_driver" },
};

MODULE_INFO(depends, "dvb_usb_v2,cypress_firmware");

MODULE_ALIAS("usb:v13D3p0CCDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14F7p0003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "119AC96216A951B1E8DDB15");
