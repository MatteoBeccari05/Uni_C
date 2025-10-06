/*
Scrivere un programma che richieda all’utente 
due numeri interi e stampi il maggiore dei due.
*/

#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Inserire primo numero: ");
    scanf("%d", &n1);
    printf("Inserire secondo numero: ");
    scanf("%d", &n2);

    if(n1 > n2)
    {
        printf("Il numero maggiore è %d\n", n1);
    }
    else if(n1 < n2)
    {
        printf("Il numero maggiore è %d\n", n2);
    }
}

