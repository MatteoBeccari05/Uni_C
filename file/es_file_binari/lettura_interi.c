#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *pf;
    int n;

    if ((pf = fopen("interi.dat", "rb")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    while (fread(&n, sizeof(int), 1, pf) == 1)
    {
        printf("%d\n", n);
    }
    
    if (fclose(pf) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }
    
    return 0;
}