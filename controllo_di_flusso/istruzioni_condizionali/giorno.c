/*
Leggere da tastiera un numero e, se è compreso fra 1 e 7, 
visualizzare il giorno della settimana corrispondente 
(ad esempio se l’utente digita 2 bisogna scrivere “martedì”)
*/

#include <stdio.h>

int main()
{
    int giorno;
    printf("Inserire il numero del giorno: ");
    scanf("%d", &giorno);

    if(giorno == 1)
    {
        printf("Lunedì\n");
    }
    else if(giorno == 2)
    {
        printf("Martedì\n");
    }
    else if(giorno == 3)
    {
        printf("Mercoledì\n");
    }
    else if(giorno == 4)
    {
        printf("Giovedì\n");
    }
    else if(giorno == 5)
    {
        printf("Venerdì\n");
    }
    else if(giorno == 6)
    {
        printf("Sabato\n");
    }
    else if(giorno == 7)
    {
        printf("Domenica\n");
    }
}