#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char nome[50];
    int matricula;
    float nota;

}Aluno;
Aluno leitura()
{
    Aluno aluno;
    printf("Digite o nome: ");
    gets(aluno.nome);

    printf("Qual o número da matrícula: ");
    scanf("%d",&aluno.matricula);

    printf("Digite a nota do aluno: ");
    scanf("%f",&aluno.nota);
    printf("\n\n");
    return aluno;
}
void imprimir(Aluno al)
{
    printf("Dados do aluno:\n ");
    printf("Nome do aluno: %s\n ",al.nome);
    printf("Matrícula do aluno: %d\n ",al.matricula);
    printf("Nota do aluno: %.2f\n",al.nota);
    printf("\n\n");
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Aluno aluno;
    aluno = leitura();
    imprimir(aluno);


return 0;
}

