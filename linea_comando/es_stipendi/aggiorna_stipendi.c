#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dipendente.h"

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Linea comando non corretta\n");
        exit(3);
    }
    
    FILE *pf;
    Dipendente d;

    if ((pf = fopen(argv[1], "r+b")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    while (fread(&d, sizeof(Dipendente), 1, pf) == 1)
    {
        if (d.stipendio < 2000.0)
        {
            d.stipendio = d.stipendio * 1.1;
        }

        fseek(pf, -sizeof(Dipendente), SEEK_CUR);
        fwrite(&d, sizeof(Dipendente), 1, pf);
        fflush(pf);
    }

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }

    return 0;
}