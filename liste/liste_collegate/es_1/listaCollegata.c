#include <stdio.h>
#include <stdlib.h>
#include "listaCollegata.h"

// Implementazioni delle funzioni mancanti e completamento dell'ADT

void nuovaLista(Lista *pl)
{
    *pl = NULL;
}

int vuota(Lista l)
{
    return l == NULL;
}

int piena(Lista l)
{
    // Una lista collegata dinamica non si considera mai "piena"
    // a meno che malloc fallisca al momento dell'allocazione.
    // Restituiamo 0 (falso) e gestiamo l'errore in insTesta se necessario.
    (void)l; // evitare warning su parametro non usato
    return 0;
}

void insTesta(Lista *pl, int numero)
{
    Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
    if (aux == NULL)
    {
        // gestione semplice dell'errore: esci con codice non-zero
        fprintf(stderr, "Errore: memoria non disponibile in insTesta\n");
        exit(EXIT_FAILURE);
    }
    aux->dato = numero;
    aux->next = *pl;
    *pl = aux;
}

Lista *ricerca(Lista *pl, Dato d)
{
    while (*pl)
    {
        if ((*pl)->dato == d)
            break;
        pl = &(*pl)->next;
    }
    return pl;
}

void insOrd(Lista *pl, int numero)
{
    Lista *l_to_insert = pl;
    while (*l_to_insert != NULL && (*l_to_insert)->dato <= numero)
    {
        l_to_insert = &(*l_to_insert)->next;
    }
    insTesta(l_to_insert, numero);
}

// Elimina il primo nodo della lista puntata da pl.
// Dopo l'eliminazione *pl sarà aggiornato al next del nodo rimosso.
void elimTesta(Lista *pl)
{
    if (pl == NULL || *pl == NULL)
        return;
    Nodo *to_free = *pl;
    *pl = (*pl)->next;
    free(to_free);
}

int elim1(Lista *pl, int d)
{
    pl = ricerca(pl, d);
    if (*pl)
    {
        elimTesta(pl);
        return 1;
    }
    else
    {
        return 0;
    }
}

void elimTutti(Lista *pl, int d)
{
    while (*pl)
    {
        pl = ricerca(pl, d);
        if (*pl)
        {
            elimTesta(pl);
        }
    }
}

int lunghezza(Lista l)
{
    int count = 0;
    while (l != NULL)
    {
        count++;
        l = l->next;
    }
    return count;
}

void stampa(Lista l)
{
    printf("[");
    while (l != NULL)
    {
        printf("%d", l->dato);
        if (l->next != NULL)
            printf(", ");
        l = l->next;
    }
    printf("]\n");
}
