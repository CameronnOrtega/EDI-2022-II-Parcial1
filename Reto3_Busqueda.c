#include <stdio.h>
#define N 3

void capturarDatos(char *letras);
void ordenaAscendente(char *letras, char *abecedario);
void intercambio(char *a, char *b);
void imprimeArreglo(char *letras);
char calculaletraMayor(char *letras, char *objetivo, char *abecedario);

int main()
{
    char letras[N];
    char abecedario[52]= {'a','b','c','d','e','f','g','h','i','j','k',
                          'l','m','n','o','p','q','r','s','t','u',
                          'v','w','x','y','z'};
    char objetivo, mayor;

    capturarDatos(letras);
    ordenaAscendente(letras, abecedario);

    printf("\nIntroduce la letra objetivo: ");
    scanf(" %c", &objetivo);

    mayor = calculaletraMayor(letras, &objetivo, abecedario);

    printf("salida: %c", mayor);

    return 0;
}
void capturarDatos(char *letras)
{
    for (int i = 0; i < N; i++)
    {
        printf("Introduce una letra minuscula para la posicion %d : ", i);
        scanf(" %c",&letras[i]);
    }
    imprimeArreglo(letras);
}
void ordenaAscendente(char *letras, char *abecedario)
{
    int aux, cont;
    for (int i = 0; i < N; i++)
    {
        cont = 0;
        while (letras[i] != abecedario[cont])
        {
            cont++;
        }

        if (i > 0 && cont<aux)
        {
            intercambio(&letras[i],&letras[i-1]);
        }
        aux = cont;
    }
    imprimeArreglo(letras);
}
void intercambio(char *a, char *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
void imprimeArreglo(char *letras)
{
    printf("\n[");
    for(int i = 0; i < N; i++)
    {
        printf(" %c ", letras[i]);
    }
    printf("]\n");
}
char calculaletraMayor(char *letras, char *objetivo, char *abecedario)
{
    int cont1 = 0;
    int cont2;

    while (*objetivo != abecedario[cont1])
    {
        cont1 ++;
    }

    for (int i = 0; i < N; i++)
    {
        cont2 = 0;
        while (letras[i] != abecedario[cont2])
        {
            cont2++;
        }

        if (cont1 < cont2  )
        {
            return letras[i];
        }
    }
    return letras[0];
}