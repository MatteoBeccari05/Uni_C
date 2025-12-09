#include <stdio.h>
#include <string.h>

#define MAX_LEN 30

typedef enum
{
    Lunedì,
    Martedì,
    Mercoledì,
    Giovedì,
    Venerdì,
    NUM_GIORNI
} Giorno;

typedef enum
{
    Slot1,
    Slot2,
    Slot3,
    Slot4,
    NUM_SLOT
} Slot;

typedef struct
{
    char materia[MAX_LEN];
} Lezione;

typedef struct
{
    Lezione orario[NUM_SLOT][NUM_GIORNI];
} Orario;

int scegli_giorno()
{
    const char *nomi_giorni[NUM_GIORNI] = {"Lunedì", "Martedì", "Mercoledì", "Giovedì", "Venerdì"};
    int scelta;
    for (int i = 0; i < NUM_GIORNI; i++)
        printf("%d) %s\n", i, nomi_giorni[i]);

    do
    {
        printf("Scegli un giorno (0-4): ");
        scanf("%d", &scelta);
    } while (scelta < 0 || scelta >= NUM_GIORNI);

    return scelta;
}

int scegli_slot()
{
    const char *nomi_slot[NUM_SLOT] = {"Slot1", "Slot2", "Slot3", "Slot4"};
    int scelta;
    for (int i = 0; i < NUM_SLOT; i++)
        printf("%d) %s\n", i, nomi_slot[i]);

    do
    {
        printf("Scegli uno slot (0-3): ");
        scanf("%d", &scelta);
    } while (scelta < 0 || scelta >= NUM_SLOT);

    return scelta;
}

void inizializza(Orario *o)
{
    for (int i = 0; i < NUM_SLOT; i++)
        for (int j = 0; j < NUM_GIORNI; j++)
            strcpy(o->orario[i][j].materia, "Vuoto");
}

void stampa(const Orario *o)
{
    const char *nomi_giorni[NUM_GIORNI] = {"Lunedì", "Martedì", "Mercoledì", "Giovedì", "Venerdì"};
    printf("\t");
    for (int j = 0; j < NUM_GIORNI; j++)
        printf("%-12s", nomi_giorni[j]);
    printf("\n");

    for (int i = 0; i < NUM_SLOT; i++)
    {
        printf("Slot%d\t", i + 1);
        for (int j = 0; j < NUM_GIORNI; j++)
            printf("%-12s", o->orario[i][j].materia);
        printf("\n");
    }
}

void stampa_giorno(const Orario *o)
{
    int giorno = scegli_giorno();
    printf("Orario del giorno selezionato:\n");
    for (int i = 0; i < NUM_SLOT; i++)
        printf("Slot%d: %s\n", i + 1, o->orario[i][giorno].materia);
}

void modifica_orario(Orario *o)
{
    int giorno = scegli_giorno();
    int slot = scegli_slot();

    printf("Inserisci la materia: ");
    scanf("%s", o->orario[slot][giorno].materia);

    printf("Orario modificato con successo!\n");
}

int main()
{
    Orario mio_orario;
    char scelta;
    inizializza(&mio_orario);

    do
    {
        printf("\na) Stampare l'orario completo\n");
        printf("b) Stampare l'orario di un solo giorno\n");
        printf("c) Modificare l'orario\n");
        printf("q) Uscire\n");
        printf("Scelta: ");

        scanf(" %c", &scelta);

        switch (scelta)
        {
        case 'a':
            stampa(&mio_orario);
            break;
        case 'b':
            stampa_giorno(&mio_orario);
            break;
        case 'c':
            modifica_orario(&mio_orario);
            break;
        case 'q':
            printf("Uscita...\n");
            break;
        default:
            printf("Scelta non valida!\n");
            break;
        }
    } while (scelta != 'q');

    return 0;
}
