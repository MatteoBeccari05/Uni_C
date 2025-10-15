#include <stdio.h>

int valore_assoluto(int numero)
{
    if (numero < 0) 
    {
        numero = -numero;
    }
    return numero;
}

int main()
{
    int numero;
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);
    printf("Il valore assoluto è: %d\n", valore_assoluto(numero));
}