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
	{ 0x85cf280e, __VMLINUX_SYMBOL_STR(mptcp_unregister_path_manager) },
	{ 0x605d71bb, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x3a0803e8, __VMLINUX_SYMBOL_STR(mptcp_register_path_manager) },
	{ 0x889abdb4, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x94944e1, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xaccabc6a, __VMLINUX_SYMBOL_STR(in4_pton) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x143687b2, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf82cfd1a, __VMLINUX_SYMBOL_STR(proc_dostring) },
	{ 0x37f82f4a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe4e3ed59, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf11e4407, __VMLINUX_SYMBOL_STR(mptcp_fallback_default) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x59b3fa05, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x962cf290, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x38b9bd48, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x22559a3d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4e21a705, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xde9aa5d3, __VMLINUX_SYMBOL_STR(mptcp_init4_subsockets) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x107359f8, __VMLINUX_SYMBOL_STR(mptcp_wq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeb8cf1b4, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x92d0bde, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0x35666d6a, __VMLINUX_SYMBOL_STR(sysctl_mptcp_debug) },
	{ 0x86002fbb, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x8b900f3b, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "632F5703821988765531F41");
