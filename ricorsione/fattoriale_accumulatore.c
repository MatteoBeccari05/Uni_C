#include <stdio.h>

int fatt(int n, int p)
{
    if (n <= 1)
    {
        return p;
    }
    else
    {
        return n * fatt(n - 1, n * p);
    }
}

int main()
{
    int m;
    m = fatt(5, 1);
    printf("%d\n", m);
}