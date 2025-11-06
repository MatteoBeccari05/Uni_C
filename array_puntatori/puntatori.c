#include <stdio.h>

int main()
{
    int a[5] = {4, 1, 0, 8, 5};
    int *p;                     

    p = a; // p punta al primo elemento dell'array (equivale a: p = &a[0])

    printf("Valore del primo elemento: %d\n", *p);

    // Spostiamo il puntatore di una posizione
    p++; // ora p punta a a[1]
    printf("Valore del secondo elemento: %d\n", *p);

    // Modifichiamo il terzo elemento usando il puntatore
    p++; // ora p punta a a[2]
    *p = 15; // cambia a[2]

    // Stampiamo l'array aggiornato
    printf("\nArray aggiornato:\n");
    for(int i = 0; i < 5; i++)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}
