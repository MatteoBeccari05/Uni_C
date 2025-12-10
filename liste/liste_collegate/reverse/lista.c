#include <stdio.h>
#include "stdlib.h"
#include "lista.h"

void nuovaLista(Lista *pl)
{
    *pl = NULL;
}

void insTesta(Lista *pl, Dato d)
{
    Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
    if(aux == NULL)
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