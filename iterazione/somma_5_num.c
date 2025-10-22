/*Si scriva un programma che legga da tastiera 5 
numeri interi e ne stampi la somma.*/

#include <stdio.h>

int main()
{
    int num, somma = 0;
    for(int i = 0; i < 5; i++)
    {
        printf("Inserire numero %d: ", (i+1));
        scanf("%d", &num);
        somma = somma + num;
    }

    printf("Somma: %d\n", somma);
}