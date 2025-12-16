cronologia: listaUrl.o main.o
	gcc -g -o cronologia listaUrl.o main.o

listaUrl.o: listaUrl.c listaUrl.h
	gcc -g -c listaUrl.c

main.o: main.c listaUrl.h
	gcc -g -c main.c