#include <stdio.h>
#include "lista.h"

void nuova_lista(Lista *pl)
{
    pl->n_elementi = 0;
}

int vuota(Lista l)
{
    // è vuota se la dimensione logica è 0
    return l.n_elementi == 0;
}

int piena(Lista l)
{
    // è piena se la dimensione logica è pari alla dimensione massima
    return l.n_elementi == DIMENSIONE;
}

void insTesta(Lista *pl, int numero)
{
    int i;
    if (piena(*pl))
    {
        // se la lista è piena non posso inserire elementi
        printf("Errore: lista piena\n");
        exit(-1);
    }
    // faccio spazio per il nuovo numero spostando gli altri a destra
    for (i = pl->n_elementi; i > 0; i--)
        pl->dati[i] = pl->dati[i - 1];
    // inserisco il nuovo numero
    pl->dati[0] = numero;
    // incremento la dimensione logica
    pl->n_elementi++;
}

void insOrd(Lista *pl, int numero)
{
    int i;
    if (piena(*pl))
    {
        // se la lista è piena non posso inserire elementi
        printf("Errore: lista piena\n");
        exit(-1);
    }
    // sposto a destra tutti gli elementi della lista maggiori del numero da inserire
    i = pl->n_elementi;
    while (i > 0 && pl->dati[i - 1] > numero)
    {
        pl->dati[i] = pl->dati[i - 1];
        i--;
    }
    // inserisco il numero
    pl->dati[i] = numero;
    // incremento la dimensione logica
    pl->n_elementi++;
}

int ricerca(Lista l, int numero)
{
    int i;
    // scorro tutti gli elementi della lista
    for (i = 0; i < l.n_elementi; i++)
    {
        // se trovo il numero cercato, ritorno 1
        if (l.dati[i] == numero)
            return 1;
    }
    // la lista è finita: ritorno 0
    return 0;
}

void elim1(Lista *pl, int numero)
{
    int i = 0;
    while (i < pl->n_elementi)
    { // scorro tutti gli elementi
        // se ne trovo uno uguale al numero da eliminare
        if (pl->dati[i] == numero)
        {
            int j;
            // sposto a sinistra tutti gli elementi che lo seguono
            for (j = i; j < pl->n_elementi - 1; j++)
                pl->dati[j] = pl->dati[j + 1];
            pl->n_elementi--; // decremento la dimensione logica
            return;
        }
        else
        {
            i++;
        }
    }
}

void elimTutti(Lista *pl, int numero)
{
    int i = 0;
    while (i < pl->n_elementi)
    { // scorro tutti gli elementi
        // se ne trovo uno uguale al numero da eliminare
        if (pl->dati[i] == numero)
        {
            int j;
            // sposto a sinistra tutti gli elementi che lo seguono
            for (j = i; j < pl->n_elementi - 1; j++)
                pl->dati[j] = pl->dati[j + 1];
            pl->n_elementi--; // decremento la dimensione logica
            // non incremento i perché il nuovo elemento in posizione i va controllato
        }
        else
        {
            i++;
        }
    }
}

int lunghezza(Lista l)
{
    // corrisponde alla dimensione logica della lista
    return l.n_elementi;
}

void stampa(Lista l)
{
    int i;
    // stampo tutti gli elementi, separati da spazi
    for (i = 0; i < l.n_elementi; i++)
    {
        printf("%d ", l.dati[i]);
    }
    // vado a capo
    printf("\n");
}
