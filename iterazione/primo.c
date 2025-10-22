#include <stdio.h>

int main()
{
    int n, i;
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Non è un numero primo\n");
        return 0;
    }

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Non è un numero primo\n");
            return 0;
        }
    }

    printf("È un numero primo\n");
}
