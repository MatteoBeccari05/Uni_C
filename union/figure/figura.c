#include "figura.h"
#include <math.h>

float area(Figura f)
{
    switch (f.tipo)
    {
    case Quadrato:
        return f.datifigura.datiQuadrato.lato * f.datifigura.datiQuadrato.lato;

    case Rettangolo:
        return f.datifigura.datiRettangolo.altezza * f.datifigura.datiRettangolo.base;

    case Cerchio:
        return (f.datifigura.datiCerchio.raggio * f.datifigura.datiCerchio.raggio) * 3.14;

    case Triangolo:
    {
        float a = f.datifigura.datiTriangolo.a;
        float b = f.datifigura.datiTriangolo.b;
        float c = f.datifigura.datiTriangolo.c;

        float p = (a + b + c) / 2.0; // semiperimetro

        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    }
}

float perimetro(Figura f)
{
    switch (f.tipo)
    {
    case Quadrato:
        return f.datifigura.datiQuadrato.lato * 4;

    case Rettangolo:
        return 2 * (f.datifigura.datiRettangolo.altezza + f.datifigura.datiRettangolo.base);

    case Cerchio:
        return 2 * f.datifigura.datiCerchio.raggio * 3.14;

    case Triangolo:
        return f.datifigura.datiTriangolo.a + f.datifigura.datiTriangolo.b + f.datifigura.datiTriangolo.c;
    }
}

Figura crea_quadrato(float l)
{
    Figura q;
    q.datifigura.datiQuadrato.lato = l;
    q.tipo = Quadrato;
    return q;
}

Figura crea_rettangolo(float base, float altezza)
{
    Figura r;
    r.tipo = Rettangolo;
    r.datifigura.datiRettangolo.altezza = altezza;
    r.datifigura.datiRettangolo.base = base;
    return r;
}

Figura crea_cerchio(float raggio)
{
    Figura c;
    c.tipo = Cerchio;
    c.datifigura.datiCerchio.raggio = raggio;
    return c;
}

Figura crea_triangolo(float a, float b, float c)
{
    Figura t;
    t.tipo = Triangolo;
    t.datifigura.datiTriangolo.a = a;
    t.datifigura.datiTriangolo.b = b;
    t.datifigura.datiTriangolo.c = c;
    return t;
}