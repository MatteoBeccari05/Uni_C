/*Verificare se un numero, richiesto all’utente, è primo, ossia se non ha 
divisori interi a parte 1 e se stesso.*/

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
