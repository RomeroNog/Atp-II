#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matrizA[LINHA][COLUNA], matrizB[LINHA][COLUNA], matrizM[LINHA][COLUNA];
    int positivo[3]={0,0,0}, negativo[3]={0,0,0}, k=1, l=2, n=0, determinante[3]={0,0,0},m=0;
    int semelhante=0, matrizmulti1[LINHA][COLUNA], matrizmulti2[LINHA][COLUNA],elem_iguais=0;

    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Elemento matriz A [%d][%d]: ",i,j);
            scanf("%d",&matrizA[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Elemento matriz B [%d][%d]: ",i,j);
            scanf("%d",&matrizB[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<LINHA;i++)
    {
        for(int j=0;j<COLUNA;j++)
        {
            printf("Elemento matriz M [%d][%d]: ",i,j);
            scanf("%d",&matrizM[i][j]);
        }
    }
    for(int j=0;j<COLUNA;j++)
    {
        if(j==0)
        {
            positivo[m] += matrizA[n][n]*matrizA[k][k]*matrizA[l][l];
            negativo[m] += matrizA[n][n]*matrizA[k][l]*matrizA[l][k];
        }
        if(j==1)
        {
            positivo[m] += matrizA[n][k]*matrizA[k][l]*matrizA[l][n];
            negativo[m] += matrizA[n][k]*matrizA[k][n]*matrizA[l][l];
        }
        if(j==2)
        {
            positivo[m] += matrizA[n][l]*matrizA[k][n]*matrizA[l][k];
            negativo[m] += matrizA[n][l]*matrizA[k][k]*matrizA[l][n];
        }
    }
    determinante[m] = positivo[m]-negativo[m];
    m++;

    for(int j=0;j<COLUNA;j++)
    {
        if(j==0)
        {
            positivo[m] += matrizB[n][n]*matrizB[k][k]*matrizB[l][l];
            negativo[m] += matrizB[n][n]*matrizB[k][l]*matrizB[l][k];
        }
        if(j==1)
        {
            positivo[m] += matrizB[n][k]*matrizB[k][l]*matrizB[l][n];
            negativo[m] += matrizB[n][k]*matrizB[k][n]*matrizB[l][l];
        }
        if(j==2)
        {
            positivo[m] += matrizB[n][l]*matrizB[k][n]*matrizB[l][k];
            negativo[m] += matrizB[n][l]*matrizB[k][k]*matrizB[l][n];
        }
    }
    determinante[m] = positivo[m]-negativo[m];
    m++;

    for(int j=0;j<COLUNA;j++)
    {
        if(j==0)
        {
            positivo[m] += matrizM[n][n]*matrizM[k][k]*matrizM[l][l];
            negativo[m] += matrizM[n][n]*matrizM[k][l]*matrizM[l][k];
        }
        if(j==1)
        {
            positivo[m] += matrizM[n][k]*matrizM[k][l]*matrizM[l][n];
            negativo[m] += matrizM[n][k]*matrizM[k][n]*matrizM[l][l];
        }
        if(j==2)
        {
            positivo[m] += matrizM[n][l]*matrizM[k][n]*matrizM[l][k];
            negativo[m] += matrizM[n][l]*matrizM[k][k]*matrizM[l][n];
        }
    }
    determinante[m] = positivo[m]-negativo[m];

    //os determiantes dos 3 para serem invertíveis devem ser != 0 e uma das propriedades é que detA == detB
    if(determinante[m-2]==determinante[m-1] && determinante[m-2]!=0 && determinante[m]!=0)
    {
        for(int i=0;i<LINHA;i++)
        {
            for(int j=0;j<COLUNA;j++)
            {
                matrizmulti1[i][j] = matrizM[i][0]*matrizA[0][j]+ matrizM[i][1]*matrizA[1][j]+matrizM[i][2]*matrizA[2][j];
            }
        }
        for(int i=0;i<LINHA;i++)
        {
            for(int j=0;j<COLUNA;j++)
            {
                matrizmulti2[i][j] = matrizB[i][0]*matrizM[0][j]+ matrizB[i][1]*matrizM[1][j]+matrizB[i][2]*matrizM[2][j];
            }
        }
        for(int i=0;i<LINHA;i++)
        {
            for(int j=0;j<COLUNA;j++)
            {
                if(matrizmulti1[i][j]==matrizmulti2[i][j])
                {
                    elem_iguais++;
                }
            }
        }
        if(elem_iguais==LINHA*COLUNA)
        {
            printf("\n\tAs matrizes são semelhantes\n");
        }
        else
        {
            printf("\n\tAs matrizes não são semelhantes\n");
        }
    }
    else
    {
        printf("\n\tAs matrizes não são semelhantes\n");
    }
return 0;
}
