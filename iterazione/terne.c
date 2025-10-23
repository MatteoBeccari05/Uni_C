/*
Calcolare tutte le terne pitagoriche in cui l’ipotenusa è minore o uguale
di un numero letto da tastiera.
*/

#include <stdio.h>

int main()
{
    int n; 
    printf("Inserire il valore dell'ipotenusa: ");
    scanf("%d", &n);

    for (int a = 1; a <= n; a++)
    {
        for (int b = a; b <= n; b++)
        {
            for (int c = b; c <= n; c++)
            {
                if (a * a + b * b == c * c)
                {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }

    return 0;

}