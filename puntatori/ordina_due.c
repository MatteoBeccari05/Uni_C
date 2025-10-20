#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordina(int *x, int *y)
{
    if (*y < *x)
        swap(x, y);
}

int main()
{
    int a, b;
    printf("Inserire primo numero: ");
    scanf("%d", &a);
    printf("Inserire secondo numero: ");
    scanf("%d", &b);
    ordina(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
