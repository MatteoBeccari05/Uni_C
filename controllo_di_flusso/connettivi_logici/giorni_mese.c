/*
Scrivere un programma che richieda all’utente mese (in formato numerico: 1 per
gennaio, 12 per dicembre) e anno e stampi il numero di giorni di quel mese in
quell’anno.
*/

#include <stdio.h>

int main()
{
    int mese;
    int anno;

    input:
    printf("Inserisci il mese: ");
    scanf("%d", &mese);
    printf("Inserisci l'anno: ");
    scanf("%d", &anno);

    if (mese >= 1 && mese <= 12)
    {
        if (mese == 4 || mese == 6 || mese == 9 || mese == 11)
        {
            printf("Il mese %d/%d ha 30 giorni\n", mese, anno);
        }
        else if (mese == 2 && anno % 4 == 0 && anno % 100 != 0 || mese == 2 && anno % 400 == 0)
        {
            printf("Il mese %d/%d ha 29 giorni\n", mese, anno);
        }
        else if (mese == 2 && anno % 4 != 0 && anno % 100 == 0 || mese == 2 && anno % 400 != 0)
        {
            printf("Il mese %d/%d ha 28 giorni\n", mese, anno);
        }
        else
        {
            printf("Il mese %d/%d ha 31 giorni\n", mese, anno);
        }
    }
    else
    {
        printf("Il mese inserito non è corretto\n");
        goto input;
    }
}