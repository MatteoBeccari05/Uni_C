#include <stdio.h>

int main()
{
    int a = 2, b = 3, t;
    t = a;
    a = b;
    b = t;
    printf("A: %d\nB: %d\n", a, b);
}