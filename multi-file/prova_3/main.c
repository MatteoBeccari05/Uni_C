#include <stdio.h>
#include "frazioni.h"

int main()
{
    Frazione f1, f2;
    f1 = inputFrazione();
    f2 = inputFrazione();

    printf("Somma: ");
    Frazione s = somma(f1, f2);
    stampaFrazionaria(s);

    printf("Differenza: ");
    Frazione d = differenza(f1, f2);
    stampaFrazionaria(d);

    printf("Moltiplicazione: ");
    Frazione m = moltiplicazione(f1, f2);
    stampaFrazionaria(m);

    printf("Divisione: ");
    Frazione div = divisione(f1, f2);
    stampaFrazionaria(div);
}
