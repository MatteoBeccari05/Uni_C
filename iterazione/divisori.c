/*  
Scrivere un programma che stampi tutti i divisori di un numero 
intero richiesto all’utente.
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Inserire il numero: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            printf("%d\n", i);
        }
    }
}