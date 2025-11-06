/*Scrivere un programma che ricerchi in un array di interi un numero richiesto all’utente
e, se lo trova, dica a quale indice.*/

#include <stdio.h>
#define DIM 5

int main()
{
    int array[] = {4,3,8,5,1};
    int trovato = 0, elemento, i;

    printf("Inserire il numero da cercare: ");
    scanf("%d", &elemento);

    i = 0;
    while(!trovato && i < DIM)
    {
        if(array[i] == elemento)
        {
            trovato = 1;
        }
        else
        {
            i++;
        }
    }

    if(trovato)
    {
        printf("Numero %d trovato all'indice %d\n", elemento, i);
    }
    else
    {
        printf("Nessun numero trovato\n");
    }

}