#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 4
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA], coluna0=0,coluna1=0,coluna2=0;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
            if(j==0)
            {
                coluna0+=matriz[i][j];
            }
            if(j==1)
            {
                coluna1+=matriz[i][j];
            }
            if(j==2)
            {
                coluna2+=matriz[i][j];
            }
        }
    }
    printf("\nSoma da coluna 1: %d",coluna0);
    printf("\nSoma da coluna 2: %d",coluna1);
    printf("\nSoma da coluna 3: %d",coluna2);
    printf("\nSoma das colunas: %d\n",coluna0+coluna1+coluna2);
return 0;
}
