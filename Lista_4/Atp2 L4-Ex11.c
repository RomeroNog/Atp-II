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
    FILE *arq;
    arq = fopen("Atp2 L4-Ex11.bin","wb");
    if (arq == NULL)
    {
        printf("Erro!\n");
        return 0;
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    Registro* regi = malloc(NUM_REGISTROS*sizeof(Registro));
    regi[0].ra=1234;
    regi[0].nota=9.5;
    strcpy(regi[0].nome,"Igor");

    regi[1].ra = 5678;
    regi[1].nota = 8.7;
    strcpy(regi[1].nome,"Miguel");

    regi[2].ra = 8910;
    regi[2].nota = 6.4;
    strcpy(regi[2].nome,"Manoel");

    for (int i=0; i<NUM_REGISTROS;i++)
    {
        fwrite(&regi[i], sizeof(Registro), 1, arq);
    }

    free(regi);
    fclose(arq);

    printf("\n");

    Registro reg;
    FILE *arq1;
    int req=0,cont=0;

    arq1  = fopen("Atp2 L4-Ex11.bin","rb");
    if(arq1 == NULL)
    {
        printf("Erro!\n");
        return 0;
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n\n");
    }
    printf("Digite o registro que requitado(0-2): ");
    scanf("%d",&req);

    fseek(arq1,req*sizeof(Registro),SEEK_SET);
    fread(&reg,sizeof(Registro),1,arq1);
    printf("\nRegistro requisitado: \n");
    printf("RA: %d\n",reg.ra);

    printf("Nota: %.2f\n",reg.nota);
    printf("Nome: %s\n",reg.nome);


    fclose(arq1);
return 0;
}
