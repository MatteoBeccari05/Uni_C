#include <stdio.h>
#define DIM 80

void copia(char *s2, char *s1)
{
    int i = 0;
    while (s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
}

int main()
{
    char sorgente[DIM];
    char destinazione[DIM];
    printf("Inserisci la prima stringa: ");
    scanf("%s", sorgente);
    copia(destinazione, sorgente);
    printf("%s\n", destinazione);
}