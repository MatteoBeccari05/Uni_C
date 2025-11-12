#include <stdio.h>

int main()
{
    char stringa[81];
    int contatore = 0, i;
    printf("Inserire una stringa: ");
    scanf("%s", stringa);
    i = 0;
    while (stringa[i] != '\0')
    {
        contatore++;
        i++;
    }
    
    printf("La stringa è lunga: %d\n", contatore);
}