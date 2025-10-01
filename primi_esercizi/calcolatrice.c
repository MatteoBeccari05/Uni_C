#include <stdio.h>

int modulo(int a, int b){
    return a % b;
}

int somma(int a, int b){
    return a + b;
}

int sottrazione(int a, int b){
    return a - b;
}

float divisione(int a, int b){
    return (float)a / b;   
}

int moltiplicazione(int a, int b){
    return a * b;
}

int opz(){
    int scelta;
    do 
    {
        printf("\n======= OPZIONI =======\n");
        printf("1) Somma\n");
        printf("2) Sottrazione\n");
        printf("3) Moltiplicazione\n");
        printf("4) Divisione\n");
        printf("5) Modulo\n");
        printf("6) Esci\n");
        printf("Inserire la scelta: ");
        scanf("%d", &scelta);
    } while (scelta < 1 || scelta > 6);   
    return scelta;
}

int main(){
    int a, b, scelta;
    
    printf("Inserire il primo numero: ");
    scanf("%d", &a);

    printf("Inserire il secondo numero: ");
    scanf("%d", &b);

    do {
        scelta = opz();  
        switch (scelta) {
            case 1: printf("La somma tra %d e %d = %d\n", a, b, somma(a, b)); break;
            case 2: printf("La sottrazione tra %d e %d = %d\n", a, b, sottrazione(a, b)); break;
            case 3: printf("La moltiplicazione tra %d e %d = %d\n", a, b, moltiplicazione(a, b)); break;
            case 4: 
                if (b != 0) 
                    printf("La divisione tra %d e %d = %.2f\n", a, b, divisione(a, b)); 
                else 
                    printf("Non puoi dividere per 0");
                break;
            case 5: 
                if (b != 0) 
                    printf("%d modulo %d = %d\n", a, b, modulo(a, b)); 
                else 
                    printf("Impossibile eseguire modulo con 0\n");
                break;
        }
    } while (scelta != 6);

    return 0;
}
