#include <stdio.h>
#define DIM 5

int eleva(int base, int esponente)
{
    int risultato = 1;
    for (int i = 0; i < esponente; i++)
    {
        risultato = risultato * base;
    }
    return risultato;
}

int main()
{
    int dl;
    int array[dl];

    do
    {
        printf("Inserire la dimensione dell'array: ");
        scanf("%d", &dl);

    } while (dl <= 0 || dl > DIM);
    

    for (int i = 0; i < dl; i++)
    {
        printf("Inserire numero: ");
        scanf("%d", &array[i]);
    }

    int array2[DIM];
    int dl2 = 0;
    for (int i = 0; i < dl; i++)
    {
        if (array[i] % 2 == 0)
        {
            array2[i] = eleva(array[i], 2);
            dl2++;
        }
        else
        {
            array2[i] = eleva(array[i], 3);
            dl2++;
        }
    }

    for (int i = 0; i < dl2; i++)
    {
        printf("%d ", array2[i]);
    }
    printf("\n");
}