/*
Scrivere un programma che richieda all’utente i tre lati di un triangolo e classifichi il
triangolo come equilatero, isoscele o scaleno.
*/

#include <stdio.h>

int main()
{
    int lato1, lato2, lato3;
    printf("Inserire lato 1: ");
    scanf("%d", &lato1);
    printf("Inserire lato 2: ");
    scanf("%d", &lato2);
    printf("Inserire lato 3: ");
    scanf("%d", &lato3);

    if (lato1 == lato2 && lato2 == lato3) 
    {
        printf("Il triangolo è equilatero\n");
    } 
    else if (lato1 == lato2 || lato1 == lato3 || lato2 == lato3)
    {
        printf("Il triangolo è isoscele\n");
    } 
    else 
    {
        printf("Il triangolo è scaleno\n");
    }
}
