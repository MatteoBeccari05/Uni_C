#define NRIGHE 4
#define NCOLONNE 6

typedef enum
{
    Vittoria,
    Sconfitta,
    Aperto
} Valutazione;

typedef struct
{
    int mina;
    int coperta;
} Cella;

typedef struct 
{
    Cella celle[NRIGHE][NCOLONNE];
} Campo;

typedef struct 
{
    int riga;
    int colonna;
} Mossa;

void leggi_mossa(Mossa *mossa);
void inizializza(Campo *pcampo, float probmina);
void stampa(Campo *c);
void aggiorna(Campo *c, Mossa *m);
Valutazione valuta(Campo *pc);

