KDIR := /lib/modules/$(shell uname -r)/build/
PWD := $(shell pwd)

CONFIG_IR_NUVOTON=m
obj-$(CONFIG_IR_NUVOTON) += nuvoton-cir.o

default:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) clean
