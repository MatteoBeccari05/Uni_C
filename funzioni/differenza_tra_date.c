#include <stdio.h>

int giorno_giuliano(int g, int m, int a)
{
    int n0, n1, n2, n3, jd;
    n0 = ((m - 14) / 12);
    n1 = ((1461 * (a + 4800 + n0)) / 4);
    n2 = ((367 * (m - 2 -(12 * n0))) / 12);
    n3 = ((3 * (a + 4900 + n0)) / 400);
    jd = (n1 + n2 - n3 + g - 32075);
    return jd;
}

int main(){

    int giorno, mese, anno;
    
    printf("\n================= PRIMA DATA =================\n");
    printf("Inserire il giorno: ");
    scanf("%d", &giorno);
    printf("Inserire il mese: ");
    scanf("%d", &mese);
    printf("Inserire l'anno: ");
    scanf("%d", &anno);
    int jd1 = giorno_giuliano(giorno, mese, anno);

    printf("\n================= SECONDA DATA =================\n");
    printf("Inserire il giorno: ");
    scanf("%d", &giorno);
    printf("Inserire il mese: ");
    scanf("%d", &mese);
    printf("Inserire l'anno: ");
    scanf("%d", &anno);
    int jd2 = giorno_giuliano(giorno, mese, anno);

    printf("Giorno giuliano: %d\n", jd2 - jd1);
}