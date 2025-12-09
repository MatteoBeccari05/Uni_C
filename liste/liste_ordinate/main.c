#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    Lista l;

    // 1. Creazione di una nuova lista
    nuova_lista(&l);
    printf("Lista iniziale (dopo nuova_lista):\n");
    stampa(l);

    // 2. Inserimento in testa
    insTesta(&l, 10);
    insTesta(&l, 20);
    insTesta(&l, 5);
    printf("\nLista dopo insTesta 5, 20, 10:\n");
    stampa(l);

    // 3. Inserimento ordinato
    insOrd(&l, 15);
    insOrd(&l, 25);
    insOrd(&l, 1);
    printf("\nLista dopo insOrd 15, 25, 1:\n");
    stampa(l);

    // 4. Ricerca elementi
    printf("\nRicerca 15: %s\n", ricerca(l, 15) ? "Trovato" : "Non trovato");
    printf("Ricerca 100: %s\n", ricerca(l, 100) ? "Trovato" : "Non trovato");

    // 5. Eliminazione di un elemento
    elim1(&l, 20);
    printf("\nLista dopo elim1 20:\n");
    stampa(l);

    // 6. Eliminazione di tutti gli elementi uguali a 10
    insTesta(&l, 10);
    insOrd(&l, 10);
    printf("\nLista prima di elimTutti 10:\n");
    stampa(l);
    elimTutti(&l, 10);
    printf("Lista dopo elimTutti 10:\n");
    stampa(l);

    // 7. Controllo lunghezza
    printf("\nLunghezza lista: %d\n", lunghezza(l));

    // 8. Controllo vuota e piena
    printf("La lista è vuota? %s\n", vuota(l) ? "Sì" : "No");
    printf("La lista è piena? %s\n", piena(l) ? "Sì" : "No");

    return 0;
}
