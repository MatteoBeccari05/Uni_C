#include <stdio.h>

int main()
{
    int a, b;
    char ch;
    int *p;

    printf("A o B?\n");
    scanf("%c", &ch);

    if(ch == 'A' || ch == 'a')
    {
        p = &a;
    }
    else
    {
        p = &b;
    }
    a = 1;
    b = 2;
    *p = 3;
    printf("%d %d\n", a, b);
    return 0;
}