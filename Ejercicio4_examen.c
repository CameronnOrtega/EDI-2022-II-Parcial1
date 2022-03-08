#include <stdio.h>

void CambioValores(int *a, int *b, int *c);

int main()
{
    int a, b, c;

    printf("Introduce el valor de a: ");
    scanf("%d", &a);
    printf("Introduce el valor de b: ");
    scanf("%d", &b);
    printf("Introduce el valor de c: ");
    scanf("%d", &c);

    CambioValores(&a, &b, &c);

    printf("Valor de a = %d, Valor de b = %d, Valor de c = %d", a, b, c);

    return 0;
}
void CambioValores(int *a, int *b, int *c)
{
    if (*a > *b)
    {
        *b = *b * 2;
    }
    else if (*a < *b)
    {
        *c = *c - *a;
    }
    if (*c < 0)
    {
        *c = *c * -1;
    }
}
