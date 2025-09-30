/*Calcolare la somma di tre numeri richiesti all’utente.*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Inserire numero 1: ");
    scanf("%d", &a);
    printf("Inserire numero 2: ");
    scanf("%d", &b);
    printf("Inserire numero 3: ");
    scanf("%d", &c);

    printf("%d + %d + %d = %d\n", a, b, c, a+b+c);
}