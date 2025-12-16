#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
float media_vetor(float vetor[],float qnt)
{
    float *pntr, aux=0,media=0;

    pntr= &aux;

    for(int j=0;vetor[j]!='\0';j++)
    {
      *pntr+=vetor[j];
    }
     return media=(float)*pntr/(float)qnt;
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float str[5],medvetor=0,k=1;

    for(int i=0;i<5;i++,k++)
    {
        printf("Digite o %.0f número: ",k);
        scanf("%f",&str[i]);
        fflush(stdin);
    }
    printf("\n\n");
    medvetor=media_vetor(str,5);

    printf("Medvetor: %.2f",medvetor);
return 0;
}
