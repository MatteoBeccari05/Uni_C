/*
Scrivere un programma che richieda all’utente tre numeri 
interi e stampi il maggiore dei tre.
*/

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Inserire primo numero: ");
    scanf("%d", &n1);
    printf("Inserire secondo numero: ");
    scanf("%d", &n2);
    printf("Inserire terzo numero: ");
    scanf("%d", &n3);

    if(n1 > n2)
    {
        if(n1 > n3)
        {
            printf("Il numero più grande è %d\n", n1);
        }
        else
        {
            printf("Il numero più grande è %d\n", n3);
        }
    }
    else
    {
        if(n2 > n3)
        {
            printf("Il numero più grande è %d\n", n2);
        }
        else
        {
            printf("Il numero più grande è %d\n", n3);
        }
        
    }
}