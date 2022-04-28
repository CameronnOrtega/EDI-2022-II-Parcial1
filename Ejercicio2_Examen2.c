#include <stdio.h>
#include <string.h>
#define L 50
void InvertirCadena( char *cadena);
int main()
{
    char cadena[L];
    printf("Introduce la cadena: ");
    scanf("%[^\n]", &cadena);
    InvertirCadena(cadena);
    printf(cadena);
}
void InvertirCadena( char *cadena) {
    int N;
    N=strlen(cadena);
    if (strlen (cadena) <= 1) {
        return;
    }
    char temporal = *cadena;
    *cadena = *(cadena + N-1);
    *(cadena + N-1) = '\0';
    InvertirCadena(cadena + 1);
    *(cadena + N-1) = temporal;
}