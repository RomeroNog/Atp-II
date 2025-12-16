#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA], maior;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Digite o elemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
            if(i==0 && j==0)
            {
                maior = matriz[i][j];
            }
            if(matriz[i][j]>maior)
            {
                maior = matriz[i][j];
            }
        }
    }

    printf("\nO maior número da matriz é: %d",maior);
return 0;
}
