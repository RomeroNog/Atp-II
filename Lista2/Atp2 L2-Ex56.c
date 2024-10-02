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
    int matriz[LINHA][COLUNA], primeiro,segundo,terceiro,aux;


    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            matriz[i][j] = rand()%100;
            if(i==0 && j==2)
            {
                primeiro=matriz[i][j-2];
                segundo=matriz[i][j-1];
                terceiro=matriz[i][j];
                if(segundo>primeiro)
                {
                    aux = primeiro;
                    primeiro = segundo;
                    segundo = aux;
                }
                if(terceiro>segundo)
                {
                    aux = terceiro;
                    terceiro = segundo;
                    segundo= aux;
                }
                if(terceiro>primeiro)
                {
                    aux = terceiro;
                    terceiro = segundo;
                    segundo = primeiro;
                    primeiro = aux;
                }
            }
            if(matriz[i][j]>primeiro)
            {
                terceiro = segundo;
                segundo = primeiro;
                primeiro = matriz[i][j];
            }
            if(primeiro>matriz[i][j] && matriz[i][j]> segundo)
            {
                terceiro = segundo;
                segundo = matriz[i][j];
            }
            if(primeiro>matriz[i][j] && matriz[i][j]< segundo && matriz[i][j]>terceiro)
            {
                terceiro = matriz[i][j];
            }
        }
    }

    printf("\nMatriz aleatória: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matriz[i][j]);
        }
    }

    printf("\nMaior número: %d",primeiro);
    printf("\nSegundo maior número: %d",segundo);
    printf("\nTerceiro maior número: %d",terceiro);

return 0;
}
