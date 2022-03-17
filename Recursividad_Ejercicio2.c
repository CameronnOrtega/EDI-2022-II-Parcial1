#include <stdio.h>

int fibo(int n);
void imprimevalor(int valor);
int pideN();

int main ()
{

    int cont, num;

    cont = pideN();
    num = fibo (cont);
    imprimevalor(num);

}
int pideN()
{
    int n;

    printf("Dame el valor de la posicion: ");
    scanf("%d", &n);
    return (n);
}

int fibo (int n)
{
    int valor;
    if (n==0){
        valor = 0;
    }
    else if (n < 3){
        valor = 1;}
    else{
        valor = fibo(n-1) + fibo (n-2);}
    return (valor);
}

void imprimevalor(int valor)
{
    printf("Valor: %d", valor);
}