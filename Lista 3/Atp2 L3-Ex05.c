#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char nome[50];
    int matricula;
    float nota;

}Aluno;
Aluno* leitura()
{
    Aluno* aluno = malloc(sizeof(Aluno));
    if(aluno == NULL)
    {
        printf("Não foi possível alocar!");

    }
    printf("Digite o nome: ");
    gets(aluno->nome);
    printf("Qual o número da matrícula: ");
    scanf("%d",&aluno->matricula);
    printf("Digite a nota do aluno: ");
    scanf("%f",&aluno->nota);
    return aluno;
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Aluno* aluno= leitura();
    printf("Dados do aluno:\n ");
    printf("Nome do aluno: %s\n ",aluno->nome);
    printf("Matrícula do aluno: %d\n ",aluno->matricula);
    printf("Nota do aluno: %.2f\n",aluno->nota);

    free(aluno);
return 0;
}
