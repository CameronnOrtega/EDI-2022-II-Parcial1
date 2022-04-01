#include <stdio.h>

void CapturaTamaño(int *T);
void CapturaDatos (int *arreglo,int T);
void intercambio(int *a, int *b);
void imprimeArreglo(int *arreglo,int T);
void SumaArreglos(int *ArregloA,int *ArregloB,int *ArregloC,int N,int M,int L);
void quickSort(int *arreglo, int inicio, int fin);

int main()
{
    int N=0,M=0,L=0;
    CapturaTamaño(&N);
    CapturaTamaño(&M);
    L=N+M;
    int ArregloA[N];
    int ArregloB[M];
    int ArregloC[L];

    CapturaDatos(ArregloA, N);
    CapturaDatos(ArregloB, M);
    imprimeArreglo(ArregloA,N);
    imprimeArreglo(ArregloB,M);
    SumaArreglos(ArregloA,ArregloB,ArregloC,N,M,L);
    imprimeArreglo(ArregloC,L);
    quickSort(ArregloC, 0, L-1);
    imprimeArreglo(ArregloC,L);
    return 0;
}
void CapturaTamaño(int *T)
{
    printf("Introduce el tamano del arreglo :");
    scanf("%d", T);

    if (*T > 100)
    {
        do{
            printf("Introduce el tamano del arreglo :");
            scanf("%d", T);
        }while(*T > 100);
    }
}
void CapturaDatos (int *arreglo,int T)
{
    for(int i = 0; i < T; i++)
    {
        printf("Introduce un numero entero para la posicion %d : ", i);
        scanf("%d", &arreglo[i]);
    }
}
void imprimeArreglo(int *arreglo,int T)
{
    printf("\n[");
    for(int i = 0; i < T; i++)
    {
        printf(" %d ", arreglo[i]);
    }
    printf("]\n");
}
void SumaArreglos(int *ArregloA,int *ArregloB,int *ArregloC,int N,int M,int L)
{
    for (int i = 0; i<N; i++)
    {
        ArregloC[i] = ArregloA [i];
        for ( int i = N; i<L; i++)
        {
            ArregloC[i] = ArregloB [i-N];
        }
    }
}
void quickSort(int *arreglo, int inicio, int fin)
{
    int pivote;
    int posicionIzquierda, posicionDerecha;

    if(inicio >= fin)
    {
        return;
    }

    pivote = arreglo[inicio];
    posicionIzquierda = inicio;
    posicionDerecha = fin;

    do
    {
        while(arreglo[posicionDerecha] > pivote && posicionDerecha > inicio)
        {
            posicionDerecha--;
        }
        while(arreglo[posicionIzquierda] < pivote && posicionIzquierda < fin)
        {
            posicionIzquierda++;
        }
        if (posicionIzquierda <= posicionDerecha)
        {
            intercambio(&arreglo[posicionIzquierda], &arreglo[posicionDerecha]);
            posicionIzquierda++;
            posicionDerecha--;
        }
    } while (posicionDerecha >= posicionIzquierda );
    if (posicionIzquierda < fin  )
    {
        quickSort(arreglo, posicionIzquierda, fin);
    }
    if (posicionDerecha > inicio  )
    {
        quickSort( arreglo, inicio, posicionDerecha);
    }
}
void intercambio(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}