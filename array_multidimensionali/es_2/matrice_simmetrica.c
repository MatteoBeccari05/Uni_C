/*
• Si legga da tastiera una matrice 3 x 3 tramite una
procedura lettura
• Si verifichi, tramite una funzione simm se la matrice è
simmetrica
• Si visualizzi se la matrice è simmetrica o no

*/

#include <stdio.h>
#define DIM 3

void lettura(int m[DIM][DIM])
{

    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            printf("Inserisci numero riga %d, colonna %d: ", (i + 1), (j + 1));
            scanf("%d", &m[i][j]);
        }
    }
}

int simm(int m[DIM][DIM])
{
    for (int i = 0; i < DIM; i++)
    {
        for (int j = i + 1; j < DIM; j++)
        {
            if (m[i][j] != m[j][i])
            {
                return 0; // non simmetrica
            }
        }
    }
    return 1; // simmetrica
}

int main()
{
    int matrice[DIM][DIM];

    lettura(matrice);

    if (simm(matrice))
    {
        printf("La matrice è simmetrica.\n");
    }
    else
    {
        printf("La matrice NON è simmetrica.\n");
    }

    return 0;
}
