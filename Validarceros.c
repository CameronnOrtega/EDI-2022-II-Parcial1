#include <stdio.h>
int comparaNumeroPerfecto(int num);
int main()
{
    int numero;
    int perfecto;

    do
    {
        printf("Ingresa un numero: ");
        scanf("%d", &numero);

        perfecto = comparaNumeroPerfecto(numero);

        if (numero != 0)
        {
            printf("El numero %d",numero);
            if(perfecto == 1)
            {
                printf(" es perfecto \n");
            }
            else if(perfecto == 0)
            {
                printf(" no es perfecto \n");
            }
            else
            {
                printf("tiene que ser un entero positivo\n");
            }
        }
    } while (numero != 0);
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
        else
        {
            perfecto = 0;
        }

    }
    else
    {
        perfecto = 2;
    }
    return perfecto;
}

