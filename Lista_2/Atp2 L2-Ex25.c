#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 5
#define COLUNA 5

void imprimir_matriz(int matriz[LINHA][COLUNA])
{
    for(int  i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf(" %d ", matriz[i][j]);
        }
    }
    printf("\n");
}
int contvizinhovivo(int matriz[LINHA][COLUNA], int linha, int coluna)
{
    int vizinhovivo=0;
    for(int i=linha-1; i<=linha+1 ;i++)
    {
        for(int j=coluna-1; j<=coluna+1 ;j++)
        {
            if ((i>=0 && i<LINHA) && (j>=0 && j<COLUNA) && (i!=linha || j!=coluna)) {
                vizinhovivo += matriz[i][j];
            }
        }
    }
    return vizinhovivo;
}
void atualiza_matriz(int matriz[LINHA][COLUNA], int novamatriz[LINHA][COLUNA])
{
    for (int i=0;i<LINHA;i++)
    {
        for (int j=0;j<COLUNA;j++)
        {
            int vizinhovivo = contvizinhovivo(matriz,i,j);
            if (matriz[i][j]==1)
            {
                if (vizinhovivo<2 || vizinhovivo>3)
                {
                    novamatriz[i][j]=0;
                }
                else
                {
                    novamatriz[i][j]=1;
                }
            }
            else
            {
                if (vizinhovivo==3)
                {
                    novamatriz[i][j]=1;
                }
                else
                {
                    novamatriz[i][j]=0;
                }
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA]={
        {0, 0, 0, 1, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {1, 0, 0, 1, 0},
        {0, 0, 1, 0, 0}
    };

    int novamatriz[LINHA][COLUNA];
    int geracao=10;

    for (int i=0;i<geracao;i++)
    {
        printf("\n\nGeração %d:\n",i+1);
        imprimir_matriz(matriz);
        atualiza_matriz(matriz, novamatriz);

        for (int i=0;i<LINHA;i++)
        {
            for (int j=0;j<COLUNA;j++)
            {
                matriz[i][j] = novamatriz[i][j];
            }
        }
    }

return 0;
}
