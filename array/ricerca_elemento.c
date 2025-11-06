/*Scrivere un programma che ricerchi in un array di interi un numero richiesto all’utente
e, se lo trova, dica a quale indice.*/

#include <stdio.h>

int main()
{
    int array[] = {4, 3, 8, 5, 1};
    int elemento;

    printf("Inserire il numero da cercare: ");
    scanf("%d", &elemento);

    for (int i = 0; i < 5; i++)
    {
        if (array[i] == elemento)
        {
            printf("Numero %d trovato all'indice %d\n", elemento, i);
        }
    }
}