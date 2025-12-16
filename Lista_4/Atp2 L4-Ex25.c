#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define NUM_REGISTRO 2
typedef struct{
    int ra;
    float nota;
    double media;
    char nome[40];
}Registro;
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq = fopen("Atp2 L4-Ex25.txt","r+");
    if (arq == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    Registro* reg = malloc(NUM_REGISTRO*sizeof(Registro));

    for(int i=0;i<NUM_REGISTRO;i++)
    {
        printf("\nDados do registro %d:\n",i+1);
        printf("Digite o RA: ");
        scanf("%d",&reg[i].ra);

        printf("Digite a nota: ");
        scanf("%f",&reg[i].nota);

        printf("Digite a média: ");
        scanf("%lf",&reg[i].media);

        fflush(stdin);

        printf("Digite o nome: ");
        gets(reg[i].nome);

        fflush(stdin);
    }
    for(int i=0;i<NUM_REGISTRO;i++)
    {
        fprintf(arq, "%d %.2f %.2lf %s\n",reg[i].ra,reg[i].nota,reg[i].media,reg[i].nome);
    }

    free(reg);
    fclose(arq);
return 0;
}

