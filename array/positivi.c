#include <stdio.h>
#define DIM 5

int main()
{
    int a[DIM], b[DIM], dl = 0;

    for (int i = 0; i < DIM; i++)
    {
        printf("Inserire numero %d: ", (i + 1));
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < DIM; i++)
    {
        if (a[i] > 0)
        {
            b[dl] = a[i];
            dl++;
        }
    }

    for (int i = 0; i < dl; i++)
    {
        printf("%d\n", b[i]);
    }
}