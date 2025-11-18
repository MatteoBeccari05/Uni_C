/*
Estendere il programma implementando le quattro operazioni su frazioni:
somma
sottrazione
moltiplicazione
divisione
Il programma deve richiedere all’utente due frazioni e quale operazione eseguire,
eseguire il calcolo e stampare il risultato.
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
    do
    {
        printf("Inserire denominatore: ");
        scanf("%d", &d);
    } while (d == 0);

    return frazione(n, d);
}

/// @brief Calcola mcd tra due numeri
/// @param a
/// @param b
/// @return
int mcd(int a, int b)
{
    // lavoro con i valori assoluti
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    // caso particolare: se a = 0 o b = 0
    if (a == 0 && b == 0)
        return 1; // MCD "neutro"
    if (b == 0)
        return a;

    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int mcm(int a, int b)
{
    return (a / mcd(a, b)) * b;
}

/// @brief Stampa la frazione
/// @param f
void stampaFrazionaria(Frazione f)
{
    int g = mcd(f.num, f.den);
    f.num /= g;
    f.den /= g;

    printf("%d/%d\n", num(f), den(f));
}

/// @brief Stampa il risultato della frazione
/// @param f
void stampaDecimale(Frazione f)
{
    printf("%f\n", (float)num(f) / den(f));
}

Frazione somma(Frazione f1, Frazione f2)
{
    Frazione somma;
    somma.den = mcm(f1.den, f2.den);
    somma.num = (somma.den / f1.den * f1.num) + (somma.den / f2.den * f2.num);
    return somma;
}

Frazione differenza(Frazione f1, Frazione f2)
{
    Frazione differenza;
    differenza.den = mcm(f1.den, f2.den);
    differenza.num = (differenza.den / f1.den * f1.num) - (differenza.den / f2.den * f2.num);
    return differenza;
}

Frazione moltiplicazione(Frazione f1, Frazione f2)
{
    Frazione m;
    m.num = f1.num * f2.num;
    m.den = f1.den * f2.den;
    return m;
}

Frazione divisione(Frazione f1, Frazione f2)
{
    Frazione div;
    div.num = f1.num * f2.den;
    div.den = f1.den * f2.num;
    return div;
}

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
