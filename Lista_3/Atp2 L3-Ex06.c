#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    int dia;
    int mes;
    int ano;

}Data;
typedef struct{
    char nome[50];
    int idade;
    Data nascimento;

}Pessoa;
Pessoa leitura()
{
    Pessoa person;
    printf("Digite o nome: ");
    gets(person.nome);
    printf("Digite a idade: ");
    scanf("%d",&person.idade);
    printf("Digite o dia de nascimento: ");
    scanf("%d",&person.nascimento.dia);
    printf("Digite o mes de nascimento: ");
    scanf("%d",&person.nascimento.mes);
    printf("Digite o ano de nascimento: ");
    scanf("%d",&person.nascimento.ano);
    printf("\n\n");
    return person;
}
void imprimir(Pessoa p)
{
    printf("Dados da pessoa:");
    printf("Nome: %s\n",p.nome);
    printf("Idade: %d\n",p.idade);
    printf("Data de nascimento: %d/%d/%d\n",p.nascimento.dia,p.nascimento.mes,p.nascimento.ano);
    printf("\n\n");

}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Pessoa person = leitura();
    imprimir(person);

return 0;
}
