fatture: listaVeicoli.o main.o
	gcc -g -o fatture listaVeicoli.o main.o

listaVeicoli.o: listaVeicoli.c listaVeicoli.h
	gcc -g -c listaVeicoli.c

main.o: main.c listaVeicoli.h
	gcc -g -c main.c