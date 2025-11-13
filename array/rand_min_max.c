#include <stdio.h>
#include <stdlib.h>

int rand_int(int min, int max)
{
    return min + rand () % (max - min + 1);
}

double rand_double(double min, double max)
{
    return min + ( double ) rand () / RAND_MAX * (max - min);
}

int main()
{
    printf("Rand int: %d\n", rand_int(0, 9));
    printf("Rand double: %.1f\n", rand_double(1.0, 2.0));
}