#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA],hankel=0;

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
            if((i+j==1 || i+j==3) && matriz[i][j]==matriz[j][i])
            {
                hankel++;
            }
            if(i+j== 2 && (matriz[i][j]==matriz[j][i] || matriz[i][j]== matriz[i+1][j-1]))
            {
                hankel++;
            }
        }
    }
    if(hankel==7)
    {
        printf("\n\tÉ uma matriz de Hankel\n");
    }
    else
    {
        printf("\n\tNão é uma matriz de Hankel\n");
    }
return 0;
}
