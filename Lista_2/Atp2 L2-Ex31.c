#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA],cont1=0,contquadrado=0;

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
            if(j==0 && matriz[i][j]==1)
            {
                cont1++;
            }
            if(j==2 && matriz[i][j]== matriz[i][j-1]*matriz[i][j-1])
            {
                contquadrado++;
            }
        }
    }
    if(cont1==COLUNA && contquadrado==LINHA)
    {
        printf("\n\tÉ uma matriz de Vandermonde\n");
    }
    else
    {
        printf("\n\tNão é uma matriz de VAndermonde\n");
    }
return 0;
}
