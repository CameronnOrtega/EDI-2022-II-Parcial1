#include <stdio.h>
#include <ctype.h>

typedef struct fecha
{
    int dia;
    char mes[15];
    int annio;
}tipo_fecha;

void CapturaDatos(tipo_fecha *imFecha);
void ImprimeFecha(tipo_fecha imFecha);

int main()
{
    tipo_fecha imFecha;
    CapturaDatos(&imFecha);
    ImprimeFecha(imFecha);
    return 0;
}
void CapturaDatos(tipo_fecha *imFecha)
{
    printf("Introduce el dia:");
    scanf("%d",&imFecha->dia);
    printf("Introduce el mes:");
    scanf("%s",imFecha->mes);
    printf("Introduce el ano:");
    scanf("%d",&imFecha->annio);
}
void ImprimeFecha(tipo_fecha imFecha)
{
    imFecha.mes[0] = toupper(imFecha.mes[0]);
    printf("%d/%s/%d",imFecha.dia,imFecha.mes,imFecha.annio);
}