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

void stampa(Lista l)
{
    while (l != NULL)
    {
        printf("%d %.2f \n", l->dato.matricola, (float)(l->dato.somma_voti / l->dato.n_esami));
        l = l->next;
    }
}