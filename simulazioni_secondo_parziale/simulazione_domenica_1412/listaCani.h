typedef struct 
{
    int numero_chip;
    char tipo_vaccino;
} Record;

typedef struct
{
    int numero_chip;
    int C;
    int E; 
    int P;
} Dato;

typedef struct nodo
{
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *l);

void aggiorna(Lista *l, Record r);

void stampa_vaccini_non_effettuati(Lista l);
