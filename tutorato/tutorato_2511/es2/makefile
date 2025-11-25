app : main.o rubrica.o 
	gcc -g -o app main.o rubrica.o

main.o : main.c rubrica.h
	gcc -g -c main.c

persona.o : rubrica.c rubrica.h
	gcc -g -c rubrica.c