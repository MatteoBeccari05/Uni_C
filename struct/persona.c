#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[30];
    int eta;
    float stipendio;
} Persona;

int main()
{

    Persona giovanni;
    Persona classe[100];

    strcpy(giovanni.nome, "Giovanni Rossi");
    giovanni.eta = 45;
    giovanni.stipendio = 2000.0f;

    printf("%s\n", giovanni.nome);
    printf("%2.f\n", giovanni.stipendio);
}