#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA], linha, coluna;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("Qual q linha e coluna do elemento desejado: \n");
    scanf("%d",&linha);
    scanf("%d",&coluna);

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            if(i==linha && j==coluna)
            {
                printf("\n\tElemento desejado: %d\n",matriz[i][j]);
            }
        }
    }
return 0;
}
