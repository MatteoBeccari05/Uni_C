#include <stdio.h>
#include <stdlib.h>
#include "tipi.h"

void nuova_lista(Lista *pl)
{
    *pl = NULL;
}

void insTesta(Lista *pl, int val)
{ // uso il puntatore se devo cambiare l'indirizzo in testa alla lista
    Nodo *aux;
    aux = (Nodo *)malloc(sizeof(Nodo));
    aux->dato = val;
    aux->next = *pl; // valore della l del main
    *pl = aux;
}

void elim_testa(Lista *pl)
{
    if (pl == NULL || *pl == NULL) return; 
    Nodo* aux = *pl;
    *pl = (*pl)->next;
    free(aux);
}

Lista *ricerca(Lista *pl, Dato d)
{
    while (*pl && (*pl)->dato < d)
    {
        pl = &(*pl)->next;
    }
    return pl;
}

void insOrd(Lista *pl, Dato d)
{
    pl = ricerca(pl, d);
    insTesta(pl, d);
}

void insertion_sort(Lista *pl1)
{
    Lista l2;
    nuova_lista(&l2);
    while (*pl1)
    {
        insOrd(&l2, (*pl1)->dato);
        elim_testa(pl1);          
    }
    *pl1 = l2;
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

    printf("Lista prima: ");
    stampa(l1);        /* output atteso: 1 8 2 5  (inseriti in testa) */

    insertion_sort(&l1);

    printf("Lista dopo insertion_sort: ");
    stampa(l1);        /* output atteso: 1 2 5 8  */

    return 0;
}
