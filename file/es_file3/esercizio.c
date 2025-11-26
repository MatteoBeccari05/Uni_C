/*Si mostri a video il contenuto di un file di
testo il cui nome viene inserito da tastiera*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *pf;
    char nome[50];
    char riga[200];

    printf("Inserire il nome di un file: ");
    scanf("%s", nome);

    if ((pf = fopen(nome, "r")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    printf("\n");
    while (fgets(riga, sizeof(riga), pf) != NULL)
    {
        printf("%s", riga);
    }
    printf("\n");

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }
}