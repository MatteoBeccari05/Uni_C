typedef enum
{
    Quadrato,
    Rettangolo,
    Cerchio,
    Triangolo
} TipoFigura;

typedef struct
{
    float lato;
} DatiQuadrato;

typedef struct
{
    float base;
    float altezza;
} DatiRettangolo;

typedef struct
{
    float raggio;
} DatiCerchio;

typedef struct
{
    float a;
    float b;
    float c;
} DatiTriangolo;

typedef struct
{
    TipoFigura tipo;
    union
    {
        DatiQuadrato datiQuadrato;
        DatiRettangolo datiRettangolo;
        DatiCerchio datiCerchio;
        DatiTriangolo datiTriangolo;
    } datifigura;

} Figura;

float area(Figura f);
float perimetro(Figura f);
Figura crea_quadrato(float l);
Figura crea_rettangolo(float base, float altezza);
Figura crea_cerchio(float raggio);
Figura crea_triangolo(float a, float b, float c);