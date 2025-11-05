#include <stdio.h>

int palindromo(int n)
{
    int o, t;
    int r = 0;
    o = n;
    while (n != 0)
    {
        t = 0;
        int i = 0;
        for(i = 0; i < 10; i++)
        {
            t = t + r;
        }
        r = t + n % 10;
        n = n/10;
    }
    return o == r;
    
}

int main()
{
    int n, somma = 0; 
    printf("Inserire il numero: ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++)
    {
        if(palindromo(i))
        {
            somma = somma + i;
        }
    }
    printf("%d\n", somma);
}