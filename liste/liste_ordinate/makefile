lista: main.o lista.o
	gcc -o lista main.o lista.o

main.o: main.c lista.h
	gcc -c main.c

matrici.o: lista.c lista.h
	gcc -c lista.c