cfilename=helloworld

ifeq ($(CC),cc)
CC:=$(CROSS_COMPILE)gcc
endif

all:$(cfilename)

$(cfilename):$(cfilename).o
	echo $(CC)
	$(CC) -o $(cfilename).out $^	

.PHONY:clean

clean:
	rm $(cfilename).out *.o *.~
