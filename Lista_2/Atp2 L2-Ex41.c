#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA],toeplitz=0;

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
            if(matriz[i][j]== matriz[i+1][j+1])
            {
                toeplitz++;
            }
        }
    }
    if(toeplitz==LINHA-1+COLUNA-1)
    {
        printf("\n\tÉ uma matriz de toeplitz\n");
    }
    else
    {
        printf("\n\tNão é uma matriz de toeplitz\n");
    }









return 0;
}
