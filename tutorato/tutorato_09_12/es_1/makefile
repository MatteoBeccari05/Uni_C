prog: main.o matrici.o
	gcc -o prog main.o matrici.o

main.o: main.c matrici.h
	gcc -c main.c

matrici.o: matrici.c matrici.h
	gcc -c matrici.c