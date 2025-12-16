#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int soma_digitos(int num)
{
    if(num==0)
    {
        return num;
    }
    else
    {
       return (num%10) + soma_digitos(num/10);
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero;

    printf("Digite um número: ");
    scanf("%d",&numero);

    printf("Soma dos dígitos: %d",soma_digitos(numero));

return 0;
}
