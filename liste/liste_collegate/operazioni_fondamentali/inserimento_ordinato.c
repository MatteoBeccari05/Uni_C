#include <stdio.h>
#include <stdlib.h>
#include "tipi.h"

void insTesta(Lista *pl, Dato d)
{
    Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
    if (aux == NULL)
    {
        exit(1);
    }
    aux->dato = d;
    aux->next = *pl;
    *pl = aux;
}

Lista *ricerca(Lista *pl, Dato d)
{
    while (*pl)
    {
        if ((*pl)->dato == d)
        {
            break;
        }
        pl = &(*pl)->next;
    }
    return pl;
}

void insOrd(Lista *pl, int d)
{
    pl = ricerca(pl, d);
    insTesta(pl, d);
}

void stampa(Lista l1)
{
    while (l1)
    {
        printf("%d ", l1->dato);
        l1 = l1->next;
    }
    printf("\n");
}

int main()
{
    Lista l1 = NULL;
    insOrd(&l1, 5);
    insOrd(&l1, 2);
    insOrd(&l1, 8);  //inserire numeri uno dopo l'altro, output: 5 2 8 1 100
    insOrd(&l1, 1);
    insOrd(&l1, 100);

    stampa(l1);
}