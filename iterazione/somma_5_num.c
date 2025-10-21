/*Scrivere un programma che stampi il prodotto dei 
cinque numeri interi inseriti dall’utente*/

#include <stdio.h>

int main()
{
    int num, prodotto = 1;
    for(int i = 0; i < 5; i++)
    {
        printf("Inserire numero %d: ", (i+1));
        scanf("%d", &num);
        prodotto = prodotto * num;
    }

    printf("Prodotto: %d\n", prodotto);
}