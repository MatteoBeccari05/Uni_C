#include <stdio.h>

int main()
{
    int i;
    char s[100];
    printf("Inserisci i caratteri (@ per terminare): ");
    i = -1;
    do
    {
        i++;
        scanf("%c", &s[i]);
    } while (s[i] != '@');
    i = 0;
    while (s[i] != '@')
    {
        printf("%c", s[i]);
        i++;
    }
}