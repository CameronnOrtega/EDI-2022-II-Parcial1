#include <stdio.h>
#define L 10

void CapturarDatos(int *arreglo);
void quickSort(int *arreglo, int inicio, int fin);
void intercambio(int *a, int *b);
void imprimeArreglo(int *arreglo);
int CompararDatos(int *arreglo);

int main()
{
    int arreglo[L];
    int numero;

    CapturarDatos(arreglo);
    quickSort(arreglo, 0, L-1);
    imprimeArreglo(arreglo);
    numero = CompararDatos(arreglo);
    printf("Salida: %d", numero);

    return 0;
}
void CapturarDatos(int *arreglo)
{
    for(int i = 0; i < L; i++)
    {
        printf("Introduce un numero entero para la posicion %d : ", i);
        scanf("%d", &arreglo[i]);
    }
    imprimeArreglo(arreglo);
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
void imprimeArreglo(int *arreglo)
{
    printf("\n[");
    for(int i = 0; i < L; i++)
    {
        printf(" %d ", arreglo[i]);
    }
    printf("]\n");
}
int CompararDatos(int *arreglo)
{
    int val = 0;
    int contador = 0;
    int aux = 0;
    for (int i = 0; i < L; i++)
    {
        contador = 0;

        if (arreglo[i]==arreglo[i+1])
        {
            while(arreglo[i] == arreglo[i+1])
            {
                contador++;
                i ++;
            }
            if (contador > aux)
            {
                val = arreglo[i];
                aux = contador;
            }
        }
    }

    return val;
}