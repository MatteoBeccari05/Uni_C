/*
Calcolare l’area e il perimetro 
di un quadrato il cui lato è richiesto all’utente.
*/

#include <stdio.h>

int main()
{
    int lato;
    printf("Inserire il lato del quadrato: ");
    scanf("%d", &lato);
    printf("Area: %d cm2\n", lato*lato);
    printf("Perimetro: %d cm\n", lato*4);
}