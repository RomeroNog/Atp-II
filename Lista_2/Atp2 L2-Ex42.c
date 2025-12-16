#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

#define LINHA 2
#define COLUNA 2
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float matrizHH[LINHA][COLUNA]={{0.8,0.6},{0.6,-0.8}};
    float matrizHHt[LINHA][COLUNA]={{0.8,0.6},{0.6,-0.8}};
    float identidade[LINHA][COLUNA] ={{1,0},{0,1}};
    float matrizHHxHHt[LINHA][COLUNA];
    float matrizHHtxHH[LINHA][COLUNA];
    int house=0;

    //verificaremos se HH == HHt, dps se HHt*HH==I e HH*HHt==I

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            if(matrizHHt[i][j]== matrizHH[i][j])
            {
                house++;
            }
        }
    }

    printf("\nMatriz HHxHHt: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            matrizHHxHHt[i][j]= matrizHH[i][0]*matrizHHt[0][j] + matrizHH[i][1]*matrizHHt[1][j];
            printf(" %f",matrizHHxHHt[i][j]);
        }
    }

    printf("\n\n");

    printf("\nMatriz HHtxHH: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            matrizHHtxHH[i][j] = matrizHHt[i][0]*matrizHH[0][j]+ matrizHHt[i][1]*matrizHH[1][j];
            printf(" %f ",matrizHHtxHH[i][j]);
        }
    }

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            if(matrizHHtxHH[i][j]==identidade[i][j])
            {
                house++;
            }
            if(matrizHHxHHt[i][j]==identidade[i][j])
            {
                house++;
            }
        }
    }

    if(house == LINHA*COLUNA*3)
    {
        printf("\n\n\tÉ uma matriz de HouseHolder\n");
    }
    else
    {
        printf("\n\n\tNão é uma matriz de HouseHolder\n");
    }

return 0;
}
