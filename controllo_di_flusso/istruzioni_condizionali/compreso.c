/*
Scrivere un programma che richieda all’utente un intero e scriva
- compreso se il numero è compreso fra 2 e 5;
- non compreso altrimenti.
*/

#include <stdio.h>

int main()
{
    int numero;
    printf("Inserire numero: ");
    scanf("%d", &numero);

    if(numero >= 2)
    {
        if(numero <= 5)
        {
            printf("Il numero è compreso\n");
        }
        else
        {
            printf("Il numero non è compreso\n");
        }
    }
    else
    {
        printf("Il numero non è compreso\n");
    }
}