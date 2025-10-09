/*
Scrivere un programma che richieda all’utente i tre lati di un 
triangolo scriva se il triangolo è rettangolo oppure no.
*/

#include <stdio.h>

int main()
{
    int base, altezza, ipotenusa;
    printf("Inserire la base: ");
    scanf("%d", &base);
    printf("Inserire l'altezza: ");
    scanf("%d", &altezza);
    printf("Inserire l'ipotenusa: ");
    scanf("%d", &ipotenusa);

    if (base + altezza <= ipotenusa || base + ipotenusa <= altezza || altezza + ipotenusa <= base)
    {
        printf("I lati inseriti non formano un triangolo valido.\n");
    }
    else
    {
        if (base * base + altezza * altezza == ipotenusa * ipotenusa)
        {
            printf("Il triangolo è rettangolo\n");
        }
        else
        {
            printf("Il triangolo non è rettangolo\n");
        }
    }
}