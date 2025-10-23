/*
Calcolare la fattorizzazione di un numero richiesto all’utente, ossia esprimere il numero
come prodotto di potenze aventi come base numeri primi crescenti.
Ad esempio, la fattorizzazione di 300 è 22 ˆ 3 ˆ 52.
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Inserisci un numero intero maggiore di 1: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Numero non valido.\n");
        return 0;
    }

    printf("Fattorizzazione di %d = ", n);

    int primo = 2; // iniziamo con il primo numero primo
    int primo_fattore = 1; // serve per sapere quando mettere " * "

    while (n > 1)
    {
        int esponente = 0;

        // conta quante volte 'primo' divide n
        while (n % primo == 0)
        {
            esponente++;
            n /= primo;
        }

        if (esponente > 0)
        {
            if (!primo_fattore)
                printf(" * ");
            printf("%d^%d", primo, esponente);
            primo_fattore = 0;
        }

        primo++;
    }

    printf("\n");
    return 0;
}
