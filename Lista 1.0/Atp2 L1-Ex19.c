#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float str[8],medvalor;
    float k=1,*pntr,aux=0;
    pntr = &aux;

    for(int i=0;i<8;i++,k++)
    {
        printf("Digite o %.0f n�mero: ",k);
        scanf("%f",&str[i]);
        fflush(stdin);
    }
    for(int j=0;str[j]!='\0';j++)
    {
        *pntr+=str[j];
    }
    medvalor = (float)*pntr/(float)8;
    printf("A m�dia dos valores �: %f",medvalor);
return 0;
}
