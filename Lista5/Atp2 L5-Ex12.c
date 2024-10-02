#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
void primos (int num,int aux, int cont)
{
    if(num == 2)
    {
        printf(" %d ",num);
    }
    else
    {
        if(aux>1)
        {
            if(num%aux==0)
            {
                return primos(num,aux-1,cont+1);
            }
            return primos(num,aux-1,cont);
        }
        if(aux==1)
        {
            if(cont==0)
            {
                printf(" %d ",num);
            }
            aux = num-2;
            cont = 0;
            return primos(num-1, aux,cont);
        }
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero,auxiliar,contador=0;

    printf("Digite um número: ");
    scanf("%d",&numero);
    printf("Números primos até o número digitado: \n");

    auxiliar = numero-1;

    primos(numero,auxiliar,contador);

return 0;
}
