src := $(shell ls *.c)
objs := $(patsubst %.c,%.o,$(src))

LinkList: $(objs)
	gcc -g -o $@ $^

%.o: %.c
	gcc -c -g -o $@ $<

clean:
	rm -rf LinkList *.o
