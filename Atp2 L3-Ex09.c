#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char nome[50];
    int idade;
    float altura;
}Pessoa;
Pessoa leitura()
{
    Pessoa pessoa;
    printf("Digite seu nome: ");
    gets(pessoa.nome);
    printf("Digite sua idade: ");
    scanf("%d",&pessoa.idade);
    printf("Digite sua altura: ");
    scanf("%f",&pessoa.altura);
    return pessoa;
}
void imprimir(Pessoa p)
{
    printf("Pessoa: \n ");
    printf("Nome: %s\n ",p.nome);
    printf("Idade: %d\n ",p.idade);;
    printf("Altura: %.2f\n\n ",p.altura);
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Pessoa pessoa;
    pessoa = leitura();
    imprimir(pessoa);

    int tam;
    tam = sizeof(Pessoa);
    printf("Tamanho da struct Pessoa: %d\n",tam);


return 0;
}
