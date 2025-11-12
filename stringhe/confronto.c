#include <stdio.h>
#define DIM 80

int confronto(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return s1[i] - s2[i];
}

int main()
{
    char stringa1[DIM], stringa2[DIM];
    int risultato_confronto;
    printf("Inserisci la prima stringa: ");
    scanf("%s", stringa1);
    printf("Inserisci la seconda stringa: ");
    scanf("%s", stringa2);
    risultato_confronto = confronto(stringa1, stringa2);
    if (risultato_confronto < 0)
    {
        printf("%s precede %s\n", stringa1, stringa2);
    }
    else if (risultato_confronto == 0)
    {
        printf("%s è uguale %s\n", stringa1, stringa2);
    }
    else if (risultato_confronto > 1)
    {
        printf("%s precede %s\n", stringa2, stringa1);
    }
}