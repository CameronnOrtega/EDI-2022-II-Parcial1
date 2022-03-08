#include <stdio.h>
#define N 3
#define M 4

void LecturadeMatriz(int ArregloA[][M], int ArregloB[][M]);
void SumaVecinos(int ArregloA[][M], int suma[][M]);
void imprimeNuevaMatriz(int ArregloB[][M]);

int main()
{
    int ArregloA[N][M];
    int ArregloB[N][M];

    LecturadeMatriz(ArregloA, ArregloB);
    SumaVecinos(ArregloA, ArregloB);
    imprimeNuevaMatriz(ArregloB);

    return 0;
}
void LecturadeMatriz(int ArregloA[][M], int ArregloB[][M])
{
    for (int r = 0; r < N; r++)
    {
        for (int c = 0; c < M; c++)
        {
            printf("Introduce un numero en la posicion (%d.%d): ",r ,c);
            scanf("%d", &ArregloA[r][c]);
            ArregloB[r][c] = ArregloA[r][c];
        }

    }

}
void SumaVecinos(int ArregloA[][M], int ArregloB[][M])
{
    for (int r = 0; r < N; r++)
    {
        for (int c = 0; c < M; c++) {
            if ((c-1) >= 0 && (c+1) <= M)
            {
                ArregloB[r][c] = ArregloA[r][c-1] + ArregloB [r][c];
            }
            if ((r-1) >= 0 && (r+1) <= N)
            {
                ArregloB[r][c] = ArregloA[r-1][c] + ArregloB [r][c];
            }
            if ((c+1) < M)
            {
                ArregloB[r][c] = ArregloA[r][c+1] + ArregloB [r][c];
            }
            if ((r+1) < N)
            {
                ArregloB[r][c] = ArregloB [r][c] + ArregloA[r+1][c];
            }
        }
    }
}

void  imprimeNuevaMatriz(int ArregloB[][M])
{
    for (int r = 0; r < N; r++)
    {
        for (int c = 0; c < M; c++)
        {
            printf("%d ",ArregloB[r][c]);
        }
        printf("\n");
    }

}



