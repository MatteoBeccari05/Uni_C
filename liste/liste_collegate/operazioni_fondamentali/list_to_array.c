#include <stdlib.h>
#include <stdio.h>
#include "tipi.h"
#include "generatoreListe.h"

void stampa(Lista l)
{
    while (l != NULL)
    {
        printf("%d ", l->dato);
        l = l->next;
    }
    printf("\n");
}

int lunghezza(Lista l)
{
    int c = 0;
    while (l != NULL)
    {
        c++;
        l = l->next;
    }
    return c;
}

int *listToArray(Lista l)
{
    int dim = lunghezza(l);
    int *pi; // punt intero
    pi = (int *)malloc(dim * sizeof(int));
    // pi[0]=l->dato; //*pi=l->dato
    // pi[1]=l->next->dato;
    // pi[2]=l->next->next->dato;
    int i = 0;
    while (l != NULL)
    {
        pi[i] = l->dato;
        i++;
        l = l->next;
    }
    return pi;
}

int main()
{
    Lista l;
    int *pi;
    listaNonOrdinata(&l, 4);
    listToArray(l);
}
