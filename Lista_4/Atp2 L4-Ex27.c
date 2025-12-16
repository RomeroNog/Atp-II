#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define NUM_REGISTRO 6
#define QNT_REGIST 2
typedef struct{
    int ra;
    float nota;
    char nome[20];
}Registro;
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq = fopen("Atp2 L4-Ex27.bin","wb");
    if (arq == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    Registro* regist = malloc(NUM_REGISTRO*sizeof(Registro));
    regist[0].ra = 1234;
    regist[0].nota = 9.5;
    strcpy(regist[0].nome,"Palmeiras");


    regist[1].ra = 5678;
    regist[1].nota = 7.3;
    strcpy(regist[1].nome,"Corinthians");


    regist[2].ra = 8910;
    regist[2].nota = 8.5;
    strcpy(regist[2].nome,"Jefferson");

    regist[3].ra = 1357;
    regist[3].nota = 1.5;
    strcpy(regist[3].nome,"Bahia");


    regist[4].ra = 2468;
    regist[4].nota = 0.3;
    strcpy(regist[4].nome,"Botafogo");


    regist[5].ra = 7401;
    regist[5].nota = 4.5;
    strcpy(regist[5].nome,"Flamengo");

    for(int i=0;i<NUM_REGISTRO;i++)
    {
        fwrite(&regist[i],sizeof(Registro),1,arq);
    }

    fclose(arq);

    arq = fopen("Atp2 L4-Ex27.bin","rb");

    char name[30];
    strcpy(name,"Atp2 L4-Ex27");
    int cont=1;

    for(int i=0;i<NUM_REGISTRO;i+=QNT_REGIST,cont++)
    {
        fread(regist,sizeof(Registro),QNT_REGIST,arq);

        char saida[30];
        strcpy(saida,name);

        char num_reg[10];
        sprintf(num_reg,"_0%d.bin",cont);
        strcat(saida,num_reg);

        FILE *arq_saida = fopen(saida,"wb");

        for(int j=0;j<QNT_REGIST;j++)
        {
            fwrite(&regist[j],sizeof(Registro),1,arq_saida);
        }
            fclose(arq_saida);
    }

    fclose(arq);
return 0;
}


