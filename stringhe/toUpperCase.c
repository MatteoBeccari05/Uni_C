#include <stdio.h>

void toUpperCase(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - ('a' - 'A');
        }
        i++;
    }
}

int main()
{
    char s[81];
    printf("Inserire la stringa: ");
    scanf("%s", s);
    toUpperCase(s);
    printf("%s\n", s);
    return 0;
}