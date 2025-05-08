ifneq ($(KERNELRELEASE),)
	obj-m:=hellomod.o
else
	KERNELDIR?="/lib/modules/$(shell uname -r)/build/"
	PWD:=$(shell pwd)
all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) -I/usr/lib/gcc/x86_64-linux-gnu/5/include modules

clean:
	rm -rf *.o *.ko *~ *.mod.c *.order *.symvers

endif
