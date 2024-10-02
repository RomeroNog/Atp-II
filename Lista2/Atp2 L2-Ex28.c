#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LINHA 4
#define COLUNA 4
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matrizlinear[LINHA*COLUNA]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int inicio,fim,meio,numero,aux=0;

    inicio=0;
    fim=(LINHA*COLUNA)-1;
    meio =(fim-inicio)/2;

    printf("Digite um número paraver se ele está na matriz: ");
    scanf("%d",&numero);

            if(numero>matrizlinear[fim] || numero<matrizlinear[inicio])
            {
                printf("O número não se encontra no intervalo");
                return 0;
            }
            if(numero==matrizlinear[meio] || numero==matrizlinear[inicio] || numero==matrizlinear[fim])
            {
                printf("O número está na matriz!");
                return 0;
            }
            while(aux==0)
            {
                if(numero>matrizlinear[meio])
                {
                    inicio = meio;
                    meio += (fim-inicio)/2;
                }
                if(numero<matrizlinear[meio])
                {
                    fim = meio;
                    meio -= (fim-inicio)/2;
                }
                if(numero==matrizlinear[meio])
                {
                    printf("O número está na matriz!");
                    aux++;
                }
            }
return 0;
}
