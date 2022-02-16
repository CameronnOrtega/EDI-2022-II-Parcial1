#include <stdio.h>

int main()
{
    float precio, kg, total;

    printf("Introduce el precio del kilo de manzana: ");
    scanf("%f", &precio);
    printf("Introduce los kilos que desea comprar: ");
    scanf("%f", &kg);

    if (kg<=2)
    {
        total = precio * kg;
        printf("El total a pagar es: %f",total);
    }
    else if (kg>2 & kg<=5)
    {
        precio = precio * kg;
        total = precio * .9;
        printf("El total a pagar es: %.2f",total);
    }
    else if (kg>5 & kg<=10)
    {
        precio = precio * kg;
        total = precio * .85;
        printf("El total a pagar es: %.2f",total);
    }
    else if (kg>10)
    {
        precio = precio * kg;
        total = precio * .8;
        printf("El total a pagar es: %.2f",total);
    }

}

