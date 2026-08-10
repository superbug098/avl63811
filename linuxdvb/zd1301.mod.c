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
	{ 0xe0bb7856, "_dev_err" },
	{ 0x781f8de3, "mutex_unlock" },
	{ 0x44d69581, "usb_bulk_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0x52b9d5be, "mutex_lock" },
	{ 0x5855b91f, "__dynamic_dev_dbg" },
	{ 0x1b7d9cf4, "platform_device_unregister" },
	{ 0x16c46dbe, "module_put" },
	{ 0xf35fe64f, "i2c_unregister_device" },
	{ 0x29794cf0, "i2c_new_client_device" },
	{ 0xdd64e639, "strscpy" },
	{ 0x57f776e6, "zd1301_demod_get_dvb_frontend" },
	{ 0xe8de666e, "zd1301_demod_get_i2c_adapter" },
	{ 0x19de96bd, "try_module_get" },
	{ 0xf6abec46, "platform_device_register_full" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x709a90c5, "usb_deregister" },
	{ 0xb23dd6b6, "usb_register_driver" },
};

MODULE_INFO(depends, "dvb_usb_v2,zd1301_demod");

MODULE_ALIAS("usb:v0ACEp13A1d*dc*dsc*dp*ic*isc*ip*in*");
