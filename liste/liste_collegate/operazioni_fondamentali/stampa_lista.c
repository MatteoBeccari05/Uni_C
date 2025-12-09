#include <stdlib.h>
#include <stdio.h>
#include "tipi.h"

#include "generatoreListe.h"


void stampa(Lista l)
{
    while (l)
    {
        printf("%d ", l->dato);
        l = l->next;
    }
    printf("\n");
}

int main()
{
    Lista l;
    listaNonOrdinata(&l, 10);
    stampa(l);
}