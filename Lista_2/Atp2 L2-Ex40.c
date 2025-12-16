#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 5
#define COLUNA 5
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA], matrizRotacio[LINHA][COLUNA];

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
            matrizRotacio[i][j] = matriz[(COLUNA-1)-j][i];
        }
    }
    printf("\nMatriz Rotacionada: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matrizRotacio[i][j]);
        }
    }
return 0;
}
