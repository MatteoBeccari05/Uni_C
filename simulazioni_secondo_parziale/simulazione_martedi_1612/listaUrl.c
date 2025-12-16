#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaUrl.h"

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
    while ((*l) != NULL && strcmp((*l)->dato.url, r.url) != 0)
    {
        l = &(*l)->next;
    }

    if (*l != NULL && strcmp((*l)->dato.url, r.url) == 0)
    {
        (*l)->dato.conta_visite++;
        if ((*l)->dato.ora_max < r.ora_visita || ((*l)->dato.ora_max == r.ora_visita && (*l)->dato.min_max < r.minuti_visita))
        {
            (*l)->dato.ora_max = r.ora_visita;
            (*l)->dato.min_max = r.minuti_visita;
        }
    }
    else
    {
        Dato d;
        strcpy(d.url, r.url);
        d.conta_visite = 1;
        d.ora_max = r.ora_visita;
        d.min_max = r.minuti_visita;
        ins_testa(l, d);
    }
}

void stampa(Lista l)
{
    printf("URL        Numero Visite       Ore\n");
    while (l != NULL)
    {
        if (l->dato.conta_visite >= 5)
        {
            printf("%s ", l->dato.url);
            printf("        %d ", l->dato.conta_visite);
            printf("        %d : %d ", l->dato.ora_max, l->dato.min_max);

            printf("\n");
        }
        l = l->next;
    }
}