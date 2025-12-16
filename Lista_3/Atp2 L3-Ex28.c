#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char nome[50];
    int idade;
    char endereco[50];
}Cliente;

Cliente leitura()
{
    Cliente fregues;

    printf("Digite o nome do fregues: ");
    gets(fregues.nome);

    printf("Digite a idade do fregues: ");
    scanf("%d",&fregues.idade);

    fflush(stdin);

    printf("Digite o endereço do fregues: ");
    gets(fregues.endereco);

    fflush(stdin);
    printf("\n\n");

    return fregues;
}

void imprimir(Cliente fr)
{
    printf("Dados do fregues: \n");
    printf("Nome: %s\n",fr.nome);
    printf("Idade: %d\n",fr.idade);
    printf("Endereço: %s\n",fr.endereco);
    printf("\n\n");
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Cliente fregues = leitura();
    imprimir(fregues);

return 0;
}
