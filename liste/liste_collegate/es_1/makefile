lista: main.o listaCollegata.o
	gcc -o lista main.o listaCollegata.o

main.o: main.c listaCollegata.h
	gcc -c main.c

listaCollegata.o: listaCollegata.c listaCollegata.h
	gcc -c listaCollegata.c