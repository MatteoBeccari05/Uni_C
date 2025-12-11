#include <stdio.h>
#include <stdlib.h>
#include "listaClienti.h"

int main(int argc, char *argv[])
{
  FILE *pf;
  Record r;
  Lista listaClienti;
  if (argc != 2)
  {
    printf("Uso: %s fileRilevamenti\n", argv[0]);
    exit(1);
  }

  pf = fopen(argv[1], "rb");
  if (pf == NULL)
  {
    printf("Errore apertura %S\n", argv[1]);
    exit(2);
  }

  nuovaLista(&listaClienti);

  while (fread(&r, sizeof(Record), 1, pf) == 1)
  {
    aggiorna(&listaClienti, r);
  }

  fclose(pf);


  stampa(listaClienti);

  return 0;
}