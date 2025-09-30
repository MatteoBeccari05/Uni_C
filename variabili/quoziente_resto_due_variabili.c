#include <stdio.h>

int main()
{
    int dividendo, divisore;
    printf("Inserire il dividendo: ");
    scanf("%d", &dividendo);
    printf("Inserire il divisore: ");
    scanf("%d", &divisore);
    printf("Q: %d\n", dividendo / divisore);
    printf("R: %d\n", dividendo % divisore);
}