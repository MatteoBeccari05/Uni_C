/*Il seguente programma richiede all’utente DIM numeri interi e li salva in un array; dopo
di che stampa l’indice dell’array contenente l’intero massimo.*/

#include <stdio.h>
#define DIM 5

int main()
{
    int a[DIM], m;
    for (int i = 0; i < DIM; i++)
    {
        printf("Inserire numero %d: ", (i + 1));
        scanf("%d", &a[i]);
    }

    m = 0;

    for (int i = 1; i < DIM; i++)
    {
        if (a[i] > a[m])
        {
            m = i;
        }
    }

    printf("Indice del massimo: %d\n", m);
    printf("Massimo: %d\n", a[m]);
}