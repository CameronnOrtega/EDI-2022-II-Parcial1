#include <stdio.h>
#define N 5

void Capturadatos(int *ArregloA);
void Producto(int *ArregloA,int *ArregloB);
void imprimeResultado(int *ArregloB);

int main()
{
    int ArregloA[N];
    int ArregloB[N];

    Capturadatos(ArregloA);
    Producto(ArregloA,ArregloB);
    imprimeResultado(ArregloB);
}
void Capturadatos(int *ArregloA)
{
    for(int i = 0; i < N; i++)
    {
        printf("Introduce un numero entero para la posicion %d: ",i);
        scanf("%d", &ArregloA[i]);
       if (ArregloA[i]< -30 || ArregloA[i]>30){
           printf("El valor no esta dentro del rango de numeros (-30,30) \n");
           printf("Introduce un numero entero para la posicion %d: ",i);
           scanf("%d", &ArregloA[i]);
       }

    }
}
void Producto(int *ArregloA,int *ArregloB)
{
    for (int i = 0; i < N; i++)
    {
        ArregloB[i] = 1;
        for (int j = 0; j < N; j++){
            if (j!=i){
         ArregloB[i] = ArregloB[i] * ArregloA[j];
            }
        }
    }
}
void imprimeResultado(int *ArregloB)
{
    for(int i = 0; i < N; i++)
    {
        printf("%d ", ArregloB[i]);
    }
}

