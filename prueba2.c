#include <stdio.h>
#define n 100
void IntroduceCadena(char *S);
void IntroduceCaracter(char *C);
int NumeroVeces(char *cadena, char caracter);

int main()
{
    char S[n];
    char C;
    int numeroVecescaracter;

    IntroduceCadena(S);
    IntroduceCaracter(&C);
    numeroVecescaracter = NumeroVeces(S,C);

    printf("el caracter %c aparece %d veces en la cadena",C,numeroVecescaracter);

    return 0;
}
void IntroduceCaracter(char *C)
{
    printf("Introduce el caracter deseado: ");
    scanf(" %s", C);
}

void IntroduceCadena(char *S)
{

    printf("Introduzca  una cadena de caracteres: ");
    gets(S);
}
int NumeroVeces(char *cadena, char caracter)
{
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (cadena[i] == caracter)
        {
            cont++;
        }
    }
    return cont;
}