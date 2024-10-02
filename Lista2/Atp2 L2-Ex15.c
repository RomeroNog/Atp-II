#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA],matrizLinhaInv[LINHA][COLUNA];
    int m=0,n=0;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Digite o elemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    m = LINHA-1;
    n= COLUNA-1;
    for(int i=0;i<LINHA;i++,m--)
    {
        for(int j=0;j<COLUNA;j++,n--)
        {
            matrizLinhaInv[i][j] = matriz[m][j];
        }
    }

    printf("\nMatriz com linhas invertidas");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matrizLinhaInv[i][j]);
        }
    }
return 0;
}
