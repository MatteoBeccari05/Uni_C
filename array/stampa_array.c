#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 30

int rand_int(int min, int max)
{
    return min + rand() % (max - min + 1);
}


int main()
{
    int a[DIM];
    srand(time(NULL));

    for (int i = 0; i < DIM; i++)
    {
        printf("%d\n", rand_int(0, 99));
    }
    printf("-1\n");
    return 0;
}
