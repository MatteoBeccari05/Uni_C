/*
Scrivere un programma che richieda all’utente 
un numero intero e stampi il messaggio “Dispari” se il numero è dispari.
*/

#include <stdio.h>

int main()
{
    int numero; 
    printf("Inserire il numero: ");
    scanf("%d", &numero);

    if((numero % 2) == 1)
    {
        printf("Il numero è dispari\n");
    }
    else
    {
        printf("Il numero è pari\n");
    }
}

