/*Si scriva un programma che definisca un tipo Figura in grado di rappresentare le
seguenti quattro figure geometriche:
Quadrato (caratterizzato dal lato)
Cerchio (caratterizzato dal raggio)
Rettangolo (caratterizzato da base e altezza)
Triangolo (caratterizzato dai tre lati)
e che calcoli l’area e il perimetro di una figura con due funzioni aventi rispettivamente
la seguente interfaccia:
float area(Figura f);
float perimetro(Figura f);
8*/

#include <stdio.h>
#include "figura.h"

int main()
{

    // Quadrato lato 5
    Figura q = crea_quadrato(5);
    printf("Quadrato lato 5:\n");
    printf("  Area = %.2f\n", area(q));
    printf("  Perimetro = %.2f\n\n", perimetro(q));

    // Rettangolo base 4, altezza 3
    Figura r = crea_rettangolo(4, 3);
    printf("Rettangolo base 4, altezza 3:\n");
    printf("  Area = %.2f\n", area(r));
    printf("  Perimetro = %.2f\n\n", perimetro(r));

    // Cerchio raggio 2
    Figura c = crea_cerchio(1.5);
    printf("Cerchio raggio 1.5:\n");
    printf("  Area = %.2f\n", area(c));
    printf("  Perimetro = %.2f\n\n", perimetro(c));

    // Triangolo lati 3, 4, 5
    Figura t = crea_triangolo(3, 4, 5);
    printf("Triangolo lati 3, 4, 5:\n");
    printf("  Area = %.2f\n", area(t));
    printf("  Perimetro = %.2f\n\n", perimetro(t));

    return 0;
}
