#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
void printf_inverso(int str[], int qnt)
{

    if(qnt>0)
    {
        printf("N�mero %d: %d\n",qnt+1,str[qnt]);
        return printf_inverso(str,qnt-1);
    }
    else
    {
     printf("N�mero 1: %d",str[qnt]);
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int quantidade;

    printf("Quantos n�meros ser�o lidos: ");
    scanf("%d",&quantidade);

    int vetor[quantidade],k=1;

    for(int i=0;i<quantidade;i++,k++)
    {
        printf("Digite o %d n�mero: ",k);
        scanf("%d",&vetor[i]);
    }

    quantidade = quantidade -1;
    printf_inverso(vetor, quantidade);

return 0;
}
