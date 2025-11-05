#include <stdio.h>

int main()
{
    int n;
    printf("Quanti numeri vuoi inserire: ");
    scanf("%d", &n);
    int array[n];

    for(int i = 0; i < n; i++)
    {
        printf("Inserire numero %d: ", i+1);
        scanf("%d", &array[i]);
    }


    int somma = 0;
    for(int i = 0; i < n; i++)
    {
        somma = somma + array[i];
    }

    printf("somma: %d\n", somma);
}