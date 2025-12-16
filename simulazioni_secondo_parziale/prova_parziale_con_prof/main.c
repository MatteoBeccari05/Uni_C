#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaStudenti.h"

int main(int argc, char *argv[])
{
    Lista l;
    nuovaLista(&l);
    Record r;
    FILE *pf;
    if ((pf = fopen(argv[1], "rb")) == NULL)
    {
        printf("Errore aprtura file\n");
        exit(1);
    }

    while (fread(&r, sizeof(Record), 1, pf) == 1)
    {
        aggiorna(&l, r);
    }
    ordina(&l);
    stampa(l);
    fclose(pf);
}
