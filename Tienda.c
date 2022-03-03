#include <stdio.h>
#define Renglones 4
#define Columnas 3


void capturaDatos(float producto[][Columnas]);
int PrecioMayor(float producto[][Columnas]);
int MenorStock(float producto[][Columnas]);
float Total(float producto[][Columnas]);

int main()
{
    float producto[Renglones][Columnas];
    int ProductoprecioMayor;
    int ProductomenorStock;
    float totalventas;

    capturaDatos(producto);
    ProductoprecioMayor = PrecioMayor(producto);
    ProductomenorStock = MenorStock(producto);
    totalventas = Total(producto);


    printf("Producto con mayor precio: %d\n",ProductoprecioMayor);
    printf("Producto con menos stock: %d\n",ProductomenorStock);
    printf("Total de venta esperada: %.2f",totalventas);

    return 0;
}
void capturaDatos(float producto[][Columnas])
{
    for (int i = 0; i < Renglones; i++)
    {
        printf("Introduce la clave del producto %d: ",i+1);
        scanf("%f", &producto[i][0]);

        if (producto[i][0] == producto[i-1][0])
        {
            do
            {
                printf("Error, la clave ya existe.\n Dame otra clave: ");
                scanf("%f", &producto[i][0]);
            } while (producto[i][0]!=producto[i-1][0]);
        }
        printf("Dame el precio del producto %.0f: ",producto[i][0]);
        scanf("%f", &producto[i][1]);

        printf("Dame los stock del producto %.0f: ",producto[i][0]);
        scanf("%f", &producto[i][2]);
    }
}
int PrecioMayor(float producto[][Columnas])
{
    float aux;
    int ProMayorClave;
    aux = producto[0][1];
    ProMayorClave = producto[0][0];
    for (int i = 0; i < Renglones; i++)
    {
        if (aux < producto[i][1])
        {
            aux = producto[i][1];
            ProMayorClave = producto[i][0];
        }
    }
    return ProMayorClave;
}
int MenorStock(float producto[][Columnas])
{
    int aux2;
    int MenorClave;
    aux2 = producto[0][2];
    MenorClave = producto[0][0];
    for (int i = 0; i < Renglones; i++)
    {
        if (aux2 > producto[i][2])
        {
            aux2 = producto[i][2];
            MenorClave = producto[i][0];
        }
    }
    return MenorClave;
}
float Total(float producto[][Columnas])
{
    float total;
    for (int i = 0; i < Renglones; i++)
    {
        total = total + (producto[i][1] * producto[i][2]);
    }
    return total;
}





