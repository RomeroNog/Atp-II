#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define NUM_ALUNOS 3
typedef struct{
    int ra;
    float nota;
    char nome[24];
}Aluno;
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq = fopen("Atp2 L4-Ex30.bin","rb+");
    if (arq == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    Aluno* estudante = malloc(NUM_ALUNOS*sizeof(Aluno));
    estudante[0].ra=1234;
    estudante[0].nota=9.5;
    strcpy(estudante[0].nome,"Igor");

    estudante[1].ra = 5678;
    estudante[1].nota = 8.7;
    strcpy(estudante[1].nome,"Miguel");

    estudante[2].ra = 8910;
    estudante[2].nota = 6.4;
    strcpy(estudante[2].nome,"Manoel");

    for (int i=0; i<NUM_ALUNOS;i++)
    {
        fwrite(&estudante[i],sizeof(Aluno),1,arq);
    }
    rewind(arq);

    for(int i=0;i<NUM_ALUNOS;i++)
    {
        fread(&estudante[i],sizeof(Aluno),1,arq);
        printf("\nAluno %d: \n",i+1);
        printf("RA: %d\n",estudante[i].ra);
        printf("Nota: %.2f\n",estudante[i].nota);
        printf("Nome: %s\n",estudante[i].nome);
    }

    free(estudante);
    fclose(arq);
return 0;
}
