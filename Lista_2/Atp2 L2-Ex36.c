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
    int matriz[LINHA][COLUNA],aux;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            matriz[i][j] = rand()%100;
        }
    }
    printf("Matriz com aleatórios: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matriz[i][j]);
        }
    }
    for(int k=0;k<COLUNA-1;k++)
    {
        for(int i=0;i<LINHA-1-k;i++)
        {
            for(int j=0;j<COLUNA;j++)
            {
                if(matriz[i][j]>matriz[i+1][j])
                {
                    aux = matriz[i][j];
                    matriz[i][j] = matriz[i+1][j];
                    matriz[i+1][j] = aux;
                }
            }
        }
    }
    printf("\n\n");
    printf("Matriz com aleatórios ordenados em coluna: ");
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
