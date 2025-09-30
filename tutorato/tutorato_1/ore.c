/*
Esercizio 4 
1.All'interno della cartella Tutorato_1, creare un file chiamato ore.c.
2.Aprire la cartella Tutorato_1 in Visual Studio Code utilizzando il comando code;
3.Scrivere un programma in C nel file ore.cche stampi a terminale quante ore ci sono in 10 anni, considerando un anno di 365 giorni
    Suggerimento: usare direttamente printfper calcolare l’espressione.
    Ricorda che:
        1 giorno = 24 ore
        1 anno = 365 giorni
4. Compilare il sorgente creando un eseguibile chiamato ore_in_decennio.
5. Eseguire il programma dal terminale.
*/

#include <stdio.h>

int main()
{
    int giorno = 24;
    int anni10 = 365*10;

    printf("In 10 anni ci sono %d ore \n", anni10*giorno);
}