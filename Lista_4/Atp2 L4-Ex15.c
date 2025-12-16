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
    int atualiza;

    arq = fopen("Atp2 L4-Ex15.bin","rb+");
    if (arq == NULL)
    {
        printf("Erro!\n");
        return 0;
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }
    Registro* registr = malloc(NUM_REGISTROS*sizeof(Registro));

    registr[0].ra = 5678;
    registr[0].nota = 9.5;
    strcpy(registr[0].nome,"IG");


    registr[1].ra = 8910;
    registr[1].nota = 7.3;
    strcpy(registr[1].nome,"Corinthians");


    registr[2].ra = 1234;
    registr[2].nota = 8.5;
    strcpy(registr[2].nome,"Jefferson");

    for (int i=0; i<NUM_REGISTROS;i++)
    {
        fwrite(&registr[i], sizeof(Registro), 1, arq);
    }
    printf("Qual arquivo deseja atualizar(0-2): ");
    scanf("%d",&atualiza);

    printf("Digite o novo RA: ");
    scanf("%d",&registr[atualiza].ra);

    printf("Digite a nova nota: ");
    scanf("%f",&registr[atualiza].nota);
    fflush(stdin);

    printf("Digite o novo nome: ");
    gets(registr[atualiza].nome);
    int tam = strlen(registr[atualiza].nome);

    registr[atualiza].nome[tam] ='\0';

    fclose(arq);

    arq = fopen("Atp2 L4-Ex15.bin","wb");


   for (int i=0; i<NUM_REGISTROS;i++)
    {
        fwrite(&registr[i], sizeof(Registro), 1, arq);
    }

    fclose(arq);

    arq = fopen("Atp2 L4-Ex15.bin","rb");

    printf("\nRegistros atualizados!\n");
    for (int i=0; i<NUM_REGISTROS;i++)
    {
        fread(&registr[i], sizeof(Registro), 1, arq);
        printf("\nRegistro %d: \n",i+1);
        printf("RA: %d\n",registr[i].ra);
        printf("Nota: %.2f\n",registr[i].nota);
        printf("Nome: %s\n",registr[i].nome);
    }
    free(registr);
    fclose(arq);
return 0;
}



