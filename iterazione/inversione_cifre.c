/*Scrivere un programma che richieda all’utente un numero intero e 
lo stampi da destra a sinistra (ad esempio, se l’utente scrive 251017 il programma deve scrivere 710152).*/

#include <stdio.h>

int main()
{
    int numero, resto;
    printf("Inserire un numero intero: ");
    scanf("%d", &numero);

    printf("Numero invertito: ");
    while (numero != 0)
    {
        resto = numero % 10;  // prende l'ultima cifra
        printf("%d", resto);  // la stampa
        numero = numero / 10; // rimuove l'ultima cifra
    }
    printf("\n");
    return 0;
}
