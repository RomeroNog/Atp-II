#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA],contador0=0;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Digite o elemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j]==0)
            {
                contador0++;
            }
        }
    }
    if(contador0>(LINHA*COLUNA/2))
    {
        printf("\n… uma matriz esparsa\n");
    }
    else
    {
        printf("\n\tN„o È uma matriz esparsa\n");
    }
return 0;
}
