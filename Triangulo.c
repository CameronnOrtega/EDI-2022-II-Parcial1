#include <stdio.h>
int main()
{
   float a, b, c;

    printf("Medida del lado A: ");
    scanf("%f", &a);
    printf("Medida del lado B: ");
    scanf("%f", &b);
    printf("Medida del lado C: ");
    scanf("%f", &c);

    if(a==b && b==c && a==c)
    {
        printf("El triangulo es equilatero");
    }
    else if(b==c && a!=b || c==a && c!=b || a==b && b!=c)
    {
        printf("El triangulo es isosceles");
    }
    else if(a!=b && b!=c && a!=c)
    {
        printf("El triangulo es escaleno");
    }
    return 0;
}
