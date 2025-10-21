#include <stdio.h>

int main()
{
    int pin, scelta, i = 0;

    do
    {
        printf("Inserire PIN: ");
        scanf("%d", &pin);
        i++;

        if (pin == 44122)
        {
            printf("Accesso consentito\n");
            printf("1) Tizio 335-1234567\n");
            printf("2) Caio 347-1234567\n");
            printf("Scegliere il contatto: ");
            scanf("%d", &scelta);
            printf("Chiamata del contatto %d in corso\n", scelta);
            return 0;
        }

    } while (i < 3);

    printf("Accesso negato, 3 tentativi errati\n");
    return 0;
}
