#include <stdio.h>
#define DIM 10

void inserimento(int *a)
{
    for (int i = 0; i < DIM; i++)
    {
        printf("Inserire numero: ");
        scanf("%d", &a[i]);
    }
}

int ricerca(int *a, int cerca)
{
    int dl = 0;
    int b[DIM];
    for (int i = 0; i < DIM; i++)
    {
        if (a[i] == cerca)
        {
            b[dl] = i;
            dl++;
        }
    }

    if (dl == 0)
    {
        printf("Il numero %d non compare in nessuna posizione\n", cerca);
    }
    else
    {
        printf("Il valore %d compare nelle posizioni: ", cerca);
        for (int i = 0; i < dl; i++)
        {
            printf("%d ", b[i]);
        }
        printf("\n");
    }
}

int main()
{
    int a[DIM];
    int cerca;
    inserimento(a);

    printf("Inserire numero da cercare: ");
    scanf("%d", &cerca);

    ricerca(a, cerca);
}