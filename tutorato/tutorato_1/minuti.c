/*
Esercizio 2
1. All'interno della cartella Tutorato_1, creare un file chiamato minuti.c;
2. Aprire la cartella Tutorato_1 in Visual Studio Code utilizzando il comando code;
3. Scrivere un programma in C nel file minuti.cche stampi a terminale quanti minuti ci sono in un anno;
4. Compilare il sorgente creando un eseguibile chiamato minuti_in_anno;
5. Eseguire il programma dal terminale
*/


#include <stdio.h>

int main()
{
    int min = 60;
    int ore = 24; 
    int giorni = 365;
    int tmp = min * ore * giorni;

    printf("Minuti in un anno: %d\n", tmp);
}
