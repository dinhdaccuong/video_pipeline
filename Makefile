
TOOLS := /media/cuongd/linux-build/petalinux-installed/tools/linux-i386/gcc-arm-linux-gnueabi/bin
KERNEL_SOURCE_DIR := /media/cuongd/linux-build/xilinx-zc702-2017.2/build/tmp/work/plnx_arm-xilinx-linux-gnueabi/linux-xlnx/4.9-xilinx-v2017.2+gitAUTOINC+5d029fdc25-r0/linux-plnx_arm-standard-build

export ARCH:=arm
export CROSS_COMPILE:=${TOOLS}/arm-linux-gnueabihf-

INCLUDE_FILE := xilinx-vipp.h \
				xilinx-dma.h \
				xilinx-vip.h

obj-m := xilinx-vipp.o

xilinx-vipp-objs := xilinx-vipp.o \
					xilinx-dma.o \
					xilinx-vip.o

all:
	make -C ${KERNEL_SOURCE_DIR} M=${PWD} modules
clean:
	make -C ${KERNEL_SOURCE_DIR} M=${PWD} clean