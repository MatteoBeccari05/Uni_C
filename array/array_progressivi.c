/*Scrivere un programma che inizializzi un array di 10 elementi ai 10 numeri che seguono
un numero richiesto all’utente, e poi stampi l’array.*/

#include <stdio.h>
#define DIM 10

int main()
{
    int n;
    int array[DIM];

    printf("Inserire il numero: ");
    scanf("%d", &n);

    for (int i = 0; i < DIM; i++)
    {
        array[i] = n + i;
    }

    for (int i = 0; i < DIM; i++)
    {
        printf("%d\n", array[i]);
    }
}