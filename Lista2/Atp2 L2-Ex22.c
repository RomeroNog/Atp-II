#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

#define LINHA 4
#define COLUNA 4
int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int matriz[LINHA][COLUNA],aux;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            matriz[i][j] =  rand()%100;
        }
    }
    printf("Matriz aleatoria: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matriz[i][j]);
        }
    }
    for(int k=0;k<3;k++)
    {
        for(int i=0;i<LINHA;i++)
        {
            for(int j=0;j<COLUNA-1-k;j++)
            {
                    if(matriz[i][j]>matriz[i][j+1])
                    {
                        aux = matriz[i][j];
                        matriz[i][j] = matriz[i][j+1];
                        matriz[i][j+1] = aux;
                    }
            }
        }
    }
    printf("\nMatriz aleatoria ordenada: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matriz[i][j]);
        }
    }
return 0;
}
