/// @brief Esegue la somma di due numeri
/// @param a
/// @param b
/// @return Risultato della somma
double somma_due_numeri(double a, double b)
{
    return a + b;
}

/// @brief Esegue la differenza di due numeri
/// @param a
/// @param b
/// @return Risultato della differenza
double differenza_due_numeri(double a, double b)
{
    return a - b;
}

/// @brief Esegue la moltiplicazione di due numeri
/// @param a
/// @param b
/// @return Risultato della moltiplicazione
double moltiplicazione_due_numeri(double a, double b)
{
    return a * b;
}

/// @brief Esegue la divisione di due numeri
/// @param a
/// @param b
/// @return Risultato della divisione
double divisione_due_numeri(double a, double b)
{
    return a / b;
}

/// @brief Esegue la radice n-sima di un radicando
/// @param x Radicando
/// @param n Indice della radice
/// @return Risultato della radice
double radice_n(double x, int n)
{
    double guess = x;
    double next;
    double pot;

    for (int iter = 0; iter < 30; iter++)
    {
        pot = 1;
        for (int i = 0; i < n - 1; i++)
        {
            pot *= guess;
        }

        next = (guess + x / pot) / 2;

        if (next == guess)
            break;

        guess = next;
    }

    return guess;
}

/// @brief Esegue la potenza di un numero elevato ad un esponente
/// @param base Base della potenza
/// @param esp Esponente della potenza
/// @return Risultato della potenza
double potenza(double base, int esp)
{
    double risultato = 1;

    if (esp < 0)
    {
        esp = -esp;
        for (int i = 0; i < esp; i++)
            risultato *= base;

        return 1.0 / risultato;
    }

    for (int i = 0; i < esp; i++)
        risultato *= base;

    return risultato;
}

/// @brief Restituisce il valore assoluto di un numero
double valore_assoluto(double x)
{
    return (x < 0) ? -x : x;
}

/// @brief Restituisce il massimo tra due numeri
double massimo(double a, double b)
{
    return (a > b) ? a : b;
}

/// @brief Restituisce il minimo tra due numeri
double minimo(double a, double b)
{
    return (a < b) ? a : b;
}

/// @brief Calcola la media aritmetica di due numeri
double media_due_numeri(double a, double b)
{
    return (a + b) / 2.0;
}

/// @brief Calcola la media di n numeri contenuti in un array
/// @param v Array dei valori
/// @param n Numero di valori
/// @return Media dei valori, 0 se n <= 0
double media_n_numeri(double v[], int n)
{
    if (n <= 0)
        return 0;

    double somma = 0;

    for (int i = 0; i < n; i++)
    {
        somma += v[i];
    }

    return somma / n;
}

/// @brief Calcola la somma di n numeri
/// @param v Array dei valori
/// @param n Numero di valori
/// @return Somma totale, 0 se n <= 0
double somma_n(double v[], int n)
{
    if (n <= 0)
        return 0;

    double s = 0;

    for (int i = 0; i < n; i++)
    {
        s += v[i];
    }

    return s;
}

/// @brief Calcola la differenza tra n numeri (v[0] - v[1] - ... - v[n-1])
/// @param v Array dei valori
/// @param n Numero di valori
/// @return Risultato, 0 se n <= 0
double differenza_n(double v[], int n)
{
    if (n <= 0)
        return 0;

    double d = v[0];

    for (int i = 1; i < n; i++)
    {
        d -= v[i];
    }

    return d;
}

/// @brief Calcola la moltiplicazione di n numeri
/// @param v Array dei valori
/// @param n Numero di valori
/// @return Prodotto, 0 se n <= 0
double moltiplicazione_n(double v[], int n)
{
    if (n <= 0)
        return 0;

    double p = 1;

    for (int i = 0; i < n; i++)
    {
        p *= v[i];
    }

    return p;
}

/// @brief Calcola la divisione tra n numeri (v[0] / v[1] / ... / v[n-1])
/// @param v Array dei valori
/// @param n Numero di valori
/// @return Risultato finale, 0 se n <= 0 o se divide per zero
double divisione_n(double v[], int n)
{
    if (n <= 0)
        return 0;

    double d = v[0];

    for (int i = 1; i < n; i++)
    {
        if (v[i] == 0)
            return 0; // evita divisione per zero

        d /= v[i];
    }

    return d;
}
