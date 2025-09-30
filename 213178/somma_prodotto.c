#include <stdio.h>


int somma(int a, int b){
    return a + b;
}


int prodotto(int a, int b){
    return a*b;
}

int main(){
    int a,b;
    printf("Inserire numero 1: ");
    scanf("%d", &a);

    printf("Inserire numero 2: ");
    scanf("%d", &b);

    printf("La somma tra %d e %d è = %d\n", a, b, somma(a,b));
    printf("Il prodotto tra %d e %d è = %d\n", a, b, prodotto(a,b));
}
