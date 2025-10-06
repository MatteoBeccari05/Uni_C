/*
Leggere da tastiera un numero e, se è compreso fra 1 e 7, 
visualizzare il giorno della settimana corrispondente 
(ad esempio se l’utente digita 2 bisogna scrivere “martedì”)
FATTO CON SWITCH CASE
*/

#include <stdio.h>

int main()
{
    int giorno;
    printf("Inserire il numero del giorno: ");
    scanf("%d", &giorno);

    switch (giorno)
    {
        case 1:  printf("Lunedì\n"); break;
        case 2:  printf("Martedì\n"); break;
        case 3:  printf("Mercoledì'\n"); break;
        case 4:  printf("Giovedì\n"); break;
        case 5:  printf("Venerdì\n"); break;
        case 6:  printf("Sabato\n"); break;
        case 7:  printf("Domenica\n"); break;
    }
}