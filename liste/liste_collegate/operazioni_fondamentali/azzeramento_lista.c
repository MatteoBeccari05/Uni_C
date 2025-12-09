//gcc -g ./generatoreListe.c ./azzeramento_lista.c
#include <stdio.h>
#include "tipi.h"
#include "generatoreListe.h"

void azzera(Lista l)
{
    while (l)
    {
        l->dato = 0;
        l = l->next;
    }
    
}

void stampa(Lista l)
{
    while (l)
    {
        printf("%d\n", l->dato);
        l = l->next;
    }
    
}

int main()
{
    Lista l;
    listaNonOrdinata(&l, 6);
    stampa(l);
    printf("\n\n");
    azzera(l);
    stampa(l);
    return 0;
}