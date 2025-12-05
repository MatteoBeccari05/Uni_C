#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *p;
    int *a;
    int i, n;
    p = (int *)malloc(sizeof(int));
    *p = 4;

    scanf("%d", &n);
    a = (int *)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
    {
        a[i] = i;
    }

    free(a);
    return 0;
}
