#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 2
#define COLUNA 2
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matrizReflex[LINHA][COLUNA];
    int x,y,reflex=0;

    printf("Digite um ponto cartesiano: ");
    scanf("%d",&x);
    scanf("%d",&y);

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Digite o elemento[%d][%d]: ",i,j);
            scanf("%d",&matrizReflex[i][j]);
        }
    }
    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            if(matrizReflex[i][j] = 2*x*y)
            {
                reflex++;
            }
            if(matrizReflex[i][j] == (x*x)-(y*y))
            {
                reflex++;
            }
            if(matrizReflex[i][j] == (y*y)-(x*x))
            {
                reflex++;
            }
        }
    }
    if(reflex==LINHA*COLUNA)
    {
        printf("\n\n\tÉ uma matriz reflexiva\n");
    }
    else
    {
        printf("\n\n\tNão é uma matriz reflexiva\n");
    }

return 0;
}
