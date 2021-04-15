#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x1bfd809d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xe0980738, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xb1235dd8, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xcb27f844, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x55a58fd5, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x32f79481, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xbbe7ec8e, __VMLINUX_SYMBOL_STR(media_entity_graph_walk_init) },
	{ 0xf54bd49b, __VMLINUX_SYMBOL_STR(lcm) },
	{ 0xc0c92be3, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xa4e9733a, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xcdf45f65, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2361b66a, __VMLINUX_SYMBOL_STR(dma_request_slave_channel) },
	{ 0xb960247c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4d9b6902, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x8315f968, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x207830c4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x44709a5, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xd99e7d5, __VMLINUX_SYMBOL_STR(media_entity_pads_init) },
	{ 0x79ad585d, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x691a738d, __VMLINUX_SYMBOL_STR(media_entity_graph_walk_next) },
	{ 0x21431aae, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x286ff7f1, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfb485186, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xb7f43840, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0xf83c7a1d, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x567c0130, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0xc070518, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0xd6891d4a, __VMLINUX_SYMBOL_STR(media_entity_graph_walk_start) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x6ec1596e, __VMLINUX_SYMBOL_STR(media_entity_pipeline_stop) },
	{ 0xcdb8eb3f, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1257215, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x195349e6, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0xab6ec41f, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0xd0cbc3ad, __VMLINUX_SYMBOL_STR(media_entity_remote_pad) },
	{ 0x48cefd61, __VMLINUX_SYMBOL_STR(vb2_dma_contig_memops) },
	{ 0xa54e2836, __VMLINUX_SYMBOL_STR(media_entity_graph_walk_cleanup) },
	{ 0xfe1565db, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf4085f58, __VMLINUX_SYMBOL_STR(vb2_ioctl_expbuf) },
	{ 0x6d916f18, __VMLINUX_SYMBOL_STR(media_entity_pipeline_start) },
	{ 0xe93f461d, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x62f4a117, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xacdb2358, __VMLINUX_SYMBOL_STR(media_entity_has_route) },
	{ 0xb1185c48, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x815bdf6f, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

