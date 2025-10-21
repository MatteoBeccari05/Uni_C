#include <stdio.h>

int main()
{
    int i = 1, a;

    printf("Quanti asterischi vuoi stampare: ");
    scanf("%d", &a);
    do
    {
        printf("*");
        i++;
    } while (i <= a);

    printf("\n");
}