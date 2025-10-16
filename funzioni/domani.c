/*
Ristrutturare il programma domani.c, riportato e linkato alla slide 263, usando una
funzione bisestile che calcoli se l’anno che riceve come argomento è bisestile, e una
funzione giorni_del_mese che riceva come argomenti mese e anno calcoli il numero
di giorni del mese nell’anno.
Aggiungere inoltre una funzione valida che verifica se una data è valida (ad esempio
30/2/2018 non è una data valida), e usarla per stampare un messaggio di errore e
uscire con codice -1 se l’utente scrive una data non valida.
*/

#include <stdio.h>

int bisestile(int anno)
{
    if (anno % 4 == 0 && anno % 100 != 0)
    {
        return 1;
    }
    else if (anno % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int giorni_nel_mese(int mese, int anno)
{
    if (mese >= 1 && mese <= 12)
    {
        if (mese == 4 || mese == 6 || mese == 9 || mese == 11)
        {
            return 30;
        }
        else if (mese == 2 && bisestile(anno) == 1)
        {
            return 29;
        }
        else if (mese == 2 && bisestile(anno) == 0)
        {
            return 28;
        }
        else
        {
            return 31;
        }
    }
    else
    {
        return -1;
    }
}

int valida(int giorno, int mese, int anno)
{
    if (giorni_nel_mese(mese, anno) == 29 && giorno >= 1 && giorno <= 29)
    {
        return 1;
    }
    else if (giorni_nel_mese(mese, anno) == 28 && giorno >= 1 && giorno <= 28)
    {
        return 1;
    }
    else if (giorni_nel_mese(mese, anno) == 30 && giorno >= 1 && giorno <= 30)
    {
        return 1;
    }
    else if (giorni_nel_mese(mese, anno) == 31 && giorno >= 1 && giorno <= 31)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

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

    if (valida(giorno, mese, anno) == 1)
    {
        if (giorni_nel_mese(mese, anno) == 30)
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
        else if (giorni_nel_mese(mese, anno) == 29)
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
        else if (giorni_nel_mese(mese, anno) == 28)
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
    }
    else if(valida(giorno, mese, anno) == -1)
    {
        printf("Data non valida\n");
        goto input;
    }
}