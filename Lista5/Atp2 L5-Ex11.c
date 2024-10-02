#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define CONT 5
int MDC_array(int vet[], int div)
{
    int aux=0;

    for(int i=0;i<CONT;i++)
    {
        if(vet[i]%div==0)
        {
            aux++;
        }
    }
    if(aux == CONT)
    {
        return div;
    }
    else
    {
        return MDC_array(vet,div-1);
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vetor[CONT],k=1,menor,divisor;

    for(int i=0;i<CONT;i++,k++)
    {
        printf("Digite o %d número: ",k);
        scanf("%d",&vetor[i]);
        if(i==0)
        {
            menor = vetor[i];
        }
        if(menor>vetor[i])
        {
            menor = vetor[i];
        }
    }
    divisor = menor;

    printf("\n\tMDC desses números é: %d\n",MDC_array(vetor,divisor));




return 0;
}
