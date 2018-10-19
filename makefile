all: test.o sieve.o
	gcc -o test test.o sieve.o

test.o: test.c
	gcc -c test.c

sieve.o: sieve.c sieve.h
	gcc -c sieve.c

clean:
	rm test test.o sieve.o

run:
	./test
