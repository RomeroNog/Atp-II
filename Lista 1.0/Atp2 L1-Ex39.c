#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
void qnt_num_posi(int str[])
{
    int *pntr,positvo=0;

    *pntr = 0;

    pntr = malloc(sizeof(int));
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=*pntr)
        {
            positvo++;
        }
    }
    printf("Quantidade de números positivos: %d",positvo);
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vetor[6],k=1;

    for(int i=0;i<6;i++,k++)
    {
        printf("Digite o %d número: ",k);
        scanf("%d",&vetor[i]);
    }
    vetor[6]='\0';
    qnt_num_posi(vetor);
return 0;
}
