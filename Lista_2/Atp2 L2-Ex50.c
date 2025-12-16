#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

#define LINHA 4
#define COLUNA 4
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matrizA[LINHA][COLUNA]={{0,1,0,0},{0,0,1,0},{0,0,0,1},{0,0,0,0}};
    int matrizDr[LINHA][COLUNA]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int matrizADr[LINHA][COLUNA], matrizDrADr[LINHA][COLUNA],drazin=0;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            for(int n=0;n<LINHA;n++)
            {
                matrizADr[i][j] += matrizA[i][n]*matrizDr[n][j];
            }
        }
    }

    printf("\nMatriz A*Dr: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf(" %d ",matrizADr[i][j]);
        }
    }

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            for(int n=0;n<LINHA;n++)
            {
                matrizDrADr[i][j] = matrizDr[i][n]*matrizADr[n][j];
            }
        }
    }

    printf("\n\n");
    printf("\nMatriz Dr*A*Dr: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf(" %d ",matrizADr[i][j]);
        }
    }

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            if(matrizADr[i][j]==matrizDrADr[i][j])
            {
                drazin++;
            }
        }
    }
    //se A*Dr == Dr*A*Dr é de drazin.
    if(drazin==LINHA*COLUNA)
    {
        printf("\n\n\tÉ uma matriz de Drazin\n");
    }
    else
    {
        printf("\n\n\tNão é uma matriz de Drazin\n");
    }

return 0;
}
