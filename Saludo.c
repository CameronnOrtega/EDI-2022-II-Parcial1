#include <stdio.h>

int main()
{
    int hora, min;

    printf("Introduce la hora: ");
    scanf("%d", &hora);
    printf("Introduce los minutos: ");
    scanf("%d", &min);

    if (hora<12 & min<60)
    {
        printf("Buenos dias");
    }
    else if (hora<18 & min<60)
    {
        printf("Buenas tardes");
    }
    else if (hora<=23 & min<60)
    {
        printf("Buenas noches");
    }
    else if (hora>23 || min>59)
    {
        printf("Hora no valida");
    }
}
