#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("%d\n", argc);  //numero di argomenti dati a linea di comando
    printf("%s\n", argv[0]); //nome dell'eseguibile
    
    for(int i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    
}