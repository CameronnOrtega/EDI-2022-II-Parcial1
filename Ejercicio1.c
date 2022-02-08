#include <stdio.h>

int main()
{
    float precio, pf, descuento;

    printf("Ingrese el precio original del producto: ");
    scanf("%f", &precio);
    printf("Ingrese el descuento que se aplicara: ");
    scanf("%f", &descuento);

    pf = precio - (precio * (descuento / 100));

    printf("El precio con descuento es: %.2f", pf);
    return 0;
}
