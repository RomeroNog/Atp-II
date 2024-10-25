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
    printf("Digite o nome do aluno: ");
    gets(aluno.nome);
    printf("Digite a matrícula do aluno: ");
    scanf("%d",&aluno.matricula);
    printf("Digite a nota do aluno: ");
    scanf("%f",&aluno.nota);
    return aluno;
}
void imprimir(Aluno al)
{
    printf("Dados do aluno: \n ");
    printf("Nome: %s\n ",al.nome);
    printf("Matrícula: %d\n ",al.matricula);
    printf("Nota: %.2f\n ",al.nota);

}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Aluno aluno;
    aluno = leitura();
    imprimir(aluno);

return 0;
}
