#include <stdlib.h>
#include <stdio.h>
#include "tipi.h"
#include "generatoreListe.h"

void insTesta(Lista *pl, int val)
{ // uso il puntatore se devo cambiare l'indirizzo in testa alla lista
    Nodo *aux;
    aux = (Nodo *)malloc(sizeof(Nodo));
    aux->dato = val;
    aux->next = *pl; // valore della l del main
    *pl = aux;
}
void stampa(Lista l)
{
    while (l)
    {
        printf("%d", l->dato);
        l = l->next;
    }
    printf("\n");
}

int main()
{
    Lista l;
    Nodo *aux;
    listaNonOrdinata(&l, 3);
    stampa(l);
    insTesta(&l, 5);
    stampa(l);
}
