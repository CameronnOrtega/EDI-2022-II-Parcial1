#include <stdio.h>
#define L 5

void capturarEnteros(int *EN);
int SumaPosicionesPares(int *EN);
int SumaValoresPares(int *EN);
void SumayCantidad(int *EN, int *suma, int *contador);

int main()
{
    int entero[L];
    int sumaPosicionesP;
    int sumaVPares;
    int suma = 0;
    int contador = 0;

    capturarEnteros(entero);
    sumaPosicionesP = SumaPosicionesPares(entero);
    sumaVPares = SumaValoresPares(entero);
    SumayCantidad (entero, &suma, &contador);

    printf("La  suma de los valores de las posiciones pares del arreglo es: %d\n",sumaPosicionesP);
    printf("La suma de los valores pares del arreglo es: %d\n",sumaVPares);
    printf("La suma total sin sobrepasar 100 es: %d\nEl total de numeros sumados son: %d\n", suma, contador);

    return 0;
}
void capturarEnteros(int *EN)
{
    for (int i = 0; i < L; i++)
    {
        printf("Introduce un numero entre el 1 y 100: ");
        scanf("%d", &EN[i]);

        if (EN[i] < 0 || EN[i] > 100)
        {
            printf("El valor ingresado no es válido ya que no esta en el rango requerido\n");
            printf("Introduce un numero entre el 1 y 100: ");
            scanf("%d", &EN[i]);
        }
    }
}
int SumaPosicionesPares(int *EN)
{
    int suma = 0;
    for (int i = 0; i < L; i++)
    {
        if(i % 2 == 0)
        suma = EN[i] + suma;
    }
    return suma;
}
int SumaValoresPares(int *EN)
{
    int suma = 0;
    for (int i = 0; i < L; i++)
    {
        if (EN[i] % 2 == 0)
        {
            suma = suma + EN[i];
        }
    }return suma;
}
void SumayCantidad(int *EN, int *suma, int *contador)
{
    for (int i = 0; i < L || *suma > 100; i++)
    {
        *suma = *suma + EN[i];
        *contador = 1 + *contador;
        if(*suma > 100)
        {
            *suma = *suma - EN[i];
            *contador = *contador - 1;
        }
    }
}



