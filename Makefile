.PHONY: all static debug clean

all: static
static: libdict.a

libdict.a: src/set.c src/new.c src/destroy.c src/get.c src/del.c src/clear.c src/internals.c
	gcc -I include -o src/set.o -c src/set.c
	gcc -I include -o src/new.o -c src/new.c
	gcc -I include -o src/destroy.o -c src/destroy.c
	gcc -I include -o src/get.o -c src/get.c
	gcc -I include -o src/del.o -c src/del.c
	gcc -I include -o src/clear.o -c src/clear.c
	gcc -I include -o src/internals.o -c src/internals.c
	ar -rs libdict.a src/*.o

examples: libdict.a examples/simple.c examples/advanced.c
	gcc -I include -L. -o examples/simple examples/simple.c -ldict
	gcc -I include -L. -o examples/advanced examples/advanced.c -ldict

clean:
	rm -f src/*.o
	rm -f libdict.a
	rm -f examples/simple
	rm -f examples/advanced
