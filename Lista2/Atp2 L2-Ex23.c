#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[LINHA][COLUNA]={{1,2,3},{4,5,6},{7,8,9}};
    int matrizdeter[LINHA][COLUNA+2];
    int multiplica=0,pos1=1,pos2=1,pos3=1,neg1=1,neg2=1,neg3=1;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA-1;j++)
        {
            matrizdeter[i][j+3] = matriz[i][j];
        }
    }
    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            matrizdeter[i][j] = matriz[i][j];
        }
    }
    printf("Matriz Normal: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA;j++)
        {
            printf(" %d ",matriz[i][j]);
        }
    }

    printf("\n\nMatriz Alterada: ");
    for(int i=0;i<LINHA;i++)
    {
        printf("\n");
        for(int j=0;j<COLUNA+2;j++)
        {
            printf(" %d ",matrizdeter[i][j]);
        }
    }

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA+2;j++)
        {
            if(i==j)
            {
                pos1 *= matrizdeter[i][j];
            }
            if(j==1 && i==0)
            {
                for(int n=0;n<LINHA;n++)
                {
                    pos2 *=matrizdeter[i+n][j+n];
                }
            }
            if(j==2 && i==0)
            {
                for(int n=0;n<LINHA;n++)
                {
                    pos3 *=matrizdeter[i+n][j+n];
                }
            }

        }
    }
    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA+2;j++)
        {
            if(j+i==4)
            {
                neg1 *=matrizdeter[i][j];
            }
            if(j+i==3)
            {
                    neg2 *=matrizdeter[i][j];
            }
            if(j+i==2)
            {
                    neg3 *=matrizdeter[i][j];
            }
        }
    }

    printf("\n\npositivo total: %d",pos1+pos2+pos3);
    printf("\n\nnegativo total: %d",neg1+neg2+neg3);

    printf("\n\n\tDeterminante da matriz: %d\n\n",pos1+pos2+pos3-(neg1+neg2+neg3));
return 0;
}
