#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char rua[50];
    int numero;
    char cidade[50];
}Endereco;
typedef struct{
    char nome[50];
    int idade;
    float altura;
    Endereco info;
}Ficha;
Ficha leitura(){
    Ficha pessoa;
    printf("Digite seu nome: ");
    gets(pessoa.nome);

    printf("Digite sua idade: ");
    scanf("%d",&pessoa.idade);

    printf("Digite sua altura: ");
    scanf("%f",&pessoa.altura);

    fflush(stdin);

    printf("Digite sua rua: ");
    gets(pessoa.info.rua);

    printf("Digite o numero da rua: ");
    scanf("%d",&pessoa.info.numero);

    fflush(stdin);

    printf("Digite a cidade: ");
    gets(pessoa.info.cidade);

    printf("\n\n");

    return pessoa;
}
void imprimir(Ficha pes)
{
    printf("Dados da pessoa: \n");
    printf("Nome: %s\n",pes.nome);
    printf("Idade: %d\n",pes.idade);
    printf("Altura: %.2f\n",pes.altura);
    printf("Rua: %s\n",pes.info.rua);
    printf("Número: %d\n",pes.info.numero);
    printf("Cidade: %s\n",pes.info.cidade);
    printf("\n\n");
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Ficha pessoa = leitura();
    imprimir(pessoa);

return 0;
}
