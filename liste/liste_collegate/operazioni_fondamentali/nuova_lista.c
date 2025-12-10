#include <stdio.h>
#include <stdlib.h>
#include "tipi.h"


void nuova_lista(Lista *pl)
{
    *pl = NULL;
}


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
    Lista l1;
    nuova_lista(&l1);
    insTesta(&l1, 5);
    insTesta(&l1, 2);
    insTesta(&l1, 8);
    insTesta(&l1, 1);
    stampa(l1);
}