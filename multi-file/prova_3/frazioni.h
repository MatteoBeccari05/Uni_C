typedef struct
{
    int num;
    int den;
} Frazione;

Frazione frazione(int n, int d);
int den(Frazione f);
int num(Frazione f);
Frazione inputFrazione();
void stampaFrazionaria(Frazione f);
void stampaDecimale(Frazione f);
Frazione somma(Frazione f1, Frazione f2);
Frazione differenza(Frazione f1, Frazione f2);
Frazione moltiplicazione(Frazione f1, Frazione f2);
Frazione divisione(Frazione f1, Frazione f2);