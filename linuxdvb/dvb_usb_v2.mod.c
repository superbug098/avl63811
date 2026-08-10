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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdefd6a4a, "module_layout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x54e506dd, "usb_alloc_urb" },
	{ 0x37215b19, "usb_free_urb" },
	{ 0x73c906b1, "usb_submit_urb" },
	{ 0x46be5a1e, "usb_kill_urb" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x44d69581, "usb_bulk_msg" },
	{ 0x781f8de3, "mutex_unlock" },
	{ 0x52b9d5be, "mutex_lock" },
	{ 0xd6f0d2e1, "param_ops_int" },
	{ 0x29c6dfe1, "dvb_dmx_swfilter_raw" },
	{ 0x2cf728c0, "dvb_dmx_swfilter_204" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x41aad71d, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x6bcb6e07, "__might_sleep" },
	{ 0xaa9a17cf, "dvb_dmx_swfilter" },
	{ 0x82e847bf, "dvb_frontend_resume" },
	{ 0x8d2bc3e8, "dvb_frontend_suspend" },
	{ 0x92997ed8, "_printk" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xb3ef5e8b, "i2c_del_adapter" },
	{ 0x24913ec6, "dvb_net_release" },
	{ 0x1769c74a, "rc_unregister_device" },
	{ 0xe3389d48, "cancel_delayed_work_sync" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x1f94b0ee, "request_firmware" },
	{ 0xd7b8ba93, "dvb_dmx_release" },
	{ 0x97a5d5c5, "dvb_dmxdev_release" },
	{ 0x33c8e066, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd7425285, "init_timer_key" },
	{ 0x22b531b3, "delayed_work_timer_fn" },
	{ 0xd0c45c84, "rc_free_device" },
	{ 0x620d8bbd, "rc_register_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x66a177ba, "rc_allocate_device" },
	{ 0x31b547d4, "dvb_unregister_adapter" },
	{ 0x3bc6e762, "media_device_cleanup" },
	{ 0xc3e89015, "media_device_unregister" },
	{ 0xf46c783a, "dvb_frontend_detach" },
	{ 0x395db726, "dvb_unregister_frontend" },
	{ 0x64342bc5, "__media_device_register" },
	{ 0xd723e501, "dvb_create_media_graph" },
	{ 0x5855b91f, "__dynamic_dev_dbg" },
	{ 0xbc2d6194, "dvb_register_frontend" },
	{ 0x3d52661, "dvb_net_init" },
	{ 0x401c76bd, "dvb_dmxdev_init" },
	{ 0x7bfd3cc4, "dvb_dmx_init" },
	{ 0x6b3bd586, "__media_device_usb_init" },
	{ 0xa3b03baa, "dvb_register_adapter" },
	{ 0x5bec1845, "i2c_add_adapter" },
	{ 0xdd64e639, "strscpy" },
	{ 0x25d53894, "_dev_info" },
	{ 0xe0bb7856, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3f714330, "__mutex_init" },
	{ 0x5815c92a, "kmem_cache_alloc_trace" },
	{ 0x95f110b3, "kmalloc_caches" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9926F3EE0FC2A72E4FE49C0");
