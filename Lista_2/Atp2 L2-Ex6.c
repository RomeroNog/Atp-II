#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 5
#define COLUNA 5

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA],multiplic=1;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("\nElemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
            if(i==j)
            {
                multiplic= multiplic*matriz[i][j];
            }

        }
    }
    printf("A diagonal principal vale: %d",multiplic);
return 0;
}
