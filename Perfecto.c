#include <stdio.h>

int comparaNumeroPerfecto(int num);

int main()
{
    int numero, perfecto;

    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    perfecto = comparaNumeroPerfecto(numero);
    printf("El numero %d",numero);
    if(perfecto == 1)
    {
        printf(" es perfecto");
    }
    else
    {
        printf(" no es perfecto");
    }

    return 0;
}
int comparaNumeroPerfecto(int num)
{
    int suma = 0;
    int perfecto = 0;

    if(num > 0)
    {
        for ( int i = 1; i < num; i++)
        {
            if(num % i == 0)
            {
                suma = suma + i;
            }
        }
        if(suma == num)
        {
            perfecto = 1;
        }
    }
    return perfecto;
}