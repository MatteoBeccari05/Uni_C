#include <stdio.h>
#include <stdlib.h>
#include "tipi.h"

void nuovaLista(Lista *pl)
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

void reverse(Lista l1, Lista *pl2)
{
    nuovaLista(pl2);
    while (l1)
    {
        insTesta(pl2, l1->dato);
        l1 = l1->next;
    }
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
    Lista l1, l2;
    nuovaLista(&l1);
    insTesta(&l1, 2);
    insTesta(&l1, 5);
    insTesta(&l1, 7);

    reverse(l1, &l2);
    printf("Lista originale: ");
    stampa(l1);
    printf("Lista inversa: ");
    stampa(l2);
}