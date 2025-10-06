/*
Leggere quattro numeri che rappresentano numeratore e denominatore di due frazioni e
dire se le due frazioni rappresentano lo stesso numero.
*/

#include <stdio.h>

int main()
{
    int num1, num2, den1, den2;
    printf("Inserire numeratore 1: ");
    scanf("%d", &num1);
    printf("Inserire denominatore 1: ");
    scanf("%d", &den1);
    printf("=============================\n");
    printf("Inserire numeratore 2: ");
    scanf("%d", &num2);
    printf("Inserire denominatore 2: ");
    scanf("%d", &den2);
    printf("=============================\n");

    if((num1 / den1) == (num2/den2))
    {
        printf("Le frazioni rappresentano lo stesso numero\n");
    }
    else
    {
        printf("Le frazioni non rappresentano lo stesso numero\n");
    }
}