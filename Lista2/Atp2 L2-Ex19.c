#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 2
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matrizA[LINHA][COLUNA], matrizB[COLUNA][LINHA], matrizmulti[2][2];

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Elemento matriz A [%d][%d]: ",i,j);
            scanf("%d",&matrizA[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<COLUNA;i++)
    {
        for(int j=0;j<LINHA;j++)
        {
            printf("Elemento matriz B [%d][%d]: ",i,j);
            scanf("%d",&matrizB[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            matrizmulti[i][j] = matrizA[i][0]*matrizB[0][j]+ matrizA[i][1]*matrizB[1][j]+matrizA[i][2]*matrizB[2][j];
        }
    }

    printf("\n\tMatriz resultante da multiplicação: ");
    for(int i=0;i<2;i++)
    {
        printf("\n\t\t");
        for(int j=0;j<2;j++)
        {
            printf("%d ",matrizmulti[i][j]);

        }
    }
    printf("\n");
return 0;
}
