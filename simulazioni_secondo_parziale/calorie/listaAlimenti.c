#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "listaAlimenti.h"

// definizione
void nuova_lista(Lista *pl)
{
  *pl = NULL;
}

void insTesta(Lista *pl, Cibo val)
{
  Nodo *aux;
  aux = (Nodo *)malloc(sizeof(Nodo));
  if (aux == NULL)
  {
    printf("Errore allocazione memoria\n");
    exit(3);
  }
  aux->dato = val;
  aux->next = *pl;
  *pl = aux;
}

void ins_coda(Lista *pl, Cibo d)
{
  while (*pl != NULL)
  {
    pl = &(*pl)->next;
  }
  insTesta(pl, d);
}

float calorie100(Lista l, char nome[])
{
  while (l != NULL)
  {
    if (strcmp(l->dato.nome, nome) == 0) // trovato il cibo
      return l->dato.calorie;

    l = l->next;
  }

  printf("Cibo non trovato: %s\n", nome);
  exit(4);
}