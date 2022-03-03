#include <stdio.h>
#define L 4 // la longitud del arreglo

void capturarDatos(int *ent);
int imprimeSumaPosicionesPares(int *ent);
int imprimePares(int *ent);
void imprimeSuma(int *ent, int *suma, int *contador);

int main()
{
    int enteros[L];
    int sumaPosicionesPares;
    int sumaPares;
    int suma = 0, contador = 0;

    capturarDatos(enteros);
    sumaPosicionesPares = imprimeSumaPosicionesPares(enteros);
    sumaPares = imprimePares(enteros);
    imprimeSuma(enteros, &suma, &contador);

    printf("La suma de las posiciones pares es: %d\n",sumaPosicionesPares);
    printf("La suma de los numero pares es: %d\n",sumaPares);
    printf("La suma total sin sobrepasar 100 es: %d\nEl total de numeros sumados son: %d\n", suma, contador);


    return 0;
}

void imprimeSuma(int *ent, int *suma, int *contador)
{
    for (int i = 0; i < L || *suma > 100; i++)
    {
        *suma = *suma + ent[i];
        *contador = 1 + *contador;
        if(*suma > 100)
        {
            *suma = *suma - ent[i];
            *contador = *contador - 1;
        }
    }


}

int imprimePares(int *ent)
{
    int suma = 0;
    for (int i = 0; i < L; i++)
    {
        if (ent[i] % 2 == 0)
        {
            suma = suma + ent[i];
        }
    }
    return suma;
}

int imprimeSumaPosicionesPares(int *ent)
{
    int suma = 0;
    for (int i = 0; i < L; i = i+2)
    {
        suma = ent[i] + suma;
    }
    return suma;
}

void capturarDatos(int *ent)
{
    for (int i = 0; i <= L; i++)
    {
        printf("Dame un numero entre el 1 y 100: ");
        scanf("%d", &ent[i]);

        while (ent[i] < 0 || ent[i] > 100)
        {
            printf("Error, valor no valido");
            printf("\nDame un numero entre el 1 y 100: ");
            scanf("%d", &ent[i]);
        }
    }
}