#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA];

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("\nElemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("\n\nMatriz lida: \n");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matriz[i][j]);

        }
    }
return 0;
}
