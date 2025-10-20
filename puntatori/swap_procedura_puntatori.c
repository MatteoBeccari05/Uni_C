#include <stdio.h>

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int a = 2, b = 3, t;
    swap(&a, &b);
    printf("A: %d\nB: %d\n", a, b);
}
