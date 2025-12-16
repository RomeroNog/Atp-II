#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char str[12],*pntr,aux,ajuda;
    int k=1,tamanho=0;
    pntr = &aux;


    for(int i=0;i<12;i++,k++,tamanho++)
    {
        printf("Digite o %d caracter: ",k);
        scanf("%c",&str[i]);
        fflush(stdin);
    }
    tamanho = tamanho-1;
    pntr = str+tamanho;

    for(int j=0;j<6;j++)
    {
        ajuda=str[j];
        str[j]= *(pntr-j);
        *(pntr-j)=ajuda;
    }
    printf("String invertida:");
    for(int w=0;w<12;w++)
    {
        printf(" %c ",str[w]);
    }
return 0;
}
