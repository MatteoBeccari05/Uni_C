/*Stampare il prodotto di due numeri m e n richiesti all’utente, 
calcolandolo come somma di n addendi pari a m.*/

#include <stdio.h>

int main()
{
    int m, n, prodotto = 0;

    printf("Inserire il primo numero (m): ");
    scanf("%d", &m);
    printf("Inserire il secondo numero (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        prodotto = prodotto + m;
    }

    printf("Il prodotto tra %d e %d è: %d\n", m, n, prodotto);

    return 0;
}
