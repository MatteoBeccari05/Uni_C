vaccinazioni: listaCani.o main.o
	gcc -g -o vaccinazioni listaCani.o main.o

listaCani.o: listaCani.c listaCani.h
	gcc -g -c listaCani.c

main.o: main.c listaCani.h
	gcc -g -c main.c