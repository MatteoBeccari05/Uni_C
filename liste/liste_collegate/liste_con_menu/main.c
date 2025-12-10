#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista.h"

int leggi_intero(const char *prompt)
{
    int v;
    printf("%s", prompt);
    while (scanf("%d", &v) != 1)
    {
        printf("Input non valido. Riprova: ");
    }
    return v;
}

int main(void)
{
    Lista lista;
    nuova_lista(&lista);
    srand((unsigned)time(NULL));

    int scelta;
    int valore, n;
    int *arr;
    int i, dl;

    do
    {
        printf("\n=== MENU LISTA ===\n");
        printf("1) Inizializza lista (nuova lista vuota)\n");
        printf("2) Stampa lista\n");
        printf("3) Inserisci in testa\n");
        printf("4) Inserisci in coda (usa inserimento_coda)\n");
        printf("5) Inserisci ordinato (usa inserimento_ordinato)\n");
        printf("6) Elimina testa\n");
        printf("7) Elimina primo elemento con valore X\n");
        printf("8) Elimina tutte le occorrenze di X\n");
        printf("9) Genera lista non ordinata (sample)\n");
        printf("10) Genera lista ordinata (sample)\n");
        printf("11) Ordina lista (insertion_sort)\n");
        printf("12) Azzerare (imposta tutti i dati a 0)\n");
        printf("13) Lunghezza della lista\n");
        printf("14) Converti lista in vettore e stampa\n");
        printf("15) Costruisci lista da vettore\n");
        printf("16) Reverse (crea una lista invertita)\n");
        printf("0) Esci\n");
        scelta = leggi_intero("Seleziona un'opzione: ");

        switch (scelta)
        {
        case 1:
            nuova_lista(&lista);
            printf("Lista inizializzata (vuota).\n");
            break;

        case 2:
            printf("Contenuto lista: ");
            stampa_lista(lista);
            break;

        case 3:
            valore = leggi_intero("Valore da inserire in testa: ");
            ins_testa(&lista, valore);
            printf("Inserito %d in testa.\n", valore);
            break;

        case 4:
            valore = leggi_intero("Valore da inserire in coda: ");
            inserimento_coda(&lista, valore);
            printf("Inserito %d in coda (tramite inserimento_coda).\n", valore);
            break;

        case 5:
            valore = leggi_intero("Valore da inserire ordinato: ");
            inserimento_ordinato(&lista, valore);
            printf("Inserito %d nella lista ordinata (tramite inserimento_ordinato).\n", valore);
            break;

        case 6:
            if (lista == NULL)
            {
                printf("Lista vuota: nulla da eliminare.\n");
            }
            else
            {
                elimina_testa(&lista);
                printf("Eliminata testa.\n");
            }
            break;

        case 7:
            valore = leggi_intero("Valore da eliminare (prima occorrenza): ");
            elimina_elemento(&lista, valore);
            printf("Elimina primo elemento con valore %d (se presente).\n", valore);
            break;

        case 8:
            valore = leggi_intero("Valore da eliminare (tutte le occorrenze): ");
            elimina_tutti(&lista, valore);
            printf("Eliminate tutte le occorrenze di %d.\n", valore);
            break;

        case 9:
            n = leggi_intero("Quanti elementi generare? (max 10 raccomandati): ");
            if (n < 0)
            {
                printf("Numero non valido.\n");
                break;
            }
            /* svuoto la lista e genero */
            nuova_lista(&lista);
            genera_lista_non_ordinata(&lista, n);
            printf("Lista non ordinata generata (primi %d valori del sample).\n", n);
            break;

        case 10:
            n = leggi_intero("Quanti elementi generare? (max 10 raccomandati): ");
            if (n < 0)
            {
                printf("Numero non valido.\n");
                break;
            }
            nuova_lista(&lista);
            genera_lista_ordinata(&lista, n);
            printf("Lista ordinata generata (primi %d valori del sample).\n", n);
            break;

        case 11:
            insertion_sort(&lista);
            printf("Lista ordinata con insertion_sort.\n");
            break;

        case 12:
            azzera(lista);
            printf("Tutti i campi dato sono stati impostati a 0.\n");
            break;

        case 13:
            printf("Lunghezza lista: %d\n", lunghezza(lista));
            break;

        case 14:
            dl = lunghezza(lista);
            if (dl == 0)
            {
                printf("Lista vuota.\n");
            }
            else
            {
                arr = list_to_array(lista);
                printf("Vettore estratto (dimensione %d): ", dl);
                for (i = 0; i < dl; ++i)
                    printf("%d ", arr[i]);
                printf("\n");
                free(arr);
            }
            break;

        case 15:
            n = leggi_intero("Quanti elementi inserire nel vettore? ");
            if (n < 0)
            {
                printf("Numero non valido.\n");
                break;
            }
            arr = (int *)malloc(n * sizeof(int));
            if (!arr)
            {
                printf("Errore allocazione.\n");
                break;
            }
            for (i = 0; i < n; ++i)
            {
                char buf[64];
                printf("Elemento %d: ", i);
                if (fgets(buf, sizeof buf, stdin) == NULL)
                {
                    arr[i] = 0;
                }
                else
                    arr[i] = atoi(buf);
            }
            lista = array_to_list(arr, n);
            free(arr);
            printf("Lista creata dall'array (%d elementi).\n", n);
            break;

        case 16:
        {
            Lista lista_rev;
            reverse(lista, &lista_rev);
            printf("Lista originale: ");
            stampa_lista(lista);
            printf("Lista invertita: ");
            stampa_lista(lista_rev);
            break;
        }

        case 0:
            break;

        default:
            printf("Opzione non valida.\n");
            break;
        }

    } while (scelta != 0);

    return 0;
}
