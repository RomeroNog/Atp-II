#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA],num_primos[25],ehprimo=0,k=2,m=0;

    num_primos[0] = 2;
    num_primos[1] = 3;

    for(int primo=5;k<LINHA*COLUNA;primo++)
    {

        ehprimo=0;
        for(int i=2;i<primo;i++)
        {
            if(primo%i==0)
            {
                ehprimo++;
            }
        }
        if(ehprimo==0)
        {
            num_primos[k]=primo;
            k++;

        }
    }
    num_primos[k]='\0';
    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++,m++)
        {
            matriz[i][j]= num_primos[m];
        }
    }

    printf("\nMatriz de n�meros primos");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matriz[i][j]);
        }
    }

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++,m++)
        {
            matriz[i][j]= 1;
        }
    }

    printf("\nMatriz de n�meros substitu�dos por 1");
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
