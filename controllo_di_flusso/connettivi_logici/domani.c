/*
Scrivere un programma che riceva in ingresso la data completa di un giorno e scriva in
uscita la data completa del giorno successivo.
*/

#include <stdio.h>

int main()
{
    int giorno;
    int mese;
    int anno;

    input:
    printf("Inserisci il giorno: ");
    scanf("%d", &giorno);
    printf("Inserisci il mese: ");
    scanf("%d", &mese);
    printf("Inserisci l'anno: ");
    scanf("%d", &anno);

    if (mese >= 1 && mese <= 12)
    {
        if (mese == 4 || mese == 6 || mese == 9 || mese == 11)
        {
            if (giorno >= 1 && giorno <= 30)
            {
                if (giorno == 30)
                {
                    mese++;
                    giorno = 1;
                    printf("Il giorno successivo è: %d/%d/%d\n", giorno, mese, anno);
                }
                else
                {
                    giorno++;
                    printf("Il giorno successivo è: %d/%d/%d\n", giorno, mese, anno);
                }
            }
            else
            {
                printf("Il giorno inserito non è corretto\n");
                goto input;
            }
        }
        else if (mese == 2 && anno % 4 == 0 && anno % 100 != 0 || mese == 2 && anno % 400 == 0)
        {
            if (giorno >= 1 && giorno <= 29)
            {
                if (giorno == 29)
                {
                    mese++;
                    giorno = 1;
                    printf("Il giorno successivo è: %d/%d/%d\n", giorno, mese, anno);
                }
                else
                {
                    giorno++;
                    printf("Il giorno successivo è: %d/%d/%d\n", giorno, mese, anno);
                }
            }
            else
            {
                printf("Il giorno inserito non è corretto\n");
                goto input;
            }
        }
        else if (mese == 2 && anno % 4 != 0 && anno % 100 == 0 || mese == 2 && anno % 400 != 0)
        {
            if (giorno >= 1 && giorno <= 28)
            {
                if (giorno == 28)
                {
                    mese++;
                    giorno = 1;
                    printf("Il giorno successivo è: %d/%d/%d\n", giorno, mese, anno);
                }
                else
                {
                    giorno++;
                    printf("Il giorno successivo è: %d/%d/%d\n", giorno, mese, anno);
                }
            }
            else
            {
                printf("Il giorno inserito non è corretto\n");
                goto input;
            }
        }
        else
        {
            if (giorno >= 1 && giorno <= 31)
            {
                if (giorno == 31)
                {
                    if (mese == 12)
                    {
                        anno++;
                        mese = 1;
                        giorno = 1;
                        printf("Il giorno successivo è: %d/%d/%d\n", giorno, mese, anno);
                    }
                    else
                    {
                        mese++;
                        giorno = 1;
                        printf("Il giorno successivo è: %d/%d/%d\n", giorno, mese, anno);
                    }
                }
                else
                {
                    giorno++;
                    printf("Il giorno successivo è: %d/%d/%d\n", giorno, mese, anno);
                }
            }
            else
            {
                printf("Il giorno inserito non è corretto\n");
                goto input;
            }
        }
    }
    else
    {
        printf("Il mese inserito non è corretto\n");
        goto input;
    }
}