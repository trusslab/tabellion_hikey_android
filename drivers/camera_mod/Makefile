#KERNEL_DIR=/home/viulian/android_platform/kernel-2.1.A.0.435/kernel
KERNEL_DIR=/media/saeed/44b2442d-33d0-4323-ace7-b6be38e7c940/aosp_nov7/kernel/linaro/hisilicon/

obj-m := cam.o
PWD := $(shell pwd)
default:
	$(MAKE) ARCH=arm64 CROSS_COMPILE=/media/saeed/44b2442d-33d0-4323-ace7-b6be38e7c940/aosp_nov7/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin/aarch64-linux-android- -C $(KERNEL_DIR) SUBDIRS=$(PWD) modules
clean:
	$(MAKE) -C $(KERNEL_DIR) SUBDIRS=$(PWD) clean

