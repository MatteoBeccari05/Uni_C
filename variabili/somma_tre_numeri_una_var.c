/*
Calcolare la somma di tre numeri 
richiesti all’utente con sole due variabili.
*/

#include <stdio.h>

int main()
{
    int a, s;
    printf("Inserire numero 1: ");
    scanf("%d", &a);
    s=a;
    printf("Inserire numero 2: ");
    scanf("%d", &a);
    s+=a;
    printf("Inserire numero 3: ");
    scanf("%d", &a);
    s+=a;

    printf("Somma: %d\n", s);
}