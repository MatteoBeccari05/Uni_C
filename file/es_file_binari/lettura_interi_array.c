#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *pf;
    int a[50], i = 0, dl;

    if ((pf = fopen("interi.dat", "rb")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    dl = fread(a, sizeof(int), 50, pf);
    for(int i = 0; i < dl; i++)
    {
        printf("%d\n", a[i]);
    }
    
    if (fclose(pf) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }
    
    return 0;
}