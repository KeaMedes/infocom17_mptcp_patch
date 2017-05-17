#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd40eee65, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd42d6ee9, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xba927d64, __VMLINUX_SYMBOL_STR(mptcp_unregister_scheduler) },
	{ 0x59dceed5, __VMLINUX_SYMBOL_STR(mptcp_register_scheduler) },
	{ 0x23ec9cd, __VMLINUX_SYMBOL_STR(tcp_current_mss) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CE816DBDBF9B69B40993A7E");
