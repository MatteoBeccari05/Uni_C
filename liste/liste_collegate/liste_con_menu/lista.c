#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void nuova_lista(Lista *pl)
{
    *pl = NULL;
}

Lista *ricerca(Lista *pl, Dato d)
{
    while (*pl)
    {
        if ((*pl)->dato == d)
        {
            break;
        }
        pl = &(*pl)->next;
    }
    return pl;
}

void azzera(Lista l)
{
    while (l)
    {
        l->dato = 0;
        l = l->next;
    }
}

void ins_testa(Lista *pl, Dato d)
{
    Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
    if (aux == NULL)
    {
        exit(1);
    }
    aux->dato = d;
    aux->next = *pl;
    *pl = aux;
}

void stampa_lista(Lista l1)
{
    while (l1)
    {
        printf("%d ", l1->dato);
        l1 = l1->next;
    }
    printf("\n");
}

Lista array_to_list(int a[], int dl)
{
    Lista l = NULL;
    for (int i = dl - 1; i >= 0; i--)
    {
        ins_testa(&l, a[i]);
    }
    return l;
}

void elimina_testa(Lista *pl)
{
    Nodo *aux = *pl;
    *pl = (*pl)->next;
    free(aux);
}

void elimina_elemento(Lista *pl, Dato d)
{
    while (*pl != NULL && (*pl)->dato != d)
    {
        pl = &(*pl)->next;
    }
    elimina_testa(pl);
}

void elimina_tutti(Lista *pl, int d)
{
    while (*pl)
    {
        pl = ricerca(pl, d);
        if (*pl)
            elimina_testa(pl);
    }
}

int rnd_int(int min, int max)
{
    return min + rand() % (max - min + 1);
}

void genera_lista_non_ordinata(Lista *pl, int n)
{

    int a[] = {6, 2, 3, 2, 4, 7, 0, 2, 5, 1};
    int i;
    for (i = 0; i < n; i++)
    {
        (*pl) = (Nodo *)malloc(sizeof(Nodo));
        (*pl)->dato = a[i];
        (*pl)->next = NULL;
        pl = &(*pl)->next;
    }
}

void genera_lista_ordinata(Lista *pl, int n)
{
    int a[] = {2, 3, 4, 5, 7, 8, 12, 15, 21, 24};
    int i;
    for (i = 0; i < n; i++)
    {
        (*pl) = (Nodo *)malloc(sizeof(Nodo));
        (*pl)->dato = a[i];
        (*pl)->next = NULL;
        pl = &(*pl)->next;
    }
}

void inserimento_coda(Lista *pl, int d)
{
    pl = ricerca(pl, d);
    ins_testa(pl, d);
}

void inserimento_ordinato(Lista *pl, int d)
{
    pl = ricerca(pl, d);
    ins_testa(pl, d);
}


void insertion_sort(Lista *pl1)
{
    Lista l2;
    nuova_lista(&l2);
    while (*pl1)
    {
        inserimento_ordinato(&l2, (*pl1)->dato);
        elimina_testa(pl1);          
    }
    *pl1 = l2;
}

int lunghezza(Lista l)
{
    int c = 0;
    while (l != NULL)
    {
        c++;
        l = l->next;
    }
    return c;
}

int *list_to_array(Lista l)
{
    int dim = lunghezza(l);
    int *pi; // punt intero
    pi = (int *)malloc(dim * sizeof(int));
    int i = 0;
    while (l != NULL)
    {
        pi[i] = l->dato;
        i++;
        l = l->next;
    }
    return pi;
}

void reverse(Lista l1, Lista *pl2)
{
    nuova_lista(pl2);
    while (l1)
    {
        ins_testa(pl2, l1->dato);
        l1 = l1->next;
    }
}
