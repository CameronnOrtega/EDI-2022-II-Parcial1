#include <stdio.h>
#define L 50

void CambiaLetras(char *c);

int main()
{
    char cadena[L];

    printf("Introduce una cadena de texto (Puede contener mayusculas, minusculas y espacios): ");
    gets(cadena);

    CambiaLetras(cadena);

    printf("%s", cadena);

    return 0;
}
void CambiaLetras(char *c)
{
    for (int i = 0; i < L; i++)
    {
        switch (c[i])
        {
            case 'a':
                c[i] = 'A';
                break;
            case 'A':
                c[i] = 'a';
                break;
            case 'e':
                c[i] = 'E';
                break;
            case 'E':
                c[i] = 'e';
                break;
            case 'i':
                c[i] = 'I';
                break;
            case 'I':
                c[i] = 'i';
                break;
            case 'o':
                c[i] = 'O';
                break;
            case 'O':
                c[i] = 'o';
                break;
            case 'u':
                c[i] = 'U';
                break;
            case 'U':
                c[i] = 'u';
                break;
        }
    }
}
