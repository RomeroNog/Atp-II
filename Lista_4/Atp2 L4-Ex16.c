#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define NUM_REGISTROS 3
typedef struct{
    int ra;
    float nota;
    char nome[24];
}Registro;
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq = fopen("Atp2 L4-Ex16.bin","rb+");
    int del;
    if(arq == NULL)
    {
        printf("Erro!\n");
        return 0;
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }
    Registro* regist = malloc(NUM_REGISTROS*sizeof(Registro));
    Registro* aux = malloc(sizeof(Registro));

    regist[0].ra = 1234;
    regist[0].nota = 9.5;
    strcpy(regist[0].nome,"Palmeiras");


    regist[1].ra = 5678;
    regist[1].nota = 7.3;
    strcpy(regist[1].nome,"Corinthians");


    regist[2].ra = 8910;
    regist[2].nota = 8.5;
    strcpy(regist[2].nome,"Jefferson");

    for (int i=0; i<NUM_REGISTROS;i++)
    {
        fwrite(&regist[i], sizeof(Registro), 1, arq);
    }
    fseek(arq,0,SEEK_END);

    printf("Digite o número do registro que deseja deletar(0-2): ");
    scanf("%d",&del);


    for(int i=0;i<NUM_REGISTROS;i++)
    {
        if(i==del)
        {
            aux->ra = regist[i].ra;
            aux->nota = regist[i].nota;
            strcpy(aux->nome,regist[i].nome);

            regist[i].ra = regist[NUM_REGISTROS-1].ra;
            regist[i].nota = regist[NUM_REGISTROS-1].nota;
            strcpy(regist[i].nome,regist[NUM_REGISTROS-1].nome);

            regist[NUM_REGISTROS-1].ra = aux->ra;
            regist[NUM_REGISTROS-1].nota = aux->nota;
            strcpy(regist[NUM_REGISTROS-1].nome,aux->nome);
        }
    }
    fclose(arq);

    arq = fopen("Atp2 L4-Ex16.bin","wb");
    if (arq == NULL)
    {
        printf("Erro!\n");
        return 0;
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    for (int i=0; i<NUM_REGISTROS-1;i++)
    {
        fwrite(&regist[i], sizeof(Registro), 1, arq);
    }

    rewind(arq);
    printf("\nRegistros ordenados com base no RA!\n");
    for (int i=0; i<NUM_REGISTROS-1;i++)
    {
        fread(&regist[i], sizeof(Registro), 1, arq);
        printf("\nRegistro %d: \n",i+1);
        printf("RA: %d\n",regist[i].ra);
        printf("Nota: %.2f\n",regist[i].nota);
        printf("Nome: %s\n",regist[i].nome);
    }

    free(aux);
    free(regist);
    fclose(arq);
return 0;
}



