#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

#define LINHA 4
#define COLUNA 4
int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int matriz[LINHA][COLUNA],soma=0;
    float media=0;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            matriz[i][j] = 50+ rand()%(150-49);
            if(j>i)
            {
                soma+=matriz[i][j];
            }
        }
    }

    printf("\nMatriz normal: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matriz[i][j]);
        }
    }

    media = (float)soma/(float)6;

    printf("\n\n\tMédia dos elementos acima da diagonal principal: %.2f\n",media);





return 0;
}
