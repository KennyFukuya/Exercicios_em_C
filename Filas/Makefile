all: main

main: main.c fila.o
	gcc -Wall -o main main.c fila.o -I.

fila.o: fila.c
	gcc -Wall -c fila.c -I.

run:
	./main

clean:
	rm -rf *.o main
