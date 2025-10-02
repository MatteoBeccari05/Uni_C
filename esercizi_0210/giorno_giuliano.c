/*
Il giorno giuliano (Julian Day, JD) è il numero di giorni passati dal mezzogiorno del
lunedì 1o gennaio 4713 a.C.
Il giorno giuliano JD di una qualsiasi data successiva al 1/1/4713 a.C. è dato dalla
formula

JD = N1 + N2 - N3 + G - 32075
*/

#include <stdio.h>

int main(){

    int giorno, mese, anno;
    int n0, n1, n2, n3, jd;
    printf("Inserire il giorno: ");
    scanf("%d", &giorno);
    printf("Inserire il mese: ");
    scanf("%d", &mese);
    printf("Inserire l'anno: ");
    scanf("%d", &anno);

    n0 = ((mese - 14) / 12);
    n1 = ((1461 * (anno + 4800 + n0)) / 4);
    n2 = ((367 * (mese - 2 -(12 * n0))) / 12);
    n3 = ((3 * (anno + 4900 + n0)) / 400);
    jd = (n1 + n2 - n3 + giorno - 32075);

    printf("Giorno giuliano: %d\n", jd);
}