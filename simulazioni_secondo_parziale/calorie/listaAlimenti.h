#define DIM 1000

typedef struct
{
  char nome[31];
  float calorie;
} Cibo;

typedef struct nodo
{
  Cibo dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

void nuova_lista(Lista *pl);

void insTesta(Lista *pl, Cibo val);
void ins_coda(Lista *pl, Cibo d);

float calorie100(Lista l, char nome[]);