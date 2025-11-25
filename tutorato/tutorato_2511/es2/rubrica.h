typedef struct 
{
    char nome[30];
    char cognome[30];
    int numero;
} Contatto;

void StampaRubrica(Contatto rubrica[], int n);
void InserisciNuovoContatto(Contatto rubrica[], int *n);
void CercaContatto(Contatto *r, int n);
void StampaContatto(Contatto c);
