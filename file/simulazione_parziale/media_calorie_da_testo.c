#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[31];
    float calorie;
} Alimento;

int main()
{
    Alimento r;
    FILE *pf;
    float somma_calorie = 0.0f;
    int contatore = 0;

    if ((pf = fopen("calorie.txt", "rt")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    while (fscanf(pf, "%s%f", r.nome, &r.calorie) == 2)
    {
        somma_calorie = somma_calorie + r.calorie;
        contatore++;
    }

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }

    printf("Media calorie: %.2f\n", somma_calorie / contatore);
}
