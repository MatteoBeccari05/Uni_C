#include "persona.h"
#include <stdio.h>

void stampaTuttiStudenti(studente studenti[], int dl)
{
    for(int i = 0; i < dl; i++)
    {
        printf("------- Persona %d -------\n", (i+1));
        printf("Nome: %s\n", studenti[i].nome);
        printf("Cognome: %s\n", studenti[i].cognome);
        printf("Matricola: %d\n", studenti[i].matricola);
    }
}
