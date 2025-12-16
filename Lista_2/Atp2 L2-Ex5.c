#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 2
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA], matriz_transp[COLUNA][LINHA];

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("\nElemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            matriz_transp[j][i] = matriz[i][j];
        }
    }
    printf("\n\tMatriz Transposta: ");
    for(int i=0;i<COLUNA;i++)
    {
        printf("\n\t\t");
        for(int j=0;j<LINHA;j++)
        {
            printf("%d ",matriz_transp[i][j]);
        }
    }
return 0;
}
