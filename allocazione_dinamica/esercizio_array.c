#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    int *v = (int *)malloc(n * sizeof(int));
    if (v == NULL) 
    {
        printf("Errore: memoria non allocata!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Inserisci numero %d: ", i+1);
        scanf("%d", &v[i]);
    }

    printf("\nHai inserito:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", v[i]);
    }

    free(v);

    return 0;
}
