#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 4
#define COLUNA 4
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA];
    int soma, diagonal;


    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Digite o elemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("Qual diagonal deseja somar: ");
    scanf("%d",&diagonal);

    if(diagonal>2 || diagonal<1)
    {
        printf("\nDiagonal não existe");
        return 0;
    }

    printf("\nMatriz: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf(" %d ",matriz[i][j]);
        }
    }
    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            if(diagonal == 1 && i==j)
            {
                soma+=matriz[i][j];
            }
            if(diagonal==2 && i+j==3)
            {
                soma+=matriz[i][j];
            }
        }
    }
    printf("\n\n\tSoma da diagoanl desejada: %d\n",soma);

return 0;
}

