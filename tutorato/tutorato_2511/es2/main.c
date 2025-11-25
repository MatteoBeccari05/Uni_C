#include <stdio.h>
#include "rubrica.h"
#define DIM 20

int main()
{
    char scelta;
    int dl = 0;
    Contatto rubrica[DIM];

    do
    {
        printf("\nCosa vuoi fare (q per uscire)?\n");
        printf("a) Stampa l'intera rubrica\n");
        printf("b) Inserisci nuovo contatto in rubrica\n");
        printf("c) Cerca un contatto in rubrica\n");
        printf("Scelta: ");
        scanf(" %c", &scelta); // spazio prima di %c per consumare newline

        if(scelta == 'a')
        {
            if(dl == 0)
            {
                printf("Nessun contatto da visualizzare\n");
            }
            else
            {
                StampaRubrica(rubrica, dl);
            }
        }
        else if(scelta == 'b')
        {
            if (dl >= DIM)
            {
                printf("Rubrica piena, impossibile inserire nuovi contatti\n");
            }
            else
            {
                InserisciNuovoContatto(rubrica, &dl);
            }
        }
        else if(scelta == 'c')
        {
            if(dl == 0)
            {
                printf("Rubrica vuota, niente da cercare\n");
            }
            else
            {
                CercaContatto(rubrica, dl);
            }
        }
        else if(scelta == 'q')
        {
            printf("Uscita...\n");
        }
        else
        {
            printf("Scelta non valida\n");
        }

    } while (scelta != 'q');

    return 0;
}
