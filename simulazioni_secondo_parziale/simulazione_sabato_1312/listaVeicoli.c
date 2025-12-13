#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaVeicoli.h"

void nuovaLista(Lista *l)
{
    *l = NULL;
}

void ins_testa(Lista *pl, Dato d)
{
    Nodo *aux;
    aux = (Nodo *)malloc(sizeof(Nodo));
    aux->dato = d;
    aux->next = *pl;
    *pl = aux;
}

void aggiorna(Lista *l, Record r)
{
    while (*l != NULL && strcmp((*l)->dato.targa, r.targa) != 0)
    {
        l = &(*l)->next;
    }
    
    if (*l != NULL)
    {
        (*l)->dato.accessi++;
        (*l)->dato.durata_totale += r.durata_sosta;

        if ((*l)->dato.accessi <= 5)
            (*l)->dato.fattura_totale += 2.0;
        else if ((*l)->dato.accessi <= 10)
            (*l)->dato.fattura_totale += 1.90;
        else
            (*l)->dato.fattura_totale += 1.80;
    }
    else
    {
        Dato d;
        strcpy(d.targa, r.targa);
        d.accessi = 1;
        d.durata_totale = r.durata_sosta;
        d.fattura_totale = 2.0;
        ins_testa(l, d);
    }
}

void stampa(Lista l)
{
    printf("Targa        Addebito totale\n");
    while (l)
    {
        printf("%s ", l->dato.targa);
        printf("        %.2f ", l->dato.fattura_totale);
        l = l->next;
        printf("\n");
    }
}