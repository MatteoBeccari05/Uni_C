#include <stdio.h>
#include <string.h>
#include "rubrica.h"

void StampaRubrica(Contatto rubrica[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("------- Contatto %d -------\n", (i + 1));
        printf("Nome: %s\n", rubrica[i].nome);
        printf("Cognome: %s\n", rubrica[i].cognome);
        printf("Numero: %d\n", rubrica[i].numero);
    }
}

void InserisciNuovoContatto(Contatto rubrica[], int *n)
{
    printf("Inserire nome: ");
    scanf("%29s", rubrica[*n].nome);

    printf("Inserire cognome: ");
    scanf("%29s", rubrica[*n].cognome);

    printf("Inserire numero: ");
    scanf("%d", &rubrica[*n].numero);

    (*n)++;
}

void CercaContatto(Contatto *r, int n)
{
    int numero;
    printf("Inserire il numero da cercare: ");
    scanf("%d", &numero);

    int trovato = 0;
    for (int i = 0; i < n; i++)
    {
        if (r[i].numero == numero)
        {
            printf("Il contatto è stato trovato nella posizione %d\n", i);
            StampaContatto(r[i]);
            trovato = 1;
            break; 
        }
    }
    if (!trovato)
    {
        printf("Il contatto non è stato trovato\n");
    }
}

void StampaContatto(Contatto c)
{
    printf("Nome: %s\n", c.nome);
    printf("Cognome: %s\n", c.cognome);
    printf("Numero: %d\n", c.numero);
}
