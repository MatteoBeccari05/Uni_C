typedef int Dato;
typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;
typedef Nodo* Lista;

void nuovaLista(Lista* pl);
int vuota(Lista l);
int piena(Lista l);
void insTesta(Lista* pl, int numero);
void insOrd(Lista* pl, int numero);
Lista* ricerca (Lista* pl, Dato d);
int elim1 (Lista* pl, int d);
void elimTutti(Lista *pl, int numero);
int lunghezza(Lista l);
void stampa(Lista l);
