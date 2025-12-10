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

void elim_testa(Lista *pl)
{
    Nodo* aux = *pl;
    *pl = (*pl)->next;
    free(aux);
}

void elimina_elemento(Lista *pl, Dato d)
{
    while(*pl != NULL && (*pl)->dato != d)
    {
        pl = &(*pl)->next;
    }
    elim_testa(pl);
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
    insTesta(&l1, 100);
    stampa(l1);
    elimina_elemento(&l1, 100);
    stampa(l1);

    return 0;
}
