#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dipendente.h"
#define DIM 100


int main()
{
    FILE *pf;
    int dl = 0;
    Dipendente dipendenti[DIM];
    
    if ((pf = fopen("stipendi.dat", "rb")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    dl = fread(dipendenti, sizeof(Dipendente), DIM, pf);

    
    for(int i = 0; i < dl; i++)
    {
        printf("%s %.2f\n", dipendenti[i].nome, dipendenti[i].stipendio);
    }

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }

    return 0;
}