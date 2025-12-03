#include "campo.h"
#include <stdio.h>
#include <stdlib.h>

float rnd_flt(float min, float max)
{
    return min + (float)rand() / RAND_MAX * (max - min);
}

void inizializza(Campo *pcampo, float probmina)
{
    for (int i = 0; i < NRIGHE; i++)
    {
        for (int j = 0; j < NCOLONNE; j++)
        {
            (*pcampo).celle[i][j].coperta = 1;
            float mina = rnd_flt(0.0, 1.0);
            if (mina <= probmina)
            {
                (*pcampo).celle[i][j].mina = 1;
            }
            else
            {
                (*pcampo).celle[i][j].mina = 0;
            }
        }
    }
}

int mine_adiacenti(Cella celle[NRIGHE][NCOLONNE], int r, int c)
{
    int contatore = 0;
    if (r - 1 >= 0 && c - 1 >= 0 && celle[r - 1][c - 1].mina)
        contatore++;
    if (r - 1 >= 0 && celle[r - 1][c].mina)
        contatore++;
    if (r - 1 >= 0 && c + 1 < NCOLONNE && celle[r - 1][c + 1].mina)
        contatore++;
    if (c - 1 >= 0 && celle[r][c - 1].mina)
        contatore++;
    if (c + 1 < NCOLONNE && celle[r][c + 1].mina)
        contatore++;
    if (r + 1 < NRIGHE && c - 1 >= 0 && celle[r + 1][c - 1].mina)
        contatore++;
    if (r + 1 < NRIGHE && celle[r + 1][c].mina)
        contatore++;
    if (r + 1 < NRIGHE && c + 1 < NCOLONNE && celle[r + 1][c + 1].mina)
        contatore++;

    return contatore;
}

void stampa(Campo *c)
{
    printf("  ");
    for (int j = 0; j < NCOLONNE; j++)
    {
        printf("%c", 'a' + j);
    }
    printf("\n");
    for (int i = 0; i < NRIGHE; i++)
    {
        printf("%d ", i + 1);
        for (int j = 0; j < NCOLONNE; j++)
        {
            if (c->celle[i][j].coperta)
            {
                printf("#");
            }
            else if (c->celle[i][j].mina == 1)
            {
                printf("*");
            }
            else
            {
                int contatore = mine_adiacenti(c->celle, i, j);
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

void leggi_mossa(Mossa *mossa)
{
    char s[3];
    scanf("%s", s);
    mossa->riga = s[1] - '1';
    mossa->colonna = s[0] - 'a';
}

void aggiorna(Campo *c, Mossa *m)
{
    c->celle[m->riga][m->colonna].coperta = 0;
}

Valutazione valuta(Campo *pc)
{
    for (int i = 0; i < NRIGHE; i++)
    {
        for (int j = 0; j < NCOLONNE; j++)
        {
            if(pc->celle[i][j].mina && ! pc->celle[i][j].coperta)
            {
                return Sconfitta;
            }
        }
    }
    for(int i = 0; i < NRIGHE; i++)
    {
        for (int j = 0; j < NCOLONNE; j++)
        {
            if(!pc->celle[i][j].mina && pc->celle[i][j].coperta)
            {
                return Aperto;
            }
        }
    }
    return Vittoria;
}