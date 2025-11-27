#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *pf;
    int i = 12;
    int a[10] = {2, 6, 7, 3, 5, 1, 9, -1, 10, 11};

    if ((pf = fopen("interi.dat", "wb")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    //fwrite(a, sizeof(int), 10, pf);

    for(int i = 0; i < 10; i++)
    {
        fwrite(&a[i], sizeof(int), 1, pf);
    }

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }

    return 0;
}