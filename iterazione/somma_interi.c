/*Si scriva un programma che stampi la somma dei primi n numeri naturali, 
dove n è un numero richiesto all’utente.*/

#include <stdio.h>

int main()
{
    int n, somma = 0;
    printf("Inserire il numero n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        somma = somma + i;
    }

    printf("Somma: %d\n", somma);
}