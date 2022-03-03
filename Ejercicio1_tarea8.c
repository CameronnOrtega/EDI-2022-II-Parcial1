#include <stdio.h>
#define N 4
#define M 3

void capturaDatos(int ArregloA[][M], int ArregloB[][M]);
void sumaDeMatrices(int ArregloA[][M], int ArregloB[][M], int ArregloC[][M]);
void calculaPromedioRenglones(int ArregloC[][M], int promedioRenglones[N]);
void calculaPromedioColumnas(int ArregloC[][M], int promediodeColumnas[M]);

int main()
{
    int ArregloA[N][M];
    int ArregloB[N][M];
    int ArregloC[N][M];
    int promedioRenglones[N];
    int promediodeColumnas[M];

    capturaDatos(ArregloA, ArregloB);
    sumaDeMatrices(ArregloA, ArregloB, ArregloC);
    calculaPromedioRenglones(ArregloC, promedioRenglones);
    calculaPromedioColumnas(ArregloC, promediodeColumnas);

    return 0;
}
void capturaDatos(int ArregloA[][M], int ArregloB[][M])
{
    for (int r = 0; r < N; r++)
    {
        for (int c = 0; c < M; c++)
        {
            printf("Introduce el numero de (%d,%d) del Arreglo A: ",r,c);
            scanf("%d", &ArregloA[r][c]);

            printf("Introduce el numero de (%d,%d) del Arreglo B: ",r,c);
            scanf("%d", &ArregloB[r][c]);
        }
    }
}
void sumaDeMatrices(int ArregloA[][M], int ArregloB[][M], int ArregloC[][M])
{
    printf("La suma de las matrices es:\n");
    for (int r = 0; r < N; r++)
    {

        for (int c = 0; c < M; c++)
        {
            ArregloC[r][c] = ArregloB[r][c] + ArregloA[r][c];
            printf("%d ", ArregloC[r][c]);
        }
        printf("\n");
    }
}
void calculaPromedioRenglones(int ArregloC[][M], int promedioRenglones[N])
{
    int suma;
    printf("El promedio de los renglones de la matriz es: ");
    for (int r = 0; r < N; r++)
    {
        suma= 0;
        for (int c = 0; c < M; c++)
        {
            suma = ArregloC[r][c] + suma;
        }
        promedioRenglones[r] = suma / M;
        printf("%d ", promedioRenglones[r]);
    }
}
void calculaPromedioColumnas(int ArregloC[][M], int promediodeColumnas[M])
{
    int suma;
    printf("\nEl promedio de las columnas de la matriz es: ");
    for (int c = 0; c < M; c++)
    {
        suma = 0;
        for (int r = 0; r < N; r++)
        {
            suma = ArregloC[r][c] + suma;
        }
        promediodeColumnas[c] = suma / N;
        printf("%d ", promediodeColumnas[c]);
    }
}