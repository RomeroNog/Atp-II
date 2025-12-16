#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int fatorial_recursivo(int num)
{
    if(num==0)
    {
        return 1;
    }
    else
    {
        return num*fatorial_recursivo(num-1);
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero, fatorial;

    printf("Digite uma número para saber o fatorial: ");
    scanf("%d",&numero);

    fatorial = fatorial_recursivo(numero);

    printf("\nFatorial do  número: %d",fatorial);

return 0;
}
