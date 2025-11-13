/*Scrivere un programma che simuli 10 rilevazioni di temperature
comprese fra 15.0°C e 25.0°C.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 0; i < 10; i++)
    {
        printf("%.1f\n", 15.0 + 10.0 * rand() / RAND_MAX);
    }
}