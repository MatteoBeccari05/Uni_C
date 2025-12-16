typedef struct
{
    int matricola;
    char nome_esame[40];
    int giorno;
    int mese;
    int anno;
    int voto;
} Record;

typedef struct
{
    int matricola;
    float somma_voti;
    int n_esami;
} Dato;

typedef struct nodo
{
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);
void aggiorna(Lista *pl, Record r);
void stampa(Lista l);
void ordina(Lista *pl);
