#include <stdio.h>

int lunghezza(char stringa[])
{
    int contatore = 0;
    while (stringa[contatore] != '\0')
    {
        contatore++;
    }
    return contatore;
}

int main()
{
    char stringa[81];
    printf("Inserire una stringa: ");
    scanf("%s", stringa);
    printf("La stringa è lunga: %d\n", lunghezza(stringa));
}