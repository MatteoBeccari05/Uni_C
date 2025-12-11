#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaClienti.h"

void nuovaLista(Lista *l)
{
  *l = NULL;
}

void ins_testa(Lista *pl, Dato d)
{
  Nodo *aux;
  aux = (Nodo *)malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl; // valore della l del main
  *pl = aux;
}

void aggiorna(Lista *l, Record r)
{
  while ((*l) != NULL && strcmp((*l)->dato.cf, r.cf) != 0)
  {
    l = &(*l)->next;
  }

  if (*l != NULL && strcmp((*l)->dato.cf, r.cf) == 0)
  {
    (*l)->dato.consumo_totale += r.consumo;
    (*l)->dato.addebito_totale += 25.0 + 0.16643 * r.consumo;
  }
  else
  {
    Dato d;
    strcpy(d.cf, r.cf);
    d.consumo_totale = r.consumo;
    d.addebito_totale = 25.0 + 0.16643 * r.consumo;
    ins_testa(l, d);
  }
}

void stampa(Lista l)
{
  printf("Codice fiscale     Consumo totale   Addebito totale\n");
    while (l)
    {
        printf("%s ", l->dato.cf);
        printf("   %f ", l->dato.consumo_totale);
        printf("     %f ", l->dato.addebito_totale);
        l = l->next;
        printf("\n");
    }
}