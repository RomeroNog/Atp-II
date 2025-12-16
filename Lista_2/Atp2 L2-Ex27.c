#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA],matrizresultante[LINHA][COLUNA],escalar;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Digite o elemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("\nDigite um escalar para multiplicar: ");
    scanf("%d",&escalar);

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            matrizresultante[i][j] = escalar*matriz[i][j];
        }
    }
    printf("\n\tMatriz resultante: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n\t\t");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matrizresultante[i][j]);
        }
    }
    printf("\n");
return 0;
}
