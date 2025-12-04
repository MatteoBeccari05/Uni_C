#include <stdio.h>

int f(int n)
{
    printf("%d\n", n);
    f(n);
}

int main()
{
    f(5);
}