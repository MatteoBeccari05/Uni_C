/*
Esercizio 5 
1. All'interno della cartella Tutorato_1, creare un file chiamato secondi.c.
2. Aprire la cartella Tutorato_1 in Visual Studio Code utilizzando il comando code;
3. Scrivere un programma in C nel file secondi.cche stampi a terminale quanti secondi ci sono in una settimana e mezza.
   Suggerimento: usare direttamente printfper calcolare l’espressione. Ricorda che:
        1 giorno = 24 ore
        1 ora = 60 minuti
        1 minuto = 60 secondi
        1 settimana = 7 giorni
4. Compilare il sorgente creando un eseguibile chiamato secondi_in_settimana.
5. Eseguire il programma dal terminale.
*/


#include <stdio.h>

int main()
{
    int giorno = 24;
    int ora = 60;
    int minuto = 60; 
    int settimana = 7; 
    int tmp = giorno*ora*minuto*settimana;
    tmp = tmp + (tmp/2);

    printf("In una settimana e mezza ci sono %d secondi\n", tmp);
}