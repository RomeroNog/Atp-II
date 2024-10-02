#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA], matrizTransposta[COLUNA][LINHA];
    int matrizMultipli[LINHA][COLUNA],d=0;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Digite o elemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            matrizTransposta[i][j] = matriz[j][i];
        }
    }
    printf("\n");
    printf("\nMatriz normal: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matriz[i][j]);
        }
    }
    printf("\n");
    printf("\nMatriz Transposta: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matrizTransposta[i][j]);
        }
    }

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            matrizMultipli[i][j] = matriz[i][ d ]*matrizTransposta[ d ][j]+ matriz[i][d+1]*matrizTransposta[d+1][j]+matriz[i][d+2]*matrizTransposta[d+2][j];
        }
    }
    printf("\n");
    printf("\nMatriz Multiplicada: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matrizMultipli[i][j]);
        }
    }
return 0;
}
