#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaStudenti.h"

void nuovaLista(Lista *pl)
{
    *pl = NULL;
}

void insTesta(Lista *pl, Dato d)
{
    Nodo *aux;
    aux = (Nodo *)malloc(sizeof(Nodo));
    aux->dato = d;
    aux->next = *pl;
    *pl = aux;
}

Lista *ricerca(Lista *pl, Dato d)
{
    while (*pl && (*pl)->dato.n_esami > d.n_esami)
    {
        pl = &(*pl)->next;
    }

    if (*pl && (*pl)->dato.n_esami == d.n_esami)
    {
        while (*pl && (*pl)->dato.n_esami == d.n_esami &&
               (*pl)->dato.somma_voti * d.n_esami > d.somma_voti * (*pl)->dato.n_esami)
        {
            pl = &(*pl)->next;
        }
    }
    return pl; 
}

void insOrd(Lista *pl, Dato d)
{
    pl = ricerca(pl, d);
    insTesta(pl, d);
}

void aggiorna(Lista *pl, Record r)
{
    while ((*pl) != NULL && (*pl)->dato.matricola != r.matricola)
    {
        pl = &(*pl)->next;
    }
    if ((*pl) != NULL && (*pl)->dato.matricola == r.matricola)
    {
        (*pl)->dato.n_esami++;
        (*pl)->dato.somma_voti += r.voto;
    }
    else
    {
        Dato d;
        d.matricola = r.matricola;
        d.n_esami = 1;
        d.somma_voti = r.voto;
        insTesta(pl, d);
    }
}

void elimTesta(Lista *pl)
{
    if (pl == NULL || *pl == NULL)
        return;
    Nodo *aux = *pl;
    *pl = (*pl)->next;
    free(aux);
}

void ordina(Lista *pl)
{
    Lista l2;
    nuovaLista(&l2);
    while (*pl)
    {
        insOrd(&l2, (*pl)->dato);
        elimTesta(pl);
    }
    *pl = l2;
}

void stampa(Lista l)
{
    while (l != NULL)
    {
        printf("%d %.2f (%d)\n", l->dato.matricola, (float)(l->dato.somma_voti / l->dato.n_esami), l->dato.n_esami);
        l = l->next;
    }
}