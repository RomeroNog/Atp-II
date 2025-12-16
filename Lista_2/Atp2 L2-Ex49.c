#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 4
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA],matrizTransposta[COLUNA][LINHA];

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Digite o elemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for(int i=0;i<COLUNA;i++)
    {
        for(int j=0;j<LINHA;j++)
        {
            matrizTransposta[i][j] = matriz[j][i];
        }
    }

    printf("\nMatriz normal: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matriz[i][j]);
        }
    }

    printf("\nMatriz Transposta: ");
    for(int i=0;i<COLUNA;i++)
    {
        printf("\n");
        for(int j=0;j<LINHA;j++)
        {
            printf("%d ",matrizTransposta[i][j]);
        }
    }


return 0;
}
