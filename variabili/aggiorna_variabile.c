#include <stdio.h>

int main(){

    int a;
    printf("Inserire il valore di A: ");
    scanf("%d", &a);

    printf("Valore incrementato di 2: %d\n", a+2);
    printf("Doppio del suo valore: %d\n", a+a);
    printf("Quadrato del suo valore: %d\n", a*a);
}