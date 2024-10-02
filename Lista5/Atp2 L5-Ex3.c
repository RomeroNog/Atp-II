#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAMANHO 5
int maior_elem(int str[],int ini)
{
    if(ini==TAMANHO)
    {
        return str[0];
    }
    if(str[0]<str[ini])
    {
        str[0] = str[ini];
    }
    return maior_elem(str,ini+1);
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vetor[TAMANHO], inicio=0,k=1;

    for(int i=0;i<TAMANHO;i++,k++)
    {
        printf("Digite o %d número: ",k);
        scanf("%d",&vetor[i]);
    }

    printf("Maior elemento do vetor: %d",maior_elem(vetor,inicio));

return 0;
}
