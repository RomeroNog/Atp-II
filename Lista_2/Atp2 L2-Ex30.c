#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 4
#define COLUNA 4
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA],soma=0;
    float media=0;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Digite o elemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
            soma+=matriz[i][j];
        }
    }
    media = (float)soma/(float)(LINHA*COLUNA);
    printf("\n\tMédia dos elementos: %.2f\n",media);
return 0;
}
