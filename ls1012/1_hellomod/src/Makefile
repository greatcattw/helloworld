ifneq ($(KERNELRELEASE),)
	obj-m:=hellomod.o
else
	KERNELDIR?="/home/forlinx/work/OK10xx-linux-fs/flexbuild/build/linux/linux/arm64/output"
	PWD:=$(shell pwd)
all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

clean:
	rm -rf *.o *.ko *~ *.mod.c *.order *.symvers

endif
