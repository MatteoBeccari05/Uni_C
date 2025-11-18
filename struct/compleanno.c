/*
- Si legga da tastiera una struttura costituita
da 3 campi interi contenente la data di oggi
- Si legga una struttura contenente il nome di
una persona e la sua data di nascita
- Se oggi è il compleanno della persona, si
stampi "Auguri " seguito dal nome della
persona
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    int anno;
    int mese;
    int giorno;

} Data;

typedef struct
{
    Data nascita;
    char nome[30];
    char cognome[30];
} Persona;


int main()
{
    Data oggi;
    Persona teo;

    printf("===========Data di oggi===========\n");
    printf("Inserire il giorno: ");
    scanf("%d", &oggi.giorno);
    printf("Inserire il mese: ");
    scanf("%d", &oggi.mese);
    printf("Inserire l'anno: ");
    scanf("%d", &oggi.anno);

    printf("===========Dati della persona===========\n");
    printf("Inserire nome: ");
    scanf("%s", &teo.nome);
    printf("Inserire cognome: ");
    scanf("%s", &teo.cognome);

    printf("Inserire giorno di nascita: ");
    scanf("%d", &teo.nascita.giorno);
    printf("Inserire mese di nascita: ");
    scanf("%d", &teo.nascita.mese);
    printf("Inserire anno di nascita: ");
    scanf("%d", &teo.nascita.anno);

    if(teo.nascita.mese == oggi.mese && teo.nascita.giorno == oggi.giorno)
    {
        printf("AUGURONI %s\n", teo.nome);
    }
}
