#include <stdio.h>

int main()
{
    int i, j;
    int colonne, righe;

    printf("Scegliere il numero di colonne: ");
    scanf("%d", &colonne);
    printf("Scegliere il numero di righe: ");
    scanf("%d", &righe);
    

    for (i = 1; i <= righe; i++)
    {
        for (j = 1; j <= colonne; j++)
        {
            printf("%5d", i * j); // %4d per allineare bene i numeri
        }
        printf("\n"); 
    }

    return 0;
}
