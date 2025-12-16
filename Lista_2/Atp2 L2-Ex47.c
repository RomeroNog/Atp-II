#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA],circulante=0;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Digite o elemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for(int i=0;i<LINHA-1;i++)
    {
        for(int j=0;j<COLUNA-1;j++)
        {
            if(matriz[i][j] == matriz[i+1][j+1] )
            {
                circulante++;
            }
        }
    }

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
                if(matriz[i][j]== matriz[i+1][0])
                {
                    circulante++;
                }
        }
    }

    if(circulante==LINHA+COLUNA)
    {
        printf("\n\tÉ uma matriz circulante\n");
    }
    else
    {
        printf("\n\tNão é uma matriz circulante\n");
    }

return 0;
}
