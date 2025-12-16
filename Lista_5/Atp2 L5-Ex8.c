#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int MDC(int num1, int num2, int div)
{
    if(num1%div == 0 && num2%div==0)
    {
        return div;
    }
    else
    {
        return MDC(num1,num2,div-1);
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero1, numero2,divisor;

    printf("Digite o 1 número: ");
    scanf("%d",&numero1);

    printf("Digite o 2 número: ");
    scanf("%d",&numero2);

    if(numero1>numero2)
    {
        divisor = numero2;
    }
    else
    {
        divisor = numero1;
    }

    printf("O mdc desses números é: %d",MDC(numero1,numero2,divisor));

return 0;
}
