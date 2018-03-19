/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _LINUX_VIRTIO_BALLOON_H
#define _LINUX_VIRTIO_BALLOON_H
#define LINUX_VIRTIO_BALLOON_H
#define LINUX_VIRTIO_BALLOON_H_
#define _UAPI_LINUX_VIRTIO_BALLOON_H
#define _UAPI_LINUX_VIRTIO_BALLOON_H_
#define _LINUX_VIRTIO_BALLOON_H_
#include <museum/6.0.1/bionic/libc/linux/virtio_ids.h>
#include <museum/6.0.1/bionic/libc/linux/virtio_config.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_BALLOON_F_MUST_TELL_HOST 0
#define VIRTIO_BALLOON_F_STATS_VQ 1
#define VIRTIO_BALLOON_PFN_SHIFT 12
struct virtio_balloon_config {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __le32 num_pages;
  __le32 actual;
};
#define VIRTIO_BALLOON_S_SWAP_IN 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_BALLOON_S_SWAP_OUT 1
#define VIRTIO_BALLOON_S_MAJFLT 2
#define VIRTIO_BALLOON_S_MINFLT 3
#define VIRTIO_BALLOON_S_MEMFREE 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_BALLOON_S_MEMTOT 5
#define VIRTIO_BALLOON_S_NR 6
struct virtio_balloon_stat {
  __u16 tag;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 val;
} __attribute__((packed));
#endif