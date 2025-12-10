#include <stdio.h>
#include "lista.h"

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