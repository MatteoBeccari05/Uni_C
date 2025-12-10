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

Lista array_to_list(int a[], int dl)
{
    Lista l = NULL;
    for(int i = dl - 1; i >= 0; i--)
    {
        insTesta(&l, a[i]);
    }
    return l;
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
    int a[] = {2 ,4, 0, 3, 5};
    Lista l1;
    l1 = array_to_list(a, 5);
    stampa(l1);
}