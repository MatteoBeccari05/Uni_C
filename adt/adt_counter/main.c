#include <stdio.h>
#include "contatore.h"

int main()
{
    Contatore c1;
    Contatore c2;
    reset(&c1);
    reset(&c2);
    inc(&c1);
    inc(&c2);
    inc(&c1);
    printf("%d %d\n", val(c1), val(c2));
}