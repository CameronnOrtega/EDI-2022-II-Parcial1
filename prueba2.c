#include <stdio.h>
#define NFILAS 4
#define NCOLUMNAS 3

void capturarMatrix(int matrizA[][NCOLUMNAS], int matrizB[][NCOLUMNAS]);
void sumaMatrices(int matrizA[][NCOLUMNAS], int matrizB[][NCOLUMNAS], int matrizC[][NCOLUMNAS]);
void calculaPromedioFilas(int matrizC[][NCOLUMNAS], int promedioFilas[NFILAS]);
void calculaPromedioColumnas(int matrizC[][NCOLUMNAS], int promedioColumnas[NCOLUMNAS]);

int main()
{
    int matrizA[NFILAS][NCOLUMNAS];
    int matrizB[NFILAS][NCOLUMNAS];
    int matrizC[NFILAS][NCOLUMNAS];
    int promedioFilas[NFILAS];
    int promedioColumnas[NCOLUMNAS];

    capturarMatrix(matrizA, matrizB);
    sumaMatrices(matrizA, matrizB, matrizC);
    calculaPromedioFilas(matrizC, promedioFilas);
    calculaPromedioColumnas(matrizC, promedioColumnas);

    return 0;
}

void calculaPromedioColumnas(int matrizC[][NCOLUMNAS], int promedioColumnas[NCOLUMNAS])
{
    int aux;
    printf("\nEl promedio por columnas es: ");
    for (int i = 0; i < NCOLUMNAS; i++)
    {
        aux = 0;
        for (int j = 0; j < NFILAS; j++)
        {
            aux = matrizC[j][i] + aux;
        }
        promedioColumnas[i] = aux / NFILAS;
        printf("%d ", promedioColumnas[i]);
    }

}

void calculaPromedioFilas(int matrizC[][NCOLUMNAS], int promedioFilas[NFILAS])
{
    int aux;
    printf("El promedio por filas es: ");
    for (int j = 0; j < NFILAS; j++)
    {
        aux = 0;
        for (int i = 0; i < NCOLUMNAS; i++)
        {
            aux = matrizC[j][i] + aux;
        }
        promedioFilas[j] = aux / NCOLUMNAS;
        printf("%d ", promedioFilas[j]);
    }

}

void sumaMatrices(int matrizA[][NCOLUMNAS], int matrizB[][NCOLUMNAS], int matrizC[][NCOLUMNAS])
{
    printf("La suma es:\n");
    for (int j = 0; j < NFILAS; j++)
    {

        for (int i = 0; i < NCOLUMNAS; i++)
        {
            matrizC[j][i] = matrizB[j][i] + matrizA[j][i];
            printf("%d ", matrizC[j][i]);
        }
        printf("\n");
    }
}

void capturarMatrix(int matrizA[][NCOLUMNAS], int matrizB[][NCOLUMNAS])
{
    for (int j = 0; j < NFILAS; j++)
    {
        for (int i = 0; i < NCOLUMNAS; i++)
        {
            printf("Dame un numero del (%d.%d) de la matrizA: ",j,i);
            scanf("%d", &matrizA[j][i]);

            printf("Dame un numero del (%d.%d) de la matrizB: ",j,i);
            scanf("%d", &matrizB[j][i]);
        }
    }
}