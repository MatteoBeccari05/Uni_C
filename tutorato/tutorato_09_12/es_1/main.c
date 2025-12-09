#include <stdio.h>
#include "matrici.h"

int main()
{
    int a[3][3] = {{2, 3, 6}, {5, 1, 2}, {5, 5, 5}};
    int b[3][3] = {{9, 9, 9}, {2, 3, 4}, {8, 7, 3}};
    int c[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    stampaSomma(c);
}