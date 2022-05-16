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
	{ 0x38f431f2, "module_layout" },
	{ 0x46fb29a7, "usb_deregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x49362568, "tty_driver_kref_put" },
	{ 0x954647ae, "tty_unregister_driver" },
	{ 0x417519dd, "usb_register_driver" },
	{ 0x80b72188, "tty_register_driver" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb09b2451, "__tty_alloc_driver" },
	{ 0xbc281da0, "tty_port_register_device" },
	{ 0xd5b13b59, "usb_get_intf" },
	{ 0xa6e0af0e, "usb_driver_claim_interface" },
	{ 0x143c7817, "_dev_info" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8653f8c9, "_dev_warn" },
	{ 0x1c3f3ee0, "device_create_file" },
	{ 0xf9e260ca, "usb_alloc_urb" },
	{ 0xafd25b6a, "usb_alloc_coherent" },
	{ 0x2543ae38, "tty_port_init" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x45eb64bf, "usb_ifnum_to_if" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x5f754e5a, "memset" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xa12d6e96, "kmem_cache_alloc_trace" },
	{ 0x6d0b5a7f, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x71c90087, "memcmp" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd914d5ec, "usb_autopm_put_interface" },
	{ 0x83a2674e, "usb_autopm_get_interface" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7892ea7f, "usb_control_msg" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xcddca8da, "usb_driver_release_interface" },
	{ 0x6a31172a, "usb_free_coherent" },
	{ 0x9c9ecd03, "usb_free_urb" },
	{ 0x1e6739e2, "tty_unregister_device" },
	{ 0x1162eac7, "tty_kref_put" },
	{ 0x8141d529, "tty_vhangup" },
	{ 0xb6e28a6e, "tty_port_tty_get" },
	{ 0xd6ccf7d8, "device_remove_file" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fd9cdac, "usb_put_intf" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xacfa3e3f, "tty_standard_install" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x2864a0e5, "tty_port_open" },
	{ 0xb29dad8b, "tty_port_close" },
	{ 0x8e91bb09, "usb_autopm_get_interface_async" },
	{ 0x6b20ccd1, "tty_port_hangup" },
	{ 0x50d000e7, "tty_port_tty_wakeup" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4044b73d, "tty_flip_buffer_push" },
	{ 0xdbe776ec, "tty_insert_flip_string_fixed_flag" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd24303e8, "tty_port_tty_hangup" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbcfa8008, "tty_port_put" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xc2b14c73, "usb_kill_urb" },
	{ 0xe970eab8, "usb_autopm_put_interface_async" },
	{ 0xd86f9518, "_dev_err" },
	{ 0xb55efd97, "usb_submit_urb" },
	{ 0x9d669763, "memcpy" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v04E2p1410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1411d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1412d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1414d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1420d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1422d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1403d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4D0515D6C05690E39C336B2");
