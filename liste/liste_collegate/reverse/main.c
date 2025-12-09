#include <stdio.h>
#include "lista.h"

int main()
{
    Lista l1, l2;
    nuovaLista(&l1);
    insTesta(&l1, 0.7);
    insTesta(&l1, 2.3);
    insTesta(&l1, 1.5);

    reverse(l1, &l2);
    printf("Lista originale: ");
    stampa(l1);
    printf("Lista inversa: ");
    stampa(l2);

}