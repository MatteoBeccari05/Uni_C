#include <stdio.h>

int min_to_sec(int minuti)
{
    return minuti * 60;
}

int ore_to_sec(int ore)
{
    return ore * 60 * 60;
}

int tempo_to_sec(int sec, int min, int ore)
{
    return min_to_sec(min) + ore_to_sec(ore) + sec;
}

int main()
{
    int min, sec, ore;
    printf("Inserire i secondi: ");
    scanf("%d", &sec);
    printf("Inserire i minuti: ");
    scanf("%d", &min);
    printf("Inserire le ore: ");
    scanf("%d", &ore);

    printf("Secondi totali del cd: %d\n", tempo_to_sec(sec, min, ore));
}