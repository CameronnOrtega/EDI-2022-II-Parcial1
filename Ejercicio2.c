#include <stdio.h>

int main()
{
    int dias, hrs , min , s , sd ,sh ,sm ;

    printf("Ingrese los dias: ");
    scanf("%d", &dias);
    printf("Ingrese las horas: ");
    scanf("%d", &hrs);
    printf("Ingrese los minutos: ");
    scanf("%d", &min);

    sd = dias * 24 * 60 * 60;
    sh = hrs * 60 * 60;
    sm = min * 60;
    s = sd + sh + sm;

    printf(" %d", dias );
    printf(" dia,");
    printf(" %d", hrs );
    printf(" horas y");
    printf(" %d", min );
    printf(" minutos son: ");
    printf("%d", s);
    return 0;
}

