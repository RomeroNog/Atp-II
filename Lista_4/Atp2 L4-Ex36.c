#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    FILE *arq = fopen("Atp2 L4-Ex36.bin","wb");
    if(arq == NULL)
    {
        printf("Erro!\n");
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }
    int tamanho = rand()%1000;
    int array[tamanho];
    for(int i=0;i<tamanho;i++)
    {
        array[i] = rand()%1000;
        fwrite(&array[i],sizeof(int),1,arq);
    }
    fclose(arq);

    FILE *arq2 = fopen("Atp2 L4-Ex36.bin","rb");
    if(arq2 == NULL)
    {
        printf("Erro!\n");
    }

    int array_leitura[tamanho],soma=0;
    float media,diferenca_media=0.0,variancia=0.0,desvio_padrao;

    for(int i=0;i<tamanho;i++)
    {
        fread(&array_leitura[i],sizeof(int),1,arq2);
        soma +=array_leitura[i];
    }
    media = (float)soma/(float)tamanho;

    rewind(arq2);
    for(int i=0;i<tamanho;i++)
    {
        fread(&array_leitura[i],sizeof(int),1,arq2);
        diferenca_media += (array_leitura[i]-media)*(array_leitura[i]-media);
    }
    variancia = (float)diferenca_media/(float)tamanho;

    desvio_padrao = sqrt(variancia);

    printf("Média dos valores: %.2f\n",media);
    printf("variância dos valores: %.2f\n",variancia);
    printf("Desvio padrão dos valores: %.2f\n",desvio_padrao);



    fclose(arq2);
return 0;
}
