#include <stdio.h>

int massimo(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else if (b > a)
    {
        return b;
    }
}

int main()
{
    int a, b;
    printf("Inserire primo numero: ");
    scanf("%d", &a);
    printf("Inserire secondo numero: ");
    scanf("%d", &b);
    printf("Il numero più grande è: %d\n", massimo(a, b));
}