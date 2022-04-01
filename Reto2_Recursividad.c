#include <stdio.h>
#define H 16

void ConversionHexadecimal(int numero);

int main()
{
    int numero;
    printf("Introduce el numero decimal que se desea convertir en hexadecimal:");
    scanf("%d",&numero);

    ConversionHexadecimal(numero);

    return 0;
}
void ConversionHexadecimal(int numero)
{
    int i;
    i = numero % H;
    if (numero > 0)
    {
        ConversionHexadecimal(numero/H);
        if(i>=10){
            if(i==10)
            {
                printf("A");
            }
            if(i==11)
            {
                printf("B");
            }
            if(i==12)
            {
                printf("C");
            }
            if(i==13)
            {
                printf("D");
            }
            if(i==14)
            {
                printf("E");
            }
            if(i==15)
            {
                printf("F");
            }
        }else
        {
            printf("%d",i);
        }
    }
}