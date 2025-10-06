/*
Scrivere un programma che richieda all’utente un numero 
intero e stampi il messaggio“Positivo” se il numero è maggiore di 0.
*/

#include <stdio.h>

int main()
{
    int numero;
    printf("Inserire il numero: ");
    scanf("%d", &numero);

    if(numero > 0)
    {
        printf("Il numero è positivo\n");
    }
    else
    {
        printf("Il numero non è positivo\n");
    }
}

