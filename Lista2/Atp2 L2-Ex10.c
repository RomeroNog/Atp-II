#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 4
#define COLUNA 4
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA],menor;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Digite o elemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
            if(i==0 && j==0)
            {
                menor = matriz[i][j];
            }
            if(matriz[i][j]<menor)
            {
                menor = matriz[i][j];
            }
        }
    }
    printf("\nO maior número da matriz é: %d",menor);
return 0;
}
