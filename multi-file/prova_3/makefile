frazioni: frazioni.o main.o
	gcc -g -o frazioni frazioni.o main.o

frazione.o: frazioni.c frazioni.h
	gcc -g -c frazioni.c

main.o: main.c frazioni.h
	gcc -g -c main.c