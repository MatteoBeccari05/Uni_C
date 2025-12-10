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
    insTesta(&l1, 5);
    insTesta(&l1, 2);
    insTesta(&l1, 8);
    insTesta(&l1, 1);
    
    Lista *l2 = ricerca(&l1, 8);  //stampa dal numero trovato in poi
    printf("\n");
    stampa(*l2);
}