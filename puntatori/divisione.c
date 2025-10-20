#include <stdio.h>

void dividi(int a, int b, int *quoziente, int *resto)
{
    if (b != 0)
    {
        *quoziente = a / b;
        *resto = a % b;
    }
    else
    {
        printf("Errore: divisione per zero\n");
        *quoziente = 0;
        *resto = 0;
    }
}

int main()
{
    int a, b;
    int q, r;

    printf("Inserisci numero 1: ");
    scanf("%d", &a);
    printf("Inserisci numero 2: ");
    scanf("%d", &b);

    dividi(a, b, &q, &r);

    printf("Quoziente: %d\n", q);
    printf("Resto: %d\n", r);

    return 0;
}
