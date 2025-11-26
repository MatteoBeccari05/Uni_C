#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pf;
    char s1[80];
    char s2[80];
    int d;

    pf = fopen("doc.txt", "rt");

    if(pf == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    fscanf(pf, "%s", s1);
    printf("%s\n", s1);

    fscanf(pf, "%s", s2);
    printf("%s\n", s2);

    fscanf(pf, "%d", &d);
    printf("%d\n", d);

    if(fclose(pf) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }
}