typedef struct
{
    char targa[8];
    float durata_sosta;
} Record;

typedef struct
{
    char targa[8];
    float durata_totale;
    float fattura_totale;
    int accessi;
} Dato;

typedef struct nodo
{
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *l);

void aggiorna(Lista *l, Record r);

void stampa(Lista l);