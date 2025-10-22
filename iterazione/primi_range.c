#include <stdio.h>

int main()
{
    int n, i, j, primo;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Nessun numero primo\n");
        return 0;
    }

    printf("Numeri primi minori o uguali a %d:\n", n);

    for (i = 2; i <= n; i++) // per ogni numero da 2 a n
    {
        primo = 1; // assumiamo che i sia primo

        for (j = 2; j < i; j++) // controllo se ha divisori
        {
            if (i % j == 0)
            {
                primo = 0; // non è primo
            }
        }

        if (primo)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
