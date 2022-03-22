#include <stdio.h>
#include <string.h>
#define N 4
#define M 15
void capturarDatos(char arreglo[N][M]);
int BusquedaNombre(char arreglo[N][M]);

int main()
{
    char arreglo[N][M];
    int buscar;

    capturarDatos(arreglo);
    buscar = BusquedaNombre(arreglo);
    printf("%d", buscar);

    return 0;
}
int BusquedaNombre(char arreglo[N][M]) {
    char nombreabuscar[M];
    int buscar = -1;
    int longitud;

    printf("Introduce el nombre que se desea buscar dentro del arreglo: ");
    scanf("%s", nombreabuscar);
    longitud = strlen(nombreabuscar);

    for (int i = 0; i <= N && buscar == -1; i++) {
        for(int j=0; j< longitud; j++){
            if (arreglo[i][j] == nombreabuscar[j]) {
                buscar = i-1;
            }
            else {
                buscar = -1;
            }
        }
    }

    return buscar;
}
void capturarDatos(char arreglo[N][M])
{
    {
        for (int i = 0; i < N; i++)
        {
            printf("Introduce el nombre de la posicion %d: ", i);
            scanf(" %s", &arreglo[i][M]);
        }
    }
}