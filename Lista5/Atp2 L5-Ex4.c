#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int fibonacci(int num)
{
    if(num==1)
    {
        return 1;
    }
    if(num==2)
    {
        return 1;
    }
    else
    {
        return fibonacci(num-1) + fibonacci(num-2);
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero,fib;

    printf("Digite um termo para saber o n�mero de fibonacci: ");
    scanf("%d",&numero);

    fib = fibonacci(numero);

    printf("N�mero de fibonacci: %d",fib);

return 0;
}
