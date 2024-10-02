#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
void invert_elem(int str[])
{
    int *pntr,tamanho=0,n=0;

    pntr = malloc(8*sizeof(int));

    for(int i=0;str[i]!='\0';i++,tamanho++)
    {
        *(pntr+i) = str[i];
    }
    tamanho = tamanho-1;
    for(int i=tamanho;i>-1;i--,n++)
    {
        printf("%d ",*(pntr+i));
        str[n]=*(pntr+i);
    }
    printf("\nVetor invertido: ");
    for(int m=0;str[m]!='\0';m++)
    {
        printf("%d ",str[m]);
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vetor[8],k=1;

    for(int i=0;i<8;i++,k++)
    {
        printf("Digite o %d número: ",k);
        scanf("%d",&vetor[i]);
    }
    vetor[8]='\0';
    invert_elem(vetor);
return 0;
}
