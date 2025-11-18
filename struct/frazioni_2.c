/*
Estendere il programma precedente in modo che le frazioni vengano semplificate prima
di essere date in output in forma frazionaria (ad esempio, 4/6 dovrebbe essere
stampata come 2/3).
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

/// @brief Calcola mcd tra due numeri
/// @param a 
/// @param b 
/// @return 
int mcd(int a, int b)
{
    // lavoro con i valori assoluti
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    // caso particolare: se a = 0 o b = 0
    if (a == 0 && b == 0) return 1;   // MCD "neutro"
    if (b == 0) return a;
    
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
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
    printf("%f\n", (float)num(f)/den(f));
}

int main()
{
    Frazione f;
    f = inputFrazione();
    stampaFrazionaria(f);
    stampaDecimale(f);
}
