/*Scrivere un programma che stampi tutti i divisori 
primi di un numero intero richiesto all’utente.*/

#include <stdio.h>

int main()
{
    int numero, i, j, primo; 
    printf("Inserire il numero: ");
    scanf("%d", &numero);

    for (i = 2; i <= numero; i++) // per ogni numero da 2 a n
    {
        primo = 1; // assumiamo che i sia primo

        for (j = 2; j < i; j++) // controllo se ha divisori
        {
            if (i % j == 0)
            {
                primo = 0; // non è primo
            }
        }

        if (primo == 1 && numero % i == 0)
        {
            printf("%d\n", i);
        }
    }
}