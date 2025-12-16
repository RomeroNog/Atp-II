
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA], matrizTransp[COLUNA][LINHA];
    int simetria=0;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("\nElemento da normal [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            matrizTransp[j][i] = matriz[i][j];
        }
    }
    printf("\nMatriz Normal: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matriz[i][j]);
        }
    }
    printf("\nMatriz Transposta: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matriz[j][i]);
        }
    }

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            if(matriz[i][j]==matrizTransp[i][j])
            {
                simetria++;
            }
        }
    }
    printf("\nsimetria: %d\n\n",simetria);
    if(simetria==9)
    {
        printf("\tMatriz é simétrica\n\n");
    }
    else
    {
        printf("\tMatriz não é simétrica\n\n");
    }

return 0;
}
