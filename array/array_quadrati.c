/*Scrivere un programma che inizializzi un array di 10 elementi ai quadrati dei primi 10
numeri naturali, e poi stampi l’array.*/

#include <stdio.h>
#define DIM 10

int main()
{
    int array[DIM];

    for (int i = 0; i < DIM; i++)
    {
        array[i] = (i+1)*(i+1);
    }

    for (int i = 0; i < DIM; i++)
    {
        printf("%d\n", array[i]);
    }
}