#include <stdio.h>
#define N 10

void calculaMayorMenor(float *M, float *m);

int main()
{
    float mayor, menor;

    calculaMayorMenor(&mayor, &menor);

    printf("El numero mayor es: %.2f\n", mayor);
    printf("El numero menor es: %.2f", menor);
}

void calculaMayorMenor(float *M, float *m)
{
    float num;
    int contador;

    contador = 0;

    printf("Ingresa un numero: ");
    scanf("%f", &num);

    *M = num;
    *m = num;

    while (contador < (N-1))
    {
        printf("Ingresa otro numero: ");
        scanf("%f", &num);

        if ( *M < num)
        {
            *M = num;
        }
        else if (*m > num)
        {
            *m = num;
        }

        contador++;
    }
}