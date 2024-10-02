#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

#define LINHA 4
#define COLUNA 4
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float matrizCauchy[LINHA][COLUNA]={{0.250000,0.333333,0.500000,1.000000},{0.200000,0.250000,0.333333,0.500000},{0.166667,0.200000,0.250000,0.333333},{0.142857,0.166667,0.200000,0.250000}};
    int cont=0;
    float  matriztest[LINHA][COLUNA],div,x[LINHA]={5,6,7,8},y[LINHA]={1,2,3,4};

    //se quiser um ex para x=5,6,7,8  e para y=1,2,3,4.


    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            div =1.0/(float)(x[i]-y[j]);
            matriztest[i][j] = div ;
        }
    }
    printf("teste: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf(" %f ",matriztest[i][j]);
        }
    }

    printf("\nCauchy: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf(" %f ",matrizCauchy[i][j]);
        }
    }
    printf("\n\n\n");
    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            if(floor(matrizCauchy[i][j]*100)== floor(matriztest[i][j]*100))
            {
               printf(" %f ",matrizCauchy[i][j]);
               cont++;
            }
        }
    }
    printf("cont: %d",cont);
    if(cont==LINHA*COLUNA)
    {
        printf("\n\n\tÉ uma matriz de Cauchy\n");
    }
    else
    {
        printf("\n\n\tNão é uma matriz de Cauchy\n");
    }

return 0;
}
