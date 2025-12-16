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
    FILE *arq;
    arq = fopen("Atp2 L4-Ex12.bin","wb");
    if (arq == NULL)
    {
        printf("Erro!\n");
        return 0;
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }
    Registro regist = {1914,9.5,"Palmeiras"};

    fwrite(&regist,sizeof(Registro),1,arq);

    fclose(arq);

    printf("\n");

    FILE *arq1;
    int qnt;
    arq1 = fopen("Atp2 L4-Ex12.bin","r+b");
    if (arq1 == NULL)
    {
        printf("Erro!\n");
        return 0;
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    printf("Digite o número de registros que deseja adicionar: ");
    scanf("%d",&qnt);

    Registro* reg = malloc(qnt*sizeof(Registro));

    fseek(arq1,0,SEEK_END);

    for(int i=0;i<qnt;i++)
    {
        printf("\nRegistro %d: \n",i+1);

        printf("Digite o Ra: ");
        scanf("%d",&reg[i].ra);

        printf("Digite a nota: ");
        scanf("%f",&reg[i].nota);
        fflush(stdin);
        printf("Digite o nome: ");
        gets(reg[i].nome);
        fflush(stdin);

        fwrite(&reg[i],sizeof(Registro),1,arq1);
    }
    if(qnt!=0)
    {
        printf("Registros adicionados com sucesso!\n");
    }
    else
    {
        printf("Arquivo não alterado!\n");
    }


    free(reg);
    fclose(arq1);
return 0;
}


