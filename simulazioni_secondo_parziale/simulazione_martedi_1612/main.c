#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "listaUrl.h"

int main(int argc, char *argv[])
{
    Record r;
    Lista lista;
    FILE *lettura;

    if (argc != 2)
    {
        printf("Errore argomenti\n");
        exit(1);
    }

    lettura = fopen(argv[1], "rb");
    if (lettura == NULL)
    {
        printf("Errore apertura %S\n", argv[1]);
        exit(2);
    }

    nuovaLista(&lista);

    while (fread(&r, sizeof(Record), 1, lettura) == 1)
    {
        aggiorna(&lista, r);
    }

    stampa(lista);
    fclose(lettura);

    return 0;
}