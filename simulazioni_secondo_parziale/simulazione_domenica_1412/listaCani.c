#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaCani.h"

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
    while ((*l) != NULL && (*l)->dato.numero_chip != r.numero_chip)
    {
        l = &(*l)->next;
    }

    if (*l != NULL && (*l)->dato.numero_chip == r.numero_chip)
    {
        if(r.tipo_vaccino == 'E')
        {
            (*l)->dato.E = 1;
        }
        else if(r.tipo_vaccino == 'C')
        {
            (*l)->dato.C = 1;
        }
        else if(r.tipo_vaccino == 'P')
        {
            (*l)->dato.P = 1;
        }
    }
    else
    {
        Dato d;
        d.E = 0;
        d.C = 0;
        d.P = 0;
        d.numero_chip = r.numero_chip;
        if(r.tipo_vaccino == 'E')
        {
            d.E = 1;
        }
        else if(r.tipo_vaccino == 'C')
        {
            d.C = 1;
        }
        else if(r.tipo_vaccino == 'P')
        {
            d.P = 1;
        }
        ins_testa(l, d);
    }
}

void stampa_vaccini_non_effettuati(Lista l)
{
    while (l)
    {
        printf("%d: ", l->dato.numero_chip);

        if (!l->dato.C) printf("cimurro ");
        if (!l->dato.E) printf("epatite ");
        if (!l->dato.P) printf("parvovirosi ");

        printf("\n");
        l = l->next;
    }
}