/*
Stampare il quoziente e il resto di due numeri m e n richiesti all’utente, usando il
metodo delle sottrazioni successive.
Il quoziente è il numero di volte che è necessario sottrarre n da m per ottenere un
risultato negativo, diminuito di 1. Il resto è il sottraendo dell’ultima sottrazione.
Ad esempio, il quoziente intero di 12 e 5 è 2 perché sottraendo 5 da 12 3 volte si
ottiene un numero negativo; il resto è 2, ossia il sottraendo della terza sottrazione.
*/

#include <stdio.h>

int main()
{
    int m, n;
    int quoziente = 0;
    int resto;

    printf("Inserire il dividendo (m): ");
    scanf("%d", &m);

    printf("Inserire il divisore (n): ");
    scanf("%d", &n);

    resto = m;

    while (resto >= n)
    {
        resto = resto - n;
        quoziente++;
    }

    printf("Quoziente: %d\n", quoziente);
    printf("Resto: %d\n", resto);

    return 0;
}
