#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", 1 + rand() % 6);
    }
    printf("\n");
}