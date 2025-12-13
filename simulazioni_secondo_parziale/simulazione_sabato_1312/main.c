#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaVeicoli.h"

int main(int argc, char *argv[])
{
    Record r;
    Lista lista;
    FILE *lettura, *scrittura;
    char t1[8], t2[8], t3[8];

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

    scrittura = fopen("ultimi3.txt", "wt");
    if (scrittura == NULL)
    {
        printf("Errore apertura\n");
        exit(2);
    }

    nuovaLista(&lista);

    while (fread(&r, sizeof(Record), 1, lettura) == 1)
    {
        aggiorna(&lista, r);
    }

    stampa(lista);

    
    fseek(lettura, 0, SEEK_END);  //va alla fine del file

    while (strcmp(t3, "") == 0)
    {
        if (fseek(lettura, -sizeof(Record), SEEK_CUR) != 0)
        {
            break;
        }
        fread(&r, sizeof(Record), 1, lettura);   //legge l'ultimo record
        if (strcmp(r.targa, t1) != 0 && strcmp(r.targa, t2) != 0 && strcmp(r.targa, t3) != 0)
        {
            if (strcmp(t1, "") == 0)
            {
                strcpy(t1, r.targa);
            }
            else if (strcmp(t2, "") == 0)
            {
                strcpy(t2, r.targa);
            }
            else
            {
                strcpy(t3, r.targa);
            }
        }
        fseek(lettura, -sizeof(Record), SEEK_CUR);
    }

    if (strcmp(t1, "") != 0)
        fprintf(scrittura, "%s\n", t1);
    if (strcmp(t2, "") != 0)
        fprintf(scrittura, "%s\n", t2);
    if (strcmp(t3, "") != 0)
        fprintf(scrittura, "%s\n", t3);

    fclose(lettura);
    fclose(scrittura);
}