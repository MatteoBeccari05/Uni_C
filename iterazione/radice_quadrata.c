/*
Scrivere un programma che calcoli un’approssimazione della radice quadrata di un
numero reale a con il cosiddetto metodo babilonese: una successione x di
approssimazioni in cui il primo elemento x1 è 1.0 e il successore xk`1 di xk è la media
aritmetica fra xk e a{xk
Testarlo chiamandolo con input significativi.
*/


#include <stdio.h>

int main()
{
    double a, x, x_prec, diff, tolleranza = 0.000001; // tolleranza = 10^-6

    printf("Inserisci un numero positivo: ");
    scanf("%lf", &a);

    x = 1.0; // prima approssimazione

    do
    {
        x_prec = x;
        x = (x_prec + a / x_prec) / 2.0; // formula babilonese

        // calcoliamo il valore assoluto della differenza
        diff = x - x_prec;
        if (diff < 0)
            diff = -diff;

    } while (diff > tolleranza);

    printf("Radice quadrata approssimata di %.2f = %.2f\n", a, x);

    return 0;
}
