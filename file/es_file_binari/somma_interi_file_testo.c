#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *pf;
    int somma = 0;
    int valore;

    if ((pf = fopen("interi.txt", "rt")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    while (fscanf(pf, "%d", &valore) == 1)
    {
        somma = somma + valore;
    }
    

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }

    printf("Somma: %d\n", somma);

    return 0;
}