app : main.o persona.o 
	gcc -g -o app main.o persona.o

main.o : main.c persona.h
	gcc -g -c main.c

persona.o : persona.c persona.h
	gcc -g -c persona.c