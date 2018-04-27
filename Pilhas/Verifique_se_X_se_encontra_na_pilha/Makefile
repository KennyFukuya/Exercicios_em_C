all: main

main: main.c pilha.o
	gcc -Wall -o main main.c pilha.o -I.

pilha.o: pilha.c
	gcc -Wall -c pilha.c -I.

run:
	./main

clean:
	rm -f pilha.o main
