#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char nome[40];
    int codigo;
    float preco;
}Produto;

typedef struct{
    char name[40];
    int cod;
    float price;
}Novoprod;

Produto leitura()
{
    Produto produtc;
    printf("Digite o nome do produto: ");
    gets(produtc.nome);

    printf("Digite o código do produto: ");
    scanf("%d",&produtc.codigo);

    printf("Digite o preço do produto: ");
    scanf("%f",&produtc.preco);

    printf("\n\n");

    return produtc;
}
void imprimir(Novoprod newp)
{
    printf("Dados do produto: \n");
    printf("Nome: %s\n",newp.name);
    printf("Código: %d\n",newp.cod);
    printf("Preço: %.2f\n",newp.price);
    printf("\n\n");
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Produto produtc = leitura();

    Novoprod newprod;

    strcpy(newprod.name, produtc.nome);
    newprod.cod = produtc.codigo;
    newprod.price = produtc.preco;

    imprimir(newprod);

return 0;
}


