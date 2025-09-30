/*
Esercizio 1
1. Creare una cartella chiamata Tutoratonella propria home directory;
2. Senza entrare nella cartella Tutorato, creare al suo interno una sottocartella chiamata Tutorato_1;
3. All'interno della cartella Tutorato_1, creare un file chiamato hello.csenza cambiare la working directory;
4. Aprire la cartella Tutorato_1 in Visual Studio Code utilizzando il comando code;
5. Scrivere un programma in C nel file hello.cche stampi a terminale: Hello <Nome> <Cognome>! aggiungendo alla fine una nuova riga.
6. Compilare il sorgente creando un eseguibile chiamato saluto;
7. Eseguire il programma dal terminale.
*/

#include <stdio.h>
int main()
{
    char nome[]={"Matteo"};
    char cognome[]={"Beccari"};
    printf("Hello %s %s!\n", nome, cognome);
}