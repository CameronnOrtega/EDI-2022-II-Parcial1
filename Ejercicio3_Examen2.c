#include <stdio.h>
#include<string.h>
#define TAM 30
typedef struct
{
    float Prom;
    char Nom[30];
}ALUM;
void llenarArreglo(ALUM ArrAl[TAM], int NA);
void acomodarArreglo(ALUM ArrAl[TAM], int NA);
void mostrarArreglo(ALUM ArrAl[TAM], int NA);
void capturatamaño(int *NA);
int main()
{
    ALUM ArrAl[TAM];
    int Nal;
    capturatamaño(&Nal);
    llenarArreglo(ArrAl,Nal);
    acomodarArreglo(ArrAl,Nal);
    mostrarArreglo(ArrAl,Nal);
}
void capturatamaño(int *NA)
{
    printf("Introduce cuantos alumnos son :");
    scanf("%d", NA);

    if (*NA > 100)
    {
        do{
            printf("Introduce cuantos alumnos son :");
            scanf("%d", NA);
        }while(*NA > 100);
    }
}
void llenarArreglo(ALUM ArrAl[TAM], int NA)
{
    int i;
    for(i=0; i<NA; i++)
    {
        printf("Nombre del Alumno %d: ", i+1);
        fflush(stdin);
        gets(ArrAl[i].Nom);
        printf("Promedio del alumno %d: ", i+1);
        scanf("%f",&ArrAl[i].Prom);
    }
}
void acomodarArreglo(ALUM ArrAl[TAM], int NA)
{
    float aux=0;
    char auxnom[30];
    for(int i=0; i<NA; i++)
    {
        for(int j=0; j<NA; j++)
        {
            if(ArrAl[i].Prom>ArrAl[j].Prom)
            {
                aux=ArrAl[i].Prom;
                strcpy(auxnom,ArrAl[i].Nom);
                ArrAl[i].Prom=ArrAl[j].Prom;
                strcpy(ArrAl[i].Nom, ArrAl[j].Nom);
                ArrAl[j].Prom=aux;
                strcpy(ArrAl[j].Nom,auxnom);
            }
        }
    }
}
void mostrarArreglo(ALUM ArrAl[TAM], int NA)
{
    for(int i=0; i<NA; i++)
    {
        printf("%s %.1f", ArrAl[i].Nom, ArrAl[i].Prom);
        printf("\n");
    }
}