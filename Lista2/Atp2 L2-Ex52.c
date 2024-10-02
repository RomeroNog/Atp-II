#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 2
#define COLUNA 2
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matrizSylvester[LINHA][COLUNA];
    int funcaoP,funcaoQ,grau[2],coeficientef1[2],coeficientef2[2];
    int somagrau=0,sylvester=0;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Digite o elemento[%d][%d]: ",i,j);
            scanf("%d",&matrizSylvester[i][j]);
        }
    }


    for(int i=0;i<LINHA;i++)
    {
        printf("Digite o grau de x da função %d: ",i+1);
        scanf("%d",&grau[i]);
        somagrau+=grau[i];
    }
    if(somagrau==LINHA)
    {
        sylvester++;
    }


    for(int i=0;i<LINHA;i++)
    {
        printf("Digite os coeficientes da função 1: ");
        scanf("%d",&coeficientef1[i]);
    }

    printf("\n\n");

    for(int i=0;i<LINHA;i++)
    {
        printf("Digite os coeficientes da função 2: ");
        scanf("%d",&coeficientef2[i]);
    }



    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            if(i==0)
            {
                if(matrizSylvester[i][j]==coeficientef1[j])
                {
                    sylvester++;
                }
            }
            else
            {
                if(matrizSylvester[i][j]==coeficientef2[j])
                {
                    sylvester++;
                }
            }
        }
    }


    if(sylvester==(LINHA*COLUNA)+1)
    {
        printf("\n\n\tÉ uma matriz de Sylvester\n");
    }
    else
    {
        printf("\n\n\tNão é uma matriz de Sylvester\n");
    }
return 0;
}
