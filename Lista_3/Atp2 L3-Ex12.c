#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define NUM_ALUNOS 2

typedef struct{
    char nome[50];
    int matricula;
    int telefone;
    float nota;
}Aluno;
Aluno* leitura()
{
    Aluno* aluno = malloc(NUM_ALUNOS*sizeof(Aluno));
    if(aluno == NULL)
    {
        printf("Não foi possível alocar!");
        return 0;
    }
    for(int i=0;i<NUM_ALUNOS;i++)
    {
        printf("Digite o nome do aluno %d: ",i+1);
        gets(aluno[i].nome);
        printf("Digite a matrícula do aluno %d: ",i+1);
        scanf("%d",&aluno[i].matricula);
        printf("Digite o telefone do aluno %d: ",i+1);
        scanf("%d",&aluno[i].telefone);
        printf("Digite a nota do aluno %d: ",i+1);
        scanf("%f",&aluno[i].nota);
        fflush(stdin);
        printf("\n\n");
    }
    return aluno;
}
void imprimir(Aluno* al)
{
    for(int i=0;i<NUM_ALUNOS;i++)
    {
        printf("Dados do aluno %d: \n",i+1);
        printf("Nome: %s\n",al[i].nome);
        printf("Matrícula: %d\n",al[i].matricula);
        printf("Telefone: %d\n",al[i].telefone);
        printf("Nota: %.2f\n",al[i].nota);
        printf("\n\n");
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Aluno* aluno = leitura();
    imprimir(aluno);

    free(aluno);
return 0;
}
