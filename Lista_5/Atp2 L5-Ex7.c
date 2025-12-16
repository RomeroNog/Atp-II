#include  <stdio.h>
#include <stdlib.h>
#include <locale.h>
int potencia(int num, int exp)
{
    if(exp==0)
    {
        return 1;
    }
    else
    {
        if(1<exp)
        {

            return num * potencia(num,exp-1);
        }
        if(exp==1)
        {
            return num;
        }
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero, expoente,inicio=1;

    printf("Digite um número: ");
    scanf("%d",&numero);

    printf("Digite um expoente para o número: ");
    scanf("%d",&expoente);

    printf("Resultado da potencia: %d",potencia(numero,expoente));

return 0;
}
