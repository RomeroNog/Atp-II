#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matrizA[LINHA][COLUNA], matrizB[LINHA][COLUNA],matrizMultipli[LINHA][COLUNA];
    int d=0;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("\nElemento da matriz A [%d][%d]: ",i,j);
            scanf("%d",&matrizA[i][j]);
        }
    }
    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("\nElemento da matriz B[%d][%d]: ",i,j);
            scanf("%d",&matrizB[i][j]);
        }
    }
    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            matrizMultipli[i][j] = matrizA[i][ d ]*matrizB[ d ][j]+ matrizA[i][d+1]*matrizB[d+1][j]+matrizA[i][d+2]*matrizB[d+2][j];
        }
    }
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
