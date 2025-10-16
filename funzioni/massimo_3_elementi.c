#include <stdio.h>

int massimo(int n1, int n2, int n3)
{
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            return n1;
        }
        else
        {
            return n3;
        }
    }
    else
    {
        if (n2 > n3)
        {
            return n2;
        }
        else
        {
            return n3;
        }
    }
}

int main()
{
    int n1, n2, n3;
    printf("Inserire primo numero: ");
    scanf("%d", &n1);
    printf("Inserire secondo numero: ");
    scanf("%d", &n2);
    printf("Inserire terzo numero: ");
    scanf("%d", &n3);
    printf("Il numero più grande è: %d\n", massimo(n1, n2, n3));
}