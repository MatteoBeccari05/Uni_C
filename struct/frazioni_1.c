/*
Scrivere un programma che definisca un ADT Frazione adatto a rappresentare un
numero razionale con le seguenti operazioni
1 creazione di una funzione dati numeratore e denominatore
2 input di una frazione da tastiera
3 stampa di una frazione in formato frazionario (ad esempio 2/3)
4 stampa di una frazione in formato decimale (ad esempio 0.666666)
Nella funzione main testare le funzionalità implementate. La funzione main deve
accedere alle variabili di tipo Frazione solo attraverso le procedure o funzioni definite;
in particolare, non deve accedere direttamente ai campi.
*/

#include <stdio.h>

typedef struct
{
    int num;
    int den;
} Frazione;

/// @brief Compone la frazione
/// @param n numeratore
/// @param d denominatore
/// @return 
Frazione frazione(int n, int d)
{
    Frazione f;
    f.num = n;
    f.den = d;
    return f;
}

/// @brief Ritorna il denominatore
/// @param f 
/// @return 
int den(Frazione f)
{
    return f.den;
}

/// @brief Ritorna il numeratore
/// @param f 
/// @return 
int num(Frazione f)
{
    return f.num;
}

/// @brief Chiede all'utente il numeratore e il denominatore
/// @return Ritorna la frazione
Frazione inputFrazione()
{
    int n, d;
    printf("Inserire numeratore: ");
    scanf("%d", &n);
    printf("Inserire denominatore: ");
    scanf("%d", &d);
    return frazione(n, d);
}

/// @brief Stampa la frazione
/// @param f 
void stampaFrazionaria(Frazione f)
{
    printf("%d/%d\n", num(f), den(f));
}

/// @brief Stampa il risultato della frazione
/// @param f 
void stampaDecimale(Frazione f)
{
    printf("%f\n", (float)num(f)/den(f));
}

int main()
{
    Frazione f;
    f = inputFrazione();
    stampaFrazionaria(f);
    stampaDecimale(f);
}
