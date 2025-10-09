#include <stdio.h>

int main(){

    int lato1, lato2, lato3;
    printf("Inserire lato 1: ");
    scanf("%d", &lato1);
    printf("Inserire lato 2: ");
    scanf("%d", &lato2);
    printf("Inserire lato 3: ");
    scanf("%d", &lato3);

    if(lato1 == lato2 && lato1 == lato3)
    {
        printf("Equilatero\n");
    }
    else if(lato1 == lato2 || lato1 == lato3 || lato2 == lato3)
    {
        printf("Isoscele\n");
    }
    else
    {
        printf("Scaleno\n");
    }
}