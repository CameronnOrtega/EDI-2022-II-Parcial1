#include <stdio.h>
#include <math.h>

typedef struct puntos
{
  float x1,x2,y1,y2;
  float distanciadePuntos;
}tipo_puntos;

void CapturaDatos(tipo_puntos *distancia);
void ImprimePuntos(tipo_puntos distancia);
void DistanciaPuntos(tipo_puntos *distancia);

int main()
{
    tipo_puntos distancia;

    CapturaDatos(&distancia);
    ImprimePuntos(distancia);
    DistanciaPuntos(&distancia);
    printf("La distancia entre los dos puntos es de %.2f:",distancia.distanciadePuntos);
    return 0;
}
void CapturaDatos(tipo_puntos *distancia)
{
       printf("Introduce la coordenada x del punto 1:");
       scanf("%f",&distancia->x1);
       printf("Introduce la coordenada y del punto 1:");
       scanf("%f",&distancia->y1);
       printf("Introduce la coordenada x del punto 2:");
       scanf("%f",&distancia->x2);
       printf("Introduce la coordenada y del punto 2:");
       scanf("%f",&distancia->y2);

}

void ImprimePuntos(tipo_puntos distancia)
{
    printf("Punto 1: (%.2f,%.2f)\n",distancia.x1,distancia.y1);
    printf("Punto 2: (%.2f,%.2f)\n",distancia.x2,distancia.y2);
}
void DistanciaPuntos(tipo_puntos *distancia)
{
    distancia->distanciadePuntos = sqrt(pow(distancia->x2 - distancia->x1,2) + pow(distancia->y2 - distancia->y1,2));
}
