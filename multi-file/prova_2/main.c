#include <stdio.h>
#include "operazioni.h"

int main()
{
    printf("=== TEST FUNZIONI CON DUE NUMERI ===\n\n");

    double a = 10.0;
    double b = 3.0;

    printf("Somma tra due numeri (%.2f + %.2f) = %.2f\n", a, b, somma_due_numeri(a, b));
    printf("Differenza tra due numeri (%.2f - %.2f) = %.2f\n", a, b, differenza_due_numeri(a, b));
    printf("Moltiplicazione tra due numeri (%.2f * %.2f) = %.2f\n", a, b, moltiplicazione_due_numeri(a, b));
    printf("Divisione tra due numeri (%.2f / %.2f) = %.2f\n", a, b, divisione_due_numeri(a, b));
    printf("Media tra due numeri (%.2f, %.2f) = %.2f\n", a, b, media_due_numeri(a, b));
    printf("Valore assoluto di %.2f = %.2f\n", -a, valore_assoluto(-a));
    printf("Massimo tra %.2f e %.2f = %.2f\n", a, b, massimo(a, b));
    printf("Minimo tra %.2f e %.2f = %.2f\n", a, b, minimo(a, b));

    printf("\n=== TEST RADICE E POTENZA ===\n\n");

    double x = 81.0;
    int n = 4;
    printf("Radice %d-esima di %.2f = %.10f\n", n, x, radice_n(x, n));

    double base = 2.0;
    int esp = -3;
    printf("%.2f elevato a %d = %.10f\n", base, esp, potenza(base, esp));

    printf("\n=== TEST FUNZIONI SU N NUMERI ===\n\n");

    double valori[] = {3.0, 6.0, 2.0, 4.0};
    int size = 4;

    printf("Somma di n numeri = %.2f\n", somma_n(valori, size));
    printf("Differenza di n numeri = %.2f\n", differenza_n(valori, size));
    printf("Moltiplicazione di n numeri = %.2f\n", moltiplicazione_n(valori, size));
    printf("Divisione di n numeri = %.2f\n", divisione_n(valori, size));
    printf("Media di n numeri = %.2f\n", media_n_numeri(valori, size));

    return 0;
}
