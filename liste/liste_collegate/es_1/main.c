#include <stdio.h>
#include <stdlib.h>
#include "listaCollegata.h"

int main(void)
{
    Lista l;

    printf("--- Test lista collegata ---\n");

    // inizializza lista
    nuovaLista(&l);
    printf("Lista appena creata (vuota)? %s\n", vuota(l) ? "sì" : "no");

    // Inserimenti in testa
    insTesta(&l, 3);
    insTesta(&l, 1);
    insTesta(&l, 4);
    printf("Dopo insTesta 4,1,3: ");
    stampa(l);

    // Inserimento ordinato
    insOrd(&l, 2);
    insOrd(&l, 5);
    printf("Dopo insOrd 2,5: ");
    stampa(l);

    // Lunghezza
    printf("Lunghezza: %d\n", lunghezza(l));

    // Ricerca e eliminazione di un singolo elemento
    printf("Elimino elemento 1 (elim1):\n");
    if (elim1(&l, 1))
    {
        printf("Elemento 1 eliminato. Lista ora: ");
        stampa(l);
    }
    else
    {
        printf("Elemento 1 non trovato.\n");
    }

    // Aggiungo elementi duplicati per testare elimTutti
    insTesta(&l, 2);
    insTesta(&l, 2);
    printf("Aggiunti due 2 in testa: ");
    stampa(l);

    printf("Elimino tutti i 2 (elimTutti):\n");
    elimTutti(&l, 2);
    stampa(l);

    // Ricerca di un elemento
    Lista *p = ricerca(&l, 5);
    if (*p)
        printf("Valore %d trovato nella lista.\n", (*p)->dato);
    else
        printf("Valore 5 non trovato.\n");

    // Pulizia finale: elimina tutti i nodi rimanenti usando elimTutti
    printf("Pulizia finale della lista con elimTutti...\n");
    while (!vuota(l))
    {
        elimTutti(&l, l->dato); // elimina tutti i nodi uno alla volta
    }
    printf("Lista dopo pulizia finale (vuota)? %s\n", vuota(l) ? "sì" : "no");

    return 0;
}
