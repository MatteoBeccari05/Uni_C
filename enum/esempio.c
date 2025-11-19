#include <stdio.h>

enum Giorno { LUN = 1, MAR, MER, GIO, VEN, SAB, DOM };

int main() {
    int x;
    printf("Inserisci un numero (1-7): ");
    scanf("%d", &x);

    enum Giorno g = x;

    if (g == SAB || g == DOM)
        printf("Weekend!\n");
    else
        printf("Giorno lavorativo.\n");
}
