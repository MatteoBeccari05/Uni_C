/*
Scrivere un ciclo la cui variabile di controllo assuma 
tutti i valori compresi fra 1 e 10.
Scrivere un ciclo la cui variabile di controllo assuma 
decrescendo tutti i valori compresi fra 10 e 5.
*/

#include <stdio.h>

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    printf("\n");

    for (int k = 10; k >= 5; k--)
    {
        printf("%d\n", k);
    }
    printf("\n");
}