#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[20];
    char cognome[20];
    int matricola;
} Persona;

int main()
{
    FILE *lettura;
    Persona persone[10];
    int dl = 0;

    if ((lettura = fopen("nomi.txt", "r")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    while (fscanf(lettura, "%s %s %d", persone[dl].cognome, persone[dl].nome, &persone[dl].matricola) == 3)
    {
        dl++;
    }

    if (fclose(lettura) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }

    for (int i = 0; i < dl - 1; i++)
    {
        for (int j = 0; j < dl - i - 1; j++)
        {
            if (persone[j].matricola > persone[j + 1].matricola)
            {
                Persona temp = persone[j];
                persone[j] = persone[j + 1];
                persone[j + 1] = temp;
            }
        }
    }

    FILE *scrittura;

    if ((scrittura = fopen("ordinati.txt", "wt")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(3);
    }

    for (int i = 0; i < dl; i++)
    {
        fprintf(scrittura, "%s", persone[i].cognome);
        fprintf(scrittura, " %s", persone[i].nome);
        fprintf(scrittura, " %d", persone[i].matricola);
        fprintf(scrittura, "\n");
    }

    if (fclose(scrittura) != 0)
    {
        printf("Errore chiusura\n");
        exit(4);
    }

    FILE *scrittura2;

    if ((scrittura2 = fopen("ordinati.dat", "wb")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(3);
    }

    for (int i = 0; i < dl; i++)
    {
        fwrite(&persone[i], sizeof(Persona), 1, scrittura2);
    }

    if (fclose(scrittura2) != 0)
    {
        printf("Errore chiusura\n");
        exit(4);
    }

    FILE *primo;
    FILE *dat;

    if ((dat = fopen("ordinati.dat", "rb")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(3);
    }

    Persona p;
    fread(&p, sizeof(Persona), 1, dat);

    if (fclose(dat) != 0)
    {
        printf("Errore chiusura\n");
        exit(4);
    }

    if ((primo = fopen("primo.txt", "wt")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(3);
    }

    fprintf(primo, "%s %s %d", p.cognome, p.nome, p.matricola);

    if (fclose(primo) != 0)
    {
        printf("Errore chiusura\n");
        exit(4);
    }
}