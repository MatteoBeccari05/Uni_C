/*Scrivere un programma che richieda all’utente numeri interi. Per ogni numero intero
inserito, scriva il doppio. Il programma deve fermarsi quando l’utente scrive un numero
negativo.*/

#include <stdio.h>

int main()
{
    int num;
    do
    {
        printf("Inserire numero (negativo termina): ");
        scanf("%d", &num);
        if(num>0)
        {
            num = num + num;
            printf("%d\n", num);
        }
    } while (num>0);
    
}