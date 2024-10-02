#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 4
#define COLUNA 4
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA],diagonal=0;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Digite o elemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
            if(i!=j)
            {
                if(matriz[i][j]==0)
                {
                    diagonal++;
                }
            }
        }
    }
    //o diagonal deve ser igual ao numero de elementos totais menos diagonal, ja que o if baseia no numero de zeros
    if(diagonal==12)
    {
        printf("\n\tÉ uma matriz diagonal");
    }
    else
    {
        printf("\n\tNão é uma matriz diagonal");
    }
return 0;
}
