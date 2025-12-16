#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    int ra;
    float nota;
    char nome[24];
}Registro;
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Registro registr[7] =
    {
        {0,2.2,"Jakson"},
        {1,5.5,"Jeferson"},
        {2,4.4,"Palmeiras"},
        {3,3.3,"Corinthians"},
        {4,6.6,"Botafogo"},
        {5,7.7,"Criciuma"},
        {6,8.8,"Roberto"}
    };
    FILE *arq = fopen("testando.bin","wb");
    if(arq == NULL)
    {
        printf("Erro!\n");
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    for(int i=0;i<7;i++)
    {
        fwrite(&registr[i],sizeof(Registro),1,arq);
    }
    fclose(arq);

    FILE *arq1 = fopen("testando.bin","rb");
    if(arq1 == NULL)
    {
        printf("Erro!\n");
        return 0;
    }

    int inicio=0,fim=6,meio,req,cont=0;

    printf("Digite o ra do registro desejado(0-6): ");
    scanf("%d",&req);
    while(inicio<=fim)
    {
        meio = (inicio+fim)/2;
        fseek(arq1,meio*sizeof(Registro),SEEK_SET);

        Registro registro;
        fread(&registro,sizeof(Registro),1,arq);

        if(registro.ra>req)
        {
            fim = meio-1;
        }
        if(registro.ra<req)
        {
            inicio = meio+1;
        }
        if(registro.ra == req)
        {
            printf("\nRegistro desejado: \n");
            printf("RA: %d\n",registro.ra);
            printf("Nota: %.2f\n",registro.nota);
            printf("Nome: %s\n",registro.nome);
            cont++;
            return 0;
        }
    }
    if(!cont)
    {
        printf("\nRegistro não se encontra no arquivo binário!\n");
    }

    fclose(arq1);

return 0;
}
