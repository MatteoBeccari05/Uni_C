/*
Un file di testo rubrica.txt contiene una rubrica del
telefono, in cui per ogni persona sono memorizzati di
seguito
-nome (stringa di max 20 caratteri senza spazi, incluso
terminatore)
-indirizzo (stringa di max 30 caratteri senza spazi, incluso ‘\0’)
-numero (stringa di max 15 caratteri incluso ‘\0’)
Si scriva un programma C che legge da tastiera un
nome, cerca la persona corrispondente nel file
rubrica.txt e visualizza sullo schermo i dati della
persona (se trovata)

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void string_tolower(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + ('a' - 'A');

        i++;
    }
}

int main()
{
    FILE *pf;
    char nome_cercato[20];
    char nome[20], indirizzo[30], numero[15];
    int trovato = 0;

    printf("Inserire il nome da cercare: ");
    scanf("%s", nome_cercato);
    string_tolower(nome_cercato);

    if ((pf = fopen("rubrica.txt", "r")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    while (fscanf(pf, "%s", nome) == 1)
    {
        fscanf(pf, "%s", indirizzo);
        fscanf(pf, "%s", numero);
        string_tolower(nome);

        if (strcmp(nome_cercato, nome) == 0)
        {
            printf("\nContatto trovato:\n");
            printf("Nome: %s\n", nome);
            printf("Indirizzo: %s\n", indirizzo);
            printf("Numero: %s\n", numero);
            trovato = 1;
            break;
        }
    }

    if (!trovato)
    {
        printf("\nNessun contatto trovato\n");
    }

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }
}