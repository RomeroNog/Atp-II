#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float matrizcauchygeral[LINHA][COLUNA]={{25,33,50},{20,25,33},{16,20,25}};
    float matriztest[LINHA][COLUNA];
    float x[LINHA]={4,5,6},y[LINHA]={1,2,3};
    float fx[LINHA],gy[LINHA];
    float divisor;
    int cont=0;
    // a diferença para a outra segundo minhas pesquisas é que o denominador não é só x-y e sim f(x)-g(y)
    //eu defini f(x) como x+3 e g(y) como y+2

    for(int i=0;i<LINHA;i++)
    {
        fx[i] = x[i]+3;
        gy[i] = y[i]+2;
    }

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            divisor =1.0/(float)(fx[i]-gy[j]);
            matriztest[i][j] = floor(divisor*100) ;
        }
    }

    printf("teste: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf(" %.0f ",matriztest[i][j]);
        }
    }


    printf("\nCauchy: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf(" %.0f ",matrizcauchygeral[i][j]);
        }
    }


    printf("\n\n\n");
    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            if(matrizcauchygeral[i][j]== matriztest[i][j])
            {

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
