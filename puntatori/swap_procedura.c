#include <stdio.h>

/*
IL PROGRAMMA NON ESEGUIRA' LO SWAP 
DATO CHE NON ESEGUITO TRAMITE L'ULTILIZZO DEI PUNTATORI
*/
void swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
}

int main()
{
    int a = 2, b = 3, t;
    swap(a, b);
    printf("A: %d\nB: %d\n", a, b);
}
