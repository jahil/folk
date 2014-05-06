obj-m += folk.o
folk-y = folk_main.o
folk-y+= tracks/trk1.o
folk-y+= tracks/trk2.o
folk-y+= tracks/trk3.o
folk-y+= tracks/trk4.o
folk-y+= tracks/trk5.o
folk-y+= tracks/trk6.o

KERNELDIR	?=  /lib/modules/$(shell uname -r)/build
PWD		:= $(shell pwd)

all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD)

clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean
