#include <stdio.h>
#define L 4

void capturarDatos(int *arreglo);
int BuscaObjetivo(int *arreglo);

int main()
{
    int arreglo[L];
    int indice;

    capturarDatos(arreglo);
    indice = BuscaObjetivo(arreglo);
    printf("%d", indice);
    return 0;
}
void capturarDatos(int *arreglo)
{
    for(int i = 0; i < L; i++) {
        printf("Introduce un numero entero para la posicion %d (Ordenados): ", i);
        scanf("%d", &arreglo[i]);
    }
    printf("\n[");
    for(int j = 0; j < L; j++){
        printf(" %d ", arreglo[j]);
    }
    printf("]\n");
}

int BuscaObjetivo(int *arreglo)
{
    int objetivo;
    int indice;

    printf("Ingresa el numero que se desea buscar: ");
    scanf("%d",&objetivo);

    for(int i=0; i<L; i++){
        if (i==0 && objetivo < arreglo[i]){
            indice=i;
        }
        if (i==L-1 && objetivo > arreglo[i]){
            indice=L-1;
        }
        if(arreglo[i] == objetivo){
            indice = i;
        }
        if (objetivo > arreglo[i-1] && objetivo < arreglo[i+1]){
            indice = i;
        }
    }
    return indice;
}

