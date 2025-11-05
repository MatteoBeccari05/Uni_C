/*
Scrivere un programma che:
1 crei un array a con gli interi compresi fra 1900 e 2100;
2 crei un secondo array b con gli elementi di a che rappresentano anni bisestili
3 stampi il contenuto di b.
*/

#include <stdio.h>
#define PARTENZA 1900
#define DIM 200

int main()
{
    int array_a[DIM], dl;
    for (int i = 0; i < DIM; i++)
    {
        array_a[i] = i + PARTENZA;
    }

    dl = 0;
    int array_b[DIM];
    for (int i = 0; i < DIM; i++)
    {
        if (array_a[i] % 4 == 0 && array_a[i] % 100 != 0 || array_a[i] % 400 == 0)
        {
            array_b[dl] = array_a[i];
            dl++;
        }
    }

    for(int i = 0; i < dl; i++)
    {
        printf("%d\n", array_b[i]);
    }
}