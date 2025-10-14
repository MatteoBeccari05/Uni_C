/*
Controlla se l'utente inserisce una lettera maiuscola, minuscola o una cifra
*/

#include <stdio.h>

int main()
{
    char a;
    printf("Inserire il carattere: ");
    scanf("%c", &a);

    if (a >= 65 && a <= 90)
    {
        printf("Lettera maiuscola\n");
    }
    else if (a >= 97 && a <= 122)
    {
        printf("Lettera minuscola\n");
    }
    else if (a >= 48 && a <= 57)
    {
        printf("Cifra\n");
    }
    else
    {
        printf("Non hai inserito una lettera o una cifra\n");
    }
}
