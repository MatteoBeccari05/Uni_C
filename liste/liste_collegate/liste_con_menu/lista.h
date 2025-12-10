typedef int Dato;
typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

void nuova_lista(Lista *pl);
void azzera(Lista l);
Lista *ricerca(Lista *pl, Dato d);
void ins_testa(Lista *pl, Dato d);
void stampa_lista(Lista l1);
Lista array_to_list(int a[], int dl);
void elimina_testa(Lista *pl);
void elimina_elemento(Lista *pl, Dato d);
void genera_lista_non_ordinata(Lista *pl, int n);
void genera_lista_ordinata(Lista *pl, int n);
void inserimento_coda(Lista *pl, int d);
void inserimento_ordinato(Lista *pl, int d);
void insertion_sort(Lista *pl1);
int lunghezza(Lista l);
int *list_to_array(Lista l);
void reverse(Lista l1, Lista *pl2);
void elimina_tutti(Lista *pl, int d);





