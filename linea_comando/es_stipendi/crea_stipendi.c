/*
•
Un file binario STIPENDI.DAT contiene
le seguenti informazioni sui dipendenti
di una ditta:
–
nome (stringa di 10 caratteri , incl
–
stipendio (intero)
•
L’azienda ha deciso di aumentare del
10% lo stipendio dei dipendenti che
prendono meno di 1000€/mese
•
Si scriva un programma C che effettua
tale aggiornamento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dipendente.h"

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Usare: %s nome_file\n", argv[0]);
        exit(3);
    }

    FILE *pf;
    Dipendente dipendenti[5] = {{"Rossi", 1750.0}, {"Bianchi", 2000.0}, {"Verdi", 2700.0}, {"Esposito", 1200.0}, {"Thuram", 3000.0}};

    if ((pf = fopen(argv[1], "wb")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    fwrite(dipendenti, sizeof(Dipendente), 5, pf);
    

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }

    return 0;
}