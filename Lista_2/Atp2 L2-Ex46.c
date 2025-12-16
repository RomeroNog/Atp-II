#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

#define LINHA 5
#define COLUNA 5
int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int matriz[LINHA][COLUNA],maior,segmaior,aux;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            matriz[i][j] = rand()%200;

            if(i==0 && j==1)
            {
                maior = matriz[i][j-1];
                segmaior = matriz[i][j];
                if(segmaior>maior)
                {
                    aux = maior;
                    maior = segmaior;
                    segmaior = maior;
                }
            }
            if(matriz[i][j]>maior)
            {
                aux = maior;
                maior = matriz[i][j];
                segmaior = aux;
            }
            if(maior>matriz[i][j] && matriz[i][j]>segmaior)
            {
                segmaior = matriz[i][j];
            }
        }
    }

    printf("\nMatriz normal: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matriz[i][j]);
        }
    }

    printf("\nMaior: %d",maior);
    printf("\nSegundo Maior: %d",segmaior);

return 0;
}
