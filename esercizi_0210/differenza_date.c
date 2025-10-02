#include <stdio.h>

int giornoGiuliano(int giorno, int mese, int anno)
{
    int n0 = ((mese - 14) / 12);
    int n1 = ((1461 * (anno + 4800 + n0)) / 4);
    int n2 = ((367 * (mese - 2 -(12 * n0))) / 12);
    int n3 = ((3 * (anno + 4900 + n0)) / 400);
    int jd = (n1 + n2 - n3 + giorno - 32075);
    return jd;
}


int main(){

    int giorno, mese, anno;
    int jd;
    printf("============PRIMA DATA============\n");
    printf("Inserire il giorno: ");
    scanf("%d", &giorno);
    printf("Inserire il mese: ");
    scanf("%d", &mese);
    printf("Inserire l'anno: ");
    scanf("%d", &anno);
    int jd1 = giornoGiuliano(giorno, mese, anno);

    printf("============SECONDA DATA============\n");
    printf("Inserire il giorno: ");
    scanf("%d", &giorno);
    printf("Inserire il mese: ");
    scanf("%d", &mese);
    printf("Inserire l'anno: ");
    scanf("%d", &anno);
    int jd2 = giornoGiuliano(giorno, mese, anno);

    printf("Differenza tra giorni giuliani: %d\n", jd1-jd2);
}