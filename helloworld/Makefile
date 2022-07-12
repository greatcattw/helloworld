cfilename=helloworld

all:$(cfilename)

$(cfilename):$(cfilename).o
	cc -o $(cfilename).out $^

.PHONY:clean

clean:
	rm $(cfilename).out *.o *.~
