#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char titulo[50];
    char diretor[50];
    int ano_lancamento;
}Filme;
Filme leitura()
{
    Filme movie;

    printf("Digite o t�tulo do filme: ");
    gets(movie.titulo);

    fflush(stdin);

    printf("Digite o diretor do filme: ");
    gets(movie.diretor);

    printf("Digite o ano de lan�amento do filme: ");
    scanf("%d",&movie.ano_lancamento);
    printf("\n\n");

    return movie;
}
void imprimir(Filme m)
{
    printf("Dados do filme: \n");
    printf("T�tulo: %s\n",m.titulo);
    printf("Diretor: %s\n",m.diretor);
    printf("Ano de lan�amento: %d\n",m.ano_lancamento);
    printf("\n\n");
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Filme movie = leitura();
    imprimir(movie);

return 0;
}
