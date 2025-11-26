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
    printf("%d\n", n.a);
    n.b = 3.5;
    printf("%f\n", n.b);
}