/*
Scrivere un programma che simuli la verifica di un PIN inserito dall’utente. In
particolare, il programma deve richiedere un numero all’utente e, se il numero è uguale
a 44122, stampare il messaggio “Accesso consentito”.
*/

#include <stdio.h>

int main()
{
    int pin;
    printf("Inserire PIN: ");
    scanf("%d", &pin);

    if(pin == 44122)
    {
        printf("Accesso consentito\n");
    }
}

