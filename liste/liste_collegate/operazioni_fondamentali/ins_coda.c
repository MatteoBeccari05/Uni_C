#include <stdio.h>
#include <stdlib.h>
#include "tipi.h"

void nuova_lista(Lista *pl)
{
    *pl = NULL;
}

void insTesta(Lista *pl, int val)
{
    Nodo *aux;
    aux = (Nodo *)malloc(sizeof(Nodo));
    aux->dato = val;
    aux->next = *pl; 
    *pl = aux;
}

Lista *ricerca(Lista *pl, Dato d)
{
    while (*pl && (*pl)->dato < d)
    {
        pl = &(*pl)->next;
    }
    return pl;
}

void insCoda(Lista *pl, int d)
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

int main(void)
{
    Lista l1;
    nuova_lista(&l1);

    insTesta(&l1, 5);
    insTesta(&l1, 2);
    insTesta(&l1, 8);
    insTesta(&l1, 1);
    stampa(l1);
    insCoda(&l1, 100);
    stampa(l1);

    return 0;
}
