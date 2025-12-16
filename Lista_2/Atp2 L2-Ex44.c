#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matrizHankelcirc[LINHA][COLUNA+2],hankel=0;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Digite o elementos[%d][%d]: ",i,j);
            scanf("%d",&matrizHankelcirc[i][j]);
        }
    }
    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA-1;j++)
        {
            matrizHankelcirc[i][j+3] = matrizHankelcirc[i][j];
        }
    }

    printf("Matriz Digitada: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA+2;j++)
        {
            printf(" %d ",matrizHankelcirc[i][j]);
        }
    }

    for(int i=0;i<LINHA-1;i++)
    {
        for(int j=0;j<COLUNA+1;j++)
        {
            if(matrizHankelcirc[i][j]!= matrizHankelcirc[i+1][j+1])
            {
                hankel++;
            }
        }
    }
    printf("hankel: %d",hankel);


    for(int i=0;i<LINHA-1;i++)
    {
        for(int j=4;j>0;j--)
        {
            if(matrizHankelcirc[i][j]== matrizHankelcirc[i+1][j-1])
            {
                hankel++;
            }
        }
    }
    printf("hankel: %d",hankel);

    if(hankel==(LINHA*(COLUNA+2))+1)
    {
        printf("\n\n\t… uma matriz de Hankel circular\n");
    }
    else
    {
        printf("\n\n\tN„o È uma matriz de Hanekl circular\n");
    }

return 0;
}

