/*
Scrivere un programma che richieda all’utente un numero intero 
e ne stampi il valore assoluto.
*/

#include <stdio.h>

int main()
{
    int numero;
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    if (numero < 0) 
    {
        numero = -numero;
    }
    
    printf("Il valore assoluto è: %d\n", numero);
}