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
    int matriz[LINHA][COLUNA],menor,segmenor,aux;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            matriz[i][j] = rand()%100;
            if(i==0 && j==1)
            {
                menor = matriz[i][j-1];
                segmenor = matriz[i][j];
                if(segmenor<menor)
                {
                    aux = menor;
                    menor = segmenor;
                    segmenor = menor;
                }
            }
            if(matriz[i][j]<menor)
            {
                aux = menor;
                 menor= matriz[i][j];
                 segmenor= aux;
            }
            if(segmenor>matriz[i][j] && matriz[i][j]>menor)
            {
                segmenor = matriz[i][j];
            }
        }
    }


    printf("\nMatriz Aleatória: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf("%d ",matriz[i][j]);
        }
    }

    printf("\nMenor: %d",menor);
    printf("\nSegundo menor: %d",segmenor);


return 0;
}
