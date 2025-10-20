#include <stdio.h>

void azzera(int *a)
{
    *a = 0;
}

int main()
{
    int a = 5;
    printf("A: %d\n", a);
    azzera(&a);
    printf("A: %d\n", a);
}