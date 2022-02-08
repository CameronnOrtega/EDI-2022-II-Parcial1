#include <stdio.h>

int main()
{
    int dias, hrs , min , s , seg  ;

    printf("Ingrese los segundos: ");
    scanf("%d", &s);

    dias = s / 86400;
    s = s % 86400;
    hrs = s / 3600;
    s = s % 3600;
    min = s / 60;
    s = s % 60;
    seg = s;

    printf("Dias: %d \n",dias);
    printf("Horas: %d \n",hrs);
    printf("Minutos: %d \n",min);
    printf("Segundos: %d",seg);

    return 0;
}