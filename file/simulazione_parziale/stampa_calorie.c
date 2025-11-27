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
    if((pf = fopen("calorie.dat", "rb")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    while (fread(&r, sizeof(Alimento), 1, pf) == 1)
    {
        printf("%s %.2f\n", r.nome, r.calorie);
    }
    
    if (fclose(pf) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }
}
