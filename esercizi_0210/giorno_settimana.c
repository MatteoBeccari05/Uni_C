#include <stdio.h>

int giornoGiuliano_diviso7(int giorno, int mese, int anno)
{
    int n0 = ((mese - 14) / 12);
    int n1 = ((1461 * (anno + 4800 + n0)) / 4);
    int n2 = ((367 * (mese - 2 -(12 * n0))) / 12);
    int n3 = ((3 * (anno + 4900 + n0)) / 400);
    int jd = (n1 + n2 - n3 + giorno - 32075);
    return jd%7;
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


    switch (giornoGiuliano_diviso7(giorno, mese, anno))
    {
        case 0:  printf("Il giorno della data selezionata è lunedi'\n"); break;
        case 1:  printf("Il giorno della data selezionata è martedi'\n"); break;
        case 2:  printf("Il giorno della data selezionata è mercoledi'\n"); break;
        case 3:  printf("Il giorno della data selezionata è giovedi'\n"); break;
        case 4:  printf("Il giorno della data selezionata è venerdi'\n"); break;
        case 5:  printf("Il giorno della data selezionata è sabato'\n"); break;
        case 6:  printf("Il giorno della data selezionata è domenica'\n"); break;
    }
}