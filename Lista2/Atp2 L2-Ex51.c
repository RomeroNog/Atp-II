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
    int multipli=1;

    num_primos[0] = 2;
    num_primos[1] = 3;

    for(int primo=5;k<25;primo++)
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
            if(i+j==2)
            {
                multipli*=matriz[i][j];
            }
        }
    }

    printf("\nMatriz de números primos");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matriz[i][j]);
        }
    }

    printf("\n\n\tMultiplicação da diagonal secundária: %d\n",multipli);






return 0;
}
