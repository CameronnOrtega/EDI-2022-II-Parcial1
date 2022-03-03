#include <stdio.h>
#define NFILAS 4 //cantidad de productos
#define NCOLUMNAS 3


void capturaDatos(float producto[][NCOLUMNAS]);
int imprimePrecioMayor(float producto[][NCOLUMNAS]);
int imprimeMenorStock(float producto[][NCOLUMNAS]);
float imprimeTotal(float producto[][NCOLUMNAS]);

int main()
{
    float producto[NFILAS][NCOLUMNAS];
    int precioMayor;
    int menorStock;
    float total;

    capturaDatos(producto);
    precioMayor = imprimePrecioMayor(producto);
    menorStock = imprimeMenorStock(producto);
    total = imprimeTotal(producto);


    printf("Producto con mayor precio es el: %d\n",precioMayor);
    printf("Producto con menos stock es el: %d\n",menorStock);
    printf("Total de venta esperada es: %.2f",total);

    return 0;
}

float imprimeTotal(float producto[][NCOLUMNAS])
{
    float total;
    for (int i = 0; i < NFILAS; i++)
    {
        total = total + (producto[i][1] * producto[i][2]);
    }
    return total;
}

int imprimeMenorStock(float producto[][NCOLUMNAS])
{
    int menor, mClave;
    menor = producto[0][2];
    mClave = producto[0][0];
    for (int i = 0; i < NFILAS; i++)
    {
        if (menor > producto[i][2])
        {
            menor = producto[i][2];
            mClave = producto[i][0];
        }

    }
    return mClave;
}

int imprimePrecioMayor(float producto[][NCOLUMNAS])
{
    float mayor;
    int mClave;
    mayor = producto[0][1];
    mClave = producto[0][0];
    for (int i = 0; i < NFILAS; i++)
    {
        if (mayor < producto[i][1])
        {
            mayor = producto[i][1];
            mClave = producto[i][0];
        }

    }
    return mClave;
}

void capturaDatos(float producto[][NCOLUMNAS])
{
    for (int i = 0; i < NFILAS; i++)
    {
        printf("Dame la clave del producto: ");
        scanf("%f", &producto[i][0]);

        if (producto[i][0] == producto[i-1][0])
        {

            do
            {
                printf("Error, la clave ya existe.\nDame otra clave: ");
                scanf("%f", &producto[i][0]);
            } while (producto[i][0]!=producto[i-1][0]);

        }

        printf("Dame el precio del producto %.0f: ",producto[i][0]);
        scanf("%f", &producto[i][1]);

        printf("Dame los stock del producto %.0f: ",producto[i][0]);
        scanf("%f", &producto[i][2]);
    }
}