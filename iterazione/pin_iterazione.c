#include <stdio.h>

int main()
{
    int pin, scelta;

    do
    {
        printf("Inserire PIN: ");
        scanf("%d", &pin);
        printf("===================\n");

    } while (pin != 44122);
    
    printf("1) Tizio 335-1234567\n");
    printf("2) Caio 347-1234567\n");
    printf("Scegliere il contatto: ");
    scanf("%d", &scelta);
    printf("Chiamata del contatto %d in corso\n", scelta);
    
}