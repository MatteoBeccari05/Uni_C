/*
Scrivere un programma che simuli la scelta del numero da chiamare in una rubrica
telefonica. In particolare, il programma deve
- 1 stampare l’elenco dei contatti, ognuno preceduto da un identificativo intero
    progressivo
- 2 richiedere all’utente l’identificativo del contatto da chiamare
- 3 stampare un messaggio che indichi che la chiamata al contatto 
    selezionato è in corso.
Fare in modo che il programma inizialmente chieda all’utente un PIN, ed esegua le
successive istruzioni solo se il PIN immesso è uguale a 44122.

Fatto con il salto (goto)
*/


#include <stdio.h>

int main() 
{
    int pin, scelta;
    scanf("%d", &pin);
    if (pin != 44122)
        goto fine;
    printf("Accesso consentito\n");
    printf("1. Tizio 335-1234567\n");
    printf("2. Caio 347-1234567\n");
    printf("Scegliere un contatto\n");
    scanf("%d", &scelta);
    printf("Chiamata al contatto %d\n", scelta);
        fine:
    printf("Fine\n");
}