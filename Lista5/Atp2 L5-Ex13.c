#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAMANHO 5
int aparicao (int str[],int elem, int cont,int ini)
{

    if(ini==TAMANHO)
    {
        return cont;
    }
    else
    {
        if(elem == str[ini])
        {
            return aparicao(str,elem,cont+1,ini+1);
        }
        return aparicao(str,elem,cont,ini+1);
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vetor[TAMANHO],k=1,elemento, contador=0,inicio=0;

    for(int i=0;i<TAMANHO;i++,k++)
    {
        printf("Digite o %d número: ",k);
        scanf("%d",&vetor[i]);
    }

    printf("Digite um elemento para busca no array: ");
    scanf("%d",&elemento);


    printf("\n\tNúmero de ocorrências: %d\n", aparicao(vetor,elemento,contador,inicio));

return 0;
}
