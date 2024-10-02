#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 2
#define COLUNA 2
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matrizA[LINHA][COLUNA], matrizB[LINHA][COLUNA];
    int elem_iguais=0;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("\nElemento da matriz A[%d][%d]: ",i,j);
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
            if(matrizA[i][j]==matrizB[i][j])
            {
                elem_iguais++;
            }
        }
    }
    if(elem_iguais==4)
    {
        printf("\n\n\tAs matrizes são iguais\n");
    }
    else
    {
        printf("\n\n\tAs matrizes são diferentes\n");
    }
return 0;
}
