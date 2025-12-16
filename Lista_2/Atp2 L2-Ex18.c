#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA],diagonal1=0,resto=0;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
            if(i==j && matriz[i][j]==1)
            {
                diagonal1++;
            }
            if(i!=j && matriz[i][j]==0)
            {
                resto++;
            }
        }
    }
    if(diagonal1=3 && resto==6)
    {
        printf("\n\tÉ uma matriz identidade\n");
    }
    else
    {
        printf("\n\tNão é uma matriz identidade\n");
    }
return 0;
}
