#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
void  maior_numero(int str[])
{
    int *pntr,aux=0;
    pntr = &aux;

    for(int j=0;j<10;j++)
    {
        printf(" %d ",str[j]);
    }

    *pntr = str[0];

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>*pntr)
        {
            *pntr = str[i];
        }
    }
    printf("\nMaior número: %d",*pntr);

}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vetor[10],k=1,maior=0;

    for(int i=0;i<10;i++,k++)
    {
        printf("Digite o %d número: ",k);
        scanf("%d",&vetor[i]);
    }

    maior_numero(vetor);








return 0;
}
