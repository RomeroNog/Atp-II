#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int soma_numeros(int num)
{
    if(num==1)
    {
        return 1;
    }
    else
    {
        return num+soma_numeros(num-1);
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero,soma;

    printf("Digite um número N para fazer a soma de 1 a N: ");
    scanf("%d",&numero);

    soma = soma_numeros(numero);

    printf("Soma de 1 a N: %d",soma);

return 0;
}
