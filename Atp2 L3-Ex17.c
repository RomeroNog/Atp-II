#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char titulo[50];
    char diretor[50];
    int ano_lancamento;
}Filme;
Filme* leitura()
{
    Filme* filme = malloc(sizeof(Filme));
    printf("Digite o t�tulo do filme: ");
    gets(filme->titulo);

    fflush(stdin);

    printf("Digite o diretor do filme: ");
    gets(filme->diretor);

    printf("Digite o ano de lan�amento: ");
    scanf("%d",&filme->ano_lancamento);

    printf("\n\n");
    return filme;
}
void imprimir(Filme* f)
{
    printf("Dados do filme: \n");
    printf("T�tulo: %s\n",f->titulo);
    printf("Diretor: %s\n",f->diretor);
    printf("Ano de lan�amento: %d\n",f->ano_lancamento);
    printf("\n\n");
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Filme* filme = leitura();
    imprimir(filme);

    free(filme);
return 0;
}
