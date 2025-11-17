/*
Scrivere un programma che richieda in ingresso un massimo di DIM (dove DIM è una
macro) numeri interi non negativi (fermandosi quando viene inserito un numero
negativo) e stampi il numero minimo, il numero massimo, la media aritmetica e i
numeri più frequenti. Per l’input e per il calcolo delle statistiche creare apposite
funzioni con parametro di tipo array.
Per testare il programma,
creare un file di testo di nome numeri.in contenente 30 interi compresi fra 0 e
99, seguiti dal numero -1;
eseguire il programma redirigendo l’input su numeri.in.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 30

int leggi_valori(int a[])
{
    int i = 0;
    do
    {
        scanf("%d", &a[i]);
        if (a[i] < 0)
        {
            break;
        }
        i++;
    } while (i < DIM);
    return i;
}

int rand_int(int min, int max)
{
    return min + rand() % (max - min + 1);
}

int minimo(int v[], int dl)
{
    int min = 0;
    for (int i = 1; i < dl; i++)
    {
        if (v[i] < v[min])
        {
            min = i;
        }
    }
    return v[min];
}

int massimo(int v[], int dl)
{
    int max = 0;
    for (int i = 1; i < dl; i++)
    {
        if (v[i] > v[max])
        {
            max = i;
        }
    }
    return v[max];
}

double media(int v[], int dl)
{
    int somma = 0;
    for (int i = 0; i < dl; i++)
    {
        somma += v[i];
    }
    return (double)somma / dl;
}

void numeri_piu_frequenti(int v[], int dl)
{
    int freq[100] = {0}; // frequenze per valori 0–99

    // conteggio occorrenze
    for (int i = 0; i < dl; i++)
    {
        if (v[i] >= 0 && v[i] <= 99)
        {
            freq[v[i]]++;
        }
    }

    // trova la frequenza massima
    int max_f = 0;
    for (int i = 0; i < 100; i++)
    {
        if (freq[i] > max_f)
        {
            max_f = freq[i];
        }
    }

    printf("Numeri piu' frequenti (frequenza %d): ", max_f);
    for (int i = 0; i < 100; i++)
    {
        if (freq[i] == max_f)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int a[DIM];
    int dl;
    dl = leggi_valori(a);

    printf("Media: %.2f\n", media(a, dl));
    printf("Max: %d\n", massimo(a, dl));
    printf("Min: %d\n", minimo(a, dl));
    numeri_piu_frequenti(a, dl);
    return 0;
}
