#include <stdio.h>
#include "persona.h"
#include <string.h>

int main()
{
    int n;
    printf("Quanti studenti vuoi inserire: ");
    scanf("%d", &n);

    studente studenti[n];

    for(int i = 0; i < n; i++)
    {
        printf("------- Persona %d -------\n", (i+1));
        printf("Inserire nome: ");
        scanf("%s", &studenti[i].nome);
        printf("Inserire cognome: ");
        scanf("%s", &studenti[i].cognome);
        printf("Inserire matricola: ");
        scanf("%d", &studenti[i].matricola);
    }

    printf("\n\n===============================\n\n");
    stampaTuttiStudenti(studenti, n);
}