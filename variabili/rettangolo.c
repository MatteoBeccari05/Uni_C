/*
Calcolare l’area e il perimetro di un rettangolo 
richiedendo all’utente la base e l’altezza
*/

#include <stdio.h>

int main()
{
    int base, altezza;
    printf("Inserire l'altezza del rettangolo: ");
    scanf("%d", &altezza);
    printf("Inserire la base del rettangolo: ");
    scanf("%d", &base);
    printf("Area: %d cm2\n", base*altezza);
    printf("Perimetro: %d cm\n", base*2 + altezza*2);
}