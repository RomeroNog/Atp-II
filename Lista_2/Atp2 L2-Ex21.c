#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA],linha[9],coluna[9],k=0;
    int maisdeum=0,colunaigual=0;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j]!=0 && matriz[i][j]!=1)
            {
                return 0;
            }
        }
    }

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            if(matriz[i][j]==1)
            {
                linha[k]= i;
                coluna[k]= j;
                k++;
            }
        }
    }
    linha[k]='\0';
    coluna[k]='\0';
    for(int y=0;linha[y]!='\0';y++)
    {
        for(int u=1;u<10;u++)
        {
            if(linha[y]==linha[u+y])
            {
                maisdeum++;
            }
        }

    }
    for(int y=0;coluna[y]!='\0';y++)
    {
        for(int u=1;u<10;u++)
        {
            if(coluna[y]==coluna[u+y])
            {
                colunaigual++;
            }
        }
    }
    if(maisdeum!=0 || colunaigual!=0)
    {
        printf("Não é uma matriz de permutação");
    }
    else
    {
        printf("É uma matriz de permutação");
    }
return 0;
}
