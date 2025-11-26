#include <stdio.h>

typedef union
{
    int a;
    float b;
} Numero;

int main()
{
    Numero n;
    n.a = 3;
    n.b = 3.5;
    printf("%d\n", n.a);   //stampa 1080033280
    //Solo l’ultimo campo assegnato ha un valore significativo
    printf("%f\n", n.b);  //stampa 3.5
}