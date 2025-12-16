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


    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("\nElemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
            soma+=matriz[i][j];
        }
    }
    printf("\n\n\tSoma dos elementos da matriz: %d\n",soma);
return 0;
}
