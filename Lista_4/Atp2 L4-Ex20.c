#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq = fopen("Atp2 L4-Ex20.bin","wb");
    if (arq == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo aberto para manipulação\n");
    }

    int qnt;
    float num;

    printf("Quantos números reais deseja passar para o arquivo bin: ");
    scanf("%d",&qnt);

    for(int i=0;i<qnt;i++)
    {
        printf("Digite o %d número: ",i+1);
        scanf("%f",&num);
        fwrite(&num,sizeof(float),1,arq);

    }

    fclose(arq);

    arq = fopen("Atp2 L4-Ex20.bin","rb");

    int cont=0;
    float numero,soma=0,media;

    while(1)
    {
        fread(&numero,sizeof(float),1,arq);
        if(feof(arq))
        {
            break;
        }
        soma+=numero;
        cont++;
    }
    printf("Soma: %.2f\n",soma);
    printf("Cont: %d\n",cont);

    media = (float)soma/(float)cont;

    printf("A média dos valores passodos ao arquivo bin: %.2f\n",media);

    fclose(arq);
return 0;
}

