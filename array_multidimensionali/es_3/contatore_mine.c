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

/// @brief Restituisce il numero di mine in campo adiacenti alla cella <r,c>
/// @param c
/// @param r
/// @param c
/// @return
int mine_adiacenti(char campo[N_RIGHE][N_COLONNE], int r, int c)
{
    int contatore = 0;
    if (r - 1 >= 0 && c - 1 >= 0 && campo[r - 1][c - 1] == '*')
        contatore++;
    if (r - 1 >= 0 && campo[r - 1][c] == '*')
        contatore++;
    if (r - 1 >= 0 && c + 1 < N_COLONNE && campo[r - 1][c + 1] == '*')
        contatore++;
    if (c - 1 >= 0 && campo[r][c - 1] == '*')         
        contatore++;
    if (c + 1 < N_COLONNE && campo[r][c + 1] == '*')    
        contatore++;
    if (r + 1 < N_RIGHE && c - 1 >= 0 && campo[r + 1][c - 1] == '*') 
        contatore++;
    if (r + 1 < N_RIGHE && campo[r + 1][c] == '*')
        contatore++;
    if (r + 1 < N_RIGHE && c + 1 < N_COLONNE && campo[r + 1][c + 1] == '*')
        contatore++;

    return contatore;
}


void stampa(char c[N_RIGHE][N_COLONNE])
{
    for (int i = 0; i < N_RIGHE; i++)
    {
        for (int j = 0; j < N_COLONNE; j++)
        {
            if (c[i][j] == '*')
            {
                printf("*");
            }
            else
            {
                int contatore = mine_adiacenti(c, i, j);
                if (contatore > 0)
                {
                    printf("%d", contatore);
                }
                else
                {
                    printf(" ");
                }
            }
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