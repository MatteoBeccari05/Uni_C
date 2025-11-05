/*
Scrivere un programma che richieda all’utente 5 numeri, e poi stampi una riga
contenente l’uguaglianza fra l’espressione prodotto dei cinque numeri inseriti e il
risultato della moltiplicazione. Ad esempio:
2 x 4 x 5 x 3 x 2 = 240
*/

#include <stdio.h>
#define DIM 5

int main()
{
    int array[DIM];
    int prodotto = 1;
    for(int i = 0; i<DIM; i++)
    {
        printf("Inserire numero %d: ", (i+1));
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < DIM; i++)
    {
        prodotto = prodotto * array[i];
    }

    for(int i = 0; i < DIM; i++)
    {
        if(i == DIM - 1)
            printf("%d", array[i]); // ultimo numero senza x
        else
            printf("%d x ", array[i]);
    }

    printf(" = %d\n", prodotto);
}