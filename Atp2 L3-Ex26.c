#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char nome[50];
    char disciplina[50];
    float salario;
}Professor;
Professor leitura()
{
    Professor prof;
    printf("Digite o nome do professor: ");
    gets(prof.nome);
    fflush(stdin);

    printf("Digite a disciplina do professor: ");
    gets(prof.disciplina);
    fflush(stdin);

    printf("Digite o salário do professor: ");
    scanf("%f",&prof.salario);
    printf("\n\n");

    return prof;
}
void imprimir(Professor pr)
{
    printf("Dados do professor: \n");
    printf("Nome: %s\n",pr.nome);
    printf("Disciplina: %s\n",pr.disciplina);
    printf("Salário: %.2f\n",pr.salario);
    printf("\n\n");
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Professor prof = leitura();
    imprimir(prof);

return 0;
}
