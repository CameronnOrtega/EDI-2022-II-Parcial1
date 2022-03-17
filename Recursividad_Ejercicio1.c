#include <stdio.h>
#include <string.h>
#define L 50

int CambioRecursividad(char *cadena, int inicial, int final);
void Cambio(char *copia, int final);
void CadenaSinEspacios(char *cadena, int *final);
int CambioCiclos(char *cadena, int inicial, int final);

int main()
{
    char cadena[L];
    int inicial = 0;
    int final;
    int palindroma1;
    int palindroma2;

    printf("Introduce la cadena: ");
    scanf("%[^\n]", &cadena);

    final = strlen(cadena);
    CadenaSinEspacios(cadena, &final);

    palindroma1 = CambioRecursividad(cadena, inicial, final);
    printf("Recursividad: %d \n", palindroma1);

    palindroma2 = CambioCiclos(cadena,inicial,final);
    printf("Ciclos: %d", palindroma2);
    return 0;
}

int CambioRecursividad(char *cadena, int inicial, int final)
{
    char copia[L];
    strcpy(copia, cadena);
    Cambio(copia, final);
    if (inicial > final)
    {
        return 1;
    }
    if (cadena[inicial] == copia [final])
    {
        return CambioRecursividad(cadena, inicial + 1, final - 1);
    }
    else
    {
        return 0;
    }
}
int CambioCiclos(char *cadena, int inicial, int final)
{
    char copia[L];
    strcpy(copia, cadena);
    Cambio(copia, final);
    for (int i=0; i<L; i++) {
        for (int j=0; j<L; j--){
            if (cadena[inicial] == copia [final]){
                return 1;
            }
            else{
                return 0;
            }
        }
    }

}
void Cambio(char *copia, int final)
{
    int aux;

    for (int j = final; j > 0; j--)
    {

        for (int i = 0; i < final; i++)
        {
            aux = copia[j];
            copia[j] = copia[i];
            copia[i] = copia[j];
        }
    }
}
void CadenaSinEspacios(char *cadena, int *final)
{
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] == ' ')
        {
            for (int j = i; j < *final; j++)
            {
                cadena[j] = cadena[j+1];
            }
            *final = *final - 1;
        }

    }
}
