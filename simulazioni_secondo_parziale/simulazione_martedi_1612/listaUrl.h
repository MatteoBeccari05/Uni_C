typedef struct 
{
    char url[100];
    int ora_visita;
    int minuti_visita;
} Record;

typedef struct
{
    int conta_visite;
    char url[100];
    int ora_max;
    int min_max;
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
