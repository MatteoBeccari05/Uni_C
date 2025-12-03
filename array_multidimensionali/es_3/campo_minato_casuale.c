#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N_RIGHE 6
#define N_COLONNE 10
#define PROBMINA 0.2

float rnd_flt(float min, float max)
{
    return min + (float)rand() / RAND_MAX * (max - min);
}

void inizializza(char c[N_RIGHE][N_COLONNE], float probmina)
{
    for (int i = 0; i < N_RIGHE; i++)
    {
        for (int j = 0; j < N_COLONNE; j++)
        {
            float mina = rnd_flt(0.0, 1.0);
            if (mina <= probmina)
            {
                c[i][j] = '*';
            }
            else
            {
                c[i][j] = ' ';
            }
        }
    }
}

void stampa(char c[N_RIGHE][N_COLONNE])
{
    for (int i = 0; i < N_RIGHE; i++)
    {
        for (int j = 0; j < N_COLONNE; j++)
        {
            printf("%c", c[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[])
{
    char campo[N_RIGHE][N_COLONNE];
    inizializza(campo, PROBMINA);
    stampa(campo);
}