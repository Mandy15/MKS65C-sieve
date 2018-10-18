all: test.o sieve.o
	gcc -o text.o sieve.o

test.o: test.o
	gcc -c test.c

sieve.o: sieve.c sieve.h
	gcc -c sieve.c

clean:
	rm test test.o sieve.o

run:
	./test
